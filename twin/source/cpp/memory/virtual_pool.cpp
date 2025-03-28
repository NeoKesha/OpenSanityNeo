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
/*void* __cdecl VirtualPool::AllocateMemory(size_t size){
	return 0;
}

void __cdecl VirtualPool::FreeMemory(void* ptr){
	return;
}*/


void* VirtualPool::AllocateMemoryInternal(size_t size){
	return 0;
}

void* VirtualPool::AllocateMemoryAligned(size_t size, int alignment){
	return 0;
}

void VirtualPool::FreeMemoryInternal(void* ptr){
	return;
}

void* VirtualPool::TwinHeapAlloc(HeapAllocatorNode* allocatorNode, size_t allocSize){
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

void* VirtualPool::ReallocHeapAllocatorNode(HeapAllocatorNode* node, size_t allocSize){
	return 0;
}

void VirtualPool::RemoveHeapAllocatorNodeFromChain(HeapAllocatorNode* allocatedNode){
	return;
}

int VirtualPool::FUN_001594d0(HeapAllocatorNode* node){
	return 0;
}

void VirtualPool::FUN_0015a800(){
	return;
}
