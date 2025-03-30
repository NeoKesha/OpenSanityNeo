#include <XTL.h>
#include <stl.h>
#include "virtual_pool.h"

VirtualPool::VirtualPool() {
	ZeroMemory(this, sizeof(VirtualPool));
}
VirtualPool* __cdecl VirtualPool::GetPool() {
	static bool poolInitialized = false;
	if (!poolInitialized) {
		new (&VIRTUAL_POOL)VirtualPool();
		new (&VIRTUAL_POOL.virtualPoolController)VirtualPoolController();
		poolInitialized = true;
	}
	static bool memoryAllocated = false;
	if (!memoryAllocated) {
		POOL_21MB = VirtualAlloc(0, 0x1500000, MEM_COMMIT, PAGE_READWRITE);
		memoryAllocated = true;
		VIRTUAL_POOL.InitPool(POOL_21MB, 0x1500000);
	}
	
	return &VIRTUAL_POOL;
}

unsigned int VirtualPool::GetAllocTableIndexBasedOnAllocSize(size_t size) {
	if (size < 0x95) {
		return size - 1 >> 2;
	}
	if (0x120 < size) {
		if (0x200 < size) {
			if (0x400 < size) {
				if (size < 0x551) {
					return 0x3c;
				}
				return (0x800 < size) + 0x3d;
			}
			if (size < 0x2a1) {
				return (0x240 < size) + 0x38;
			}
			return (0x330 < size) + 0x3a;
		}
		if (0x170 < size) {
			if (size < 0x191) {
				return 0x35;
			}
			return (0x1c0 < size) + 0x36;
		}
		if (size < 0x131) {
			return 0x32;
		}
		return (0x150 < size) + 0x33;
	}
	if (0xcc < size) {
		if (0xf0 < size) {
			if (size < 0x101) {
				return 0x2f;
			}
			return (0x110 < size) + 0x30;
		}
		if (size < 0xd1) {
			return 0x2c;
		}
		return (0xe0 < size) + 0x2d;
	}
	if (0xa8 < size) {
		if (size < 0xb9) {
			return (0xb0 < size) + 0x28;
		}
		return (0xc0 < size) + 0x2a;
	}
	if (size < 0x9d) {
		return 0x25;
	}
	return (0xa0 < size) + 0x26;
}

void* __cdecl VirtualPool::AllocateMemory(size_t size){
	return VirtualPool::GetPool()->AllocateMemoryInternal(size);
}

void __cdecl VirtualPool::FreeMemory(void* ptr){
	VirtualPool::GetPool()->FreeMemoryInternal(ptr);
}

void* VirtualPool::AllocateMemoryInternal(size_t size){
	if (size != 0 && size < 0x1000) {
		int allocationType = VirtualPool::GetAllocTableIndexBasedOnAllocSize((size + 3) & 0xfffffffc);
		return this->virtualPoolController.CachePoolAlloc(allocationType);
	} else if (this->isHeapAvailable != 0) {
		this->heapAllocationCallsAmount += 1;
		return this->TwinHeapAlloc(this->topHeapAllocatorNode, (size + 0xf) & 0xfffffff0, 0);
	}
	
	return 0;
}

void* VirtualPool::AllocateMemoryAligned(size_t size, int alignment){
	return 0;
}

void VirtualPool::FreeMemoryInternal(void* ptr){
	return;
}

void* VirtualPool::TwinHeapAlloc(HeapAllocatorNode* allocatorNode, size_t allocSize, int reserved){
	HeapAllocatorNode* resultedNode = 0;
	size_t bufferLengthCurrent = 1000000000;
	while (allocatorNode != 0) {
		size_t bufferLength = allocatorNode->bufferLength & 0x7fffffff;
		size_t afterAllocationLength = bufferLength - allocSize;
		//TODO: why != -1?
		if (allocSize <= bufferLength && afterAllocationLength != -1 && afterAllocationLength < bufferLengthCurrent) {
			resultedNode = allocatorNode;
			bufferLengthCurrent = afterAllocationLength;
		}
		allocatorNode = allocatorNode->nextNode;
		this->pissAppleCounter += 1;
	}
	if (resultedNode != 0) {
		return this->ReallocHeapAllocatorNode(resultedNode, allocSize, 0);
	}
	return 0;
}

int VirtualPool::HeapDealloc(void* ptr){
	return 0;
}

void VirtualPool::InitPool(void* memptr, size_t size){
	size_t size1 = size - size / 5;
	size_t size2 = size1 - 0x10;
	this->virtualPoolController.allocatorCache[0x3f] = (VirtualAllocatorNode*)((size1 -1 + (int)memptr) & 0xfffffff0);
	HeapAllocatorNode* element = (HeapAllocatorNode*)(((int)memptr + 0xfU) & 0xfffffff0);
	ZeroMemory(element, sizeof(HeapAllocatorNode));
	element->bufferLength = ((int)memptr + (size2 - (int)element) - 0x10) & 0xfffffff0 | 0x80000000;
	this->currentHeapAllocatorNode = element;
	this->topHeapAllocatorNode = element;
	this->firstHeapAllocatorNode = element;
	this->start = memptr;
	this->size = size2;
	this->heapEnd = 0;
	this->heapAllocatorsCount = 0;
	this->heapMemoryAvailable = 0;
	this->isHeapAvailable = 0;
	this->heapObjectsAllocated = 0;
	this->heapMemoryAllocated = 0;
	this->pissAppleCounter = 0;
	this->heapAllocationCallsAmount = 0;
	this->maxHeapAllocated = 0;
	this->unk2 = 0;
	this->heapEnd = (void*)((int)element + (element->bufferLength & 0x7fffffff));
	this->heapAllocatorsCount = 1;
	this->isHeapAvailable = 1;
	this->heapMemoryAvailable = size2;
	VirtualAllocatorNode* lastSegment = this->virtualPoolController.allocatorCache[0x3f];
	unsigned int segCnt = (size / 5 - 0x10) / 0x1022;
	this->unk1 = 0;
	this->virtualPoolController.allocatorsAmount = segCnt;
	this->virtualPoolController.lastNode = lastSegment;
	this->virtualPoolController.lastNodeTop = lastSegment + segCnt;
	this->virtualPoolController.memoryAllocSizeIndices = (short*)(lastSegment + segCnt + segCnt * 0x80);
	this->virtualPoolController.rootNode.InitSegments(segCnt * 0x20, 0x20, lastSegment);
	for (int i = 0; i < 0x3f; ++i) {
		this->virtualPoolController.allocatorCache[i] = 0;
	}
	this->virtualPoolController.nodesToDealloc[0] = 0;
	this->virtualPoolController.nodesToDealloc[1] = 0;
	this->virtualPoolController.nodesToDealloc[2] = 0;
	this->virtualPoolController.nodeToDeallocIndex = 0;
	return;
}

void* VirtualPool::ReallocHeapAllocatorNode(HeapAllocatorNode* node, size_t allocSize, int reserved){
	size_t bufferLength = node->bufferLength & 0x7fffffff;
	if (bufferLength < allocSize) {
		return 0;
	}
	if (bufferLength <= allocSize + 0x20) {
		this->currentHeapAllocatorNode = node->nextNode;
		this->RemoveHeapAllocatorNodeFromChain(node);
		node->bufferLength = node->bufferLength & 0x7fffffff;
		this->heapObjectsAllocated += 1;
		size_t newSize = (node->bufferLength & 0x7fffffff) + 0x10;
		this->heapMemoryAllocated += newSize;
		this->heapMemoryAvailable -= newSize;
		if (this->maxHeapAllocated < this->heapMemoryAllocated) {
			this->maxHeapAllocated = this->heapMemoryAllocated;
		}
		return &node->buffer;
	}
	HeapAllocatorNode* newHeapAloocatorNode = (HeapAllocatorNode*)((int)&node->buffer + allocSize);
	newHeapAloocatorNode->bufferLength = (bufferLength - allocSize - 0x10) | ((int)&node[1].nodeThatCausedAllocation + allocSize) & 0x80000000;
	newHeapAloocatorNode->nextNode = 0;
	newHeapAloocatorNode->prevNode = 0;
	this->RemoveHeapAllocatorNodeFromChain(node);
	node->bufferLength = node->bufferLength & 0x7fffffff; 
	this->heapObjectsAllocated += 1;
	if (this->topHeapAllocatorNode == 0) {
		this->topHeapAllocatorNode = newHeapAloocatorNode;
		newHeapAloocatorNode->prevNode = 0;
		newHeapAloocatorNode->nextNode = 0; 
	} else {
		this->topHeapAllocatorNode->prevNode = newHeapAloocatorNode;
		newHeapAloocatorNode->nextNode = this->topHeapAllocatorNode;
		this->topHeapAllocatorNode = newHeapAloocatorNode;
	}
	newHeapAloocatorNode->bufferLength |=  0x80000000;
	this->heapAllocatorsCount += 1;
	this->currentHeapAllocatorNode = newHeapAloocatorNode;
	node->bufferLength = node->bufferLength & 0x80000000 | allocSize;
	size_t a = (allocSize & 0x7fffffff) + 0x10;
	this->heapMemoryAvailable -= a;
	this->heapMemoryAllocated += a;
	if (this->maxHeapAllocated < this->heapMemoryAllocated) {
		this->maxHeapAllocated = this->heapMemoryAllocated;
	}
	size_t b = newHeapAloocatorNode->bufferLength & 0x7fffffff;
	newHeapAloocatorNode->nodeThatCausedAllocation = node;
	if ((void*)((int)&newHeapAloocatorNode[1].prevNode + b) < this->heapEnd) {
		*(HeapAllocatorNode**)((int)&newHeapAloocatorNode[1].prevNode + b) = newHeapAloocatorNode;
	}
	return &node->buffer;
}

void VirtualPool::RemoveHeapAllocatorNodeFromChain(HeapAllocatorNode* node){
	HeapAllocatorNode* prevNode = node->prevNode;
	if (prevNode == 0) {
		if (node->nextNode == 0) {
			this->topHeapAllocatorNode = 0;
		} else {
			node->nextNode->prevNode = 0;
			this->topHeapAllocatorNode = node->nextNode;
		}
	} else if (node->nextNode == 0) {
		prevNode->nextNode = 0;
	} else {
		prevNode->nextNode = node->nextNode;
		node->nextNode->prevNode = node->prevNode;
	}
	node->nextNode = 0;
	node->prevNode = 0;
	this->heapAllocatorsCount -= 1;
}

int VirtualPool::FUN_001594d0(HeapAllocatorNode* node){
	return 0;
}

void VirtualPool::FUN_0015a800(){
	return;
}
