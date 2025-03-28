#include <XTL.h>
#include <stl.h>
#include "virtual_allocator_node.h"

void VirtualAllocatorNode::InitSegments(size_t size, size_t segSize, VirtualAllocatorNode* ptr) {
	this->info.totalMemoryAlloc = size;
	this->info.allocChunkSize = segSize;
	
	unsigned int segments = size / segSize;
	this->info.firstEntry = (void*)ptr;
	this->nextAllocator = 0;
	this->previousAllocator = 0;
	this->info.entriesLeft = segments;
	this->info.maxEntries = segments;

	for (int i = 0; i < this->info.entriesLeft; ++i) {
		VirtualAllocatorNode* nextPtr = 0;
		if (i < this->info.entriesLeft - 1) {
			nextPtr = (VirtualAllocatorNode*)((byte*)ptr + this->info.allocChunkSize);
		} else {
			nextPtr = 0;
		}
		ptr->info.firstEntry = nextPtr;
		ptr = nextPtr;
	}
	this->info.nextEntry = this->info.firstEntry;
}

void VirtualAllocatorNode::InsertNode(VirtualAllocatorNode **node) {
	VirtualAllocatorNode::ListInsertJonBurtonHack((byte*)this, (byte**)node, MEMORY_NODE_NEXT_PTR_FIELD_OFFSET, MEMORY_NODE_PREV_PTR_FIELD_OFFSET);
	if (*node == 0) {
		*node = this;
		this->nextAllocator = 0;
		this->previousAllocator = 0;
		return;
	}
	(*node)->nextAllocator = this;
	this->previousAllocator = *node;
	*node = this;
}

//I hate my life and i miss my wife
void __cdecl VirtualAllocatorNode::ListInsertJonBurtonHack(byte* nodeA, byte** nodeB, size_t nextOffset, size_t prevOffset) {
	int thisOffset1Value = *(int *)(nodeA + nextOffset);
	if (thisOffset1Value != 0) {
		if (*(int *)(nodeA + prevOffset) == 0) {
			*(int *)(thisOffset1Value + prevOffset) = 0;
			*(int *)(nodeA + prevOffset) = 0;
			*(int *)(nodeA + nextOffset) = 0;
			return;
		}
		*(int *)(thisOffset1Value + prevOffset) = *(int *)(nodeA + prevOffset);
		*(int *)(nextOffset + *(int *)(nodeA + prevOffset)) = *(int *)(nodeA + nextOffset);
		*(int *)(nodeA + prevOffset) = 0;
		*(int *)(nodeA + nextOffset) = 0;
		return;
	}
	int thisOffset2Value = *(int *)(nodeA + prevOffset);
	if (thisOffset2Value == 0) {
		*nodeB = (byte *)0x0;
		*(int *)(nodeA + prevOffset) = 0;
		*(int *)(nodeA + nextOffset) = 0;
		return;
	}
	*(int *)(thisOffset2Value + nextOffset) = 0;
	*nodeB = *(byte **)(nodeA + prevOffset);
	*(int *)(nodeA + prevOffset) = 0;
	*(int *)(nodeA + nextOffset) = 0;
}