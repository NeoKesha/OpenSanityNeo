#include <XTL.h>
#include <stl.h>
#include "virtual_pool_controller.h"

VirtualPoolController::VirtualPoolController() {
	ZeroMemory(this, sizeof(VirtualPoolController));
}

void  VirtualPoolController::CacheDealloc(VirtualAllocatorNode *node) {
	int idx1 = ((int)node - (int)this->lastNodeTop) >> 0xc;
	
	VirtualAllocatorNode* ptr = this->lastNode + idx1;
	if (node != 0) {
		void* nextEntry = ptr->info.nextEntry;
		ptr->info.nextEntry = node;
		node->info.firstEntry = nextEntry;
		ptr->info.entriesLeft += 1;
	}
	
	int idx2 = this->memoryAllocSizeIndices[idx1];
	if (ptr->info.maxEntries == ptr->info.entriesLeft) {
		void* nextEntry = this->rootNode.info.nextEntry;
		this->rootNode.info.nextEntry = ptr;
		ptr->info.firstEntry = nextEntry;
		this->rootNode.info.entriesLeft += 1;
		VirtualAllocatorNode::ListInsertJonBurtonHack((byte*)ptr, (byte**)(this->allocatorCache + idx2), MEMORY_NODE_NEXT_PTR_FIELD_OFFSET, MEMORY_NODE_PREV_PTR_FIELD_OFFSET);
	} else if (ptr != this->allocatorCache[idx2]) {
		ptr->InsertNode(this->allocatorCache + idx2);
	}
}

void* VirtualPoolController::CachePoolAlloc(int allocSizeTableIndex) {
	for (VirtualAllocatorNode* ptr = this->allocatorCache[allocSizeTableIndex]; ptr != 0; ptr = ptr->previousAllocator) {
		if (ptr->info.entriesLeft != 0) {
			VirtualAllocatorNode* nextEntry = (VirtualAllocatorNode*)ptr->info.nextEntry;
			ptr->info.nextEntry = nextEntry->info.firstEntry;
			ptr->info.entriesLeft -= 1;
			if (nextEntry != 0) {
				return nextEntry;
			}
		}
	}
	
	if (this->rootNode.info.entriesLeft != 0) {
		VirtualAllocatorNode* ptr = (VirtualAllocatorNode*)this->rootNode.info.nextEntry;
		this->rootNode.info.nextEntry = ptr->info.firstEntry;
		this->rootNode.info.entriesLeft -= 1;
		if (ptr != 0) {
			int idx = ((int)ptr - (int)this->lastNode) >> 5;
			this->memoryAllocSizeIndices[idx] = (short)allocSizeTableIndex;
			ptr->InitSegments(0x1000, SEG_TABLE[allocSizeTableIndex], (VirtualAllocatorNode*)(idx * 0x1000 + (int)this->lastNodeTop));
			if (this->allocatorCache[allocSizeTableIndex] == 0) {
				this->allocatorCache[allocSizeTableIndex] = ptr;
				ptr->nextAllocator = 0;
				ptr->previousAllocator = 0;
			} else {
				this->allocatorCache[allocSizeTableIndex]->nextAllocator = ptr;
				ptr->previousAllocator = this->allocatorCache[allocSizeTableIndex];
				this->allocatorCache[allocSizeTableIndex] = ptr;
			}
			
			if (ptr->info.entriesLeft != 0) {
				VirtualAllocatorNode* nextEntry = (VirtualAllocatorNode*)ptr->info.nextEntry;
				ptr->info.nextEntry = nextEntry->info.firstEntry;
				ptr->info.entriesLeft -= 1;
				return nextEntry;
			}
		}
	}
	
	return 0;
}