#pragma once
#include "virtual_pool_controller.h"

class HeapAllocatorNode {
public:
	HeapAllocatorNode* nextNode;
	HeapAllocatorNode* prevNode;
	HeapAllocatorNode* nodeThatCausedAllocation;
	size_t bufferLength;
	void* buffer;
};

class VirtualPool {
public:
	HeapAllocatorNode* topHeapAllocatorNode;
	HeapAllocatorNode* firstHeapAllocatorNode;
	void* heapEnd;
	unsigned int heapAllocatorsCount;
	unsigned int heapObjectsAllocated;
	unsigned int heapMemoryAvailable;
	unsigned int heapMemoryAllocated;
	void* start;
	size_t size;
	unsigned int pissAppleCounter;
	unsigned int heapAllocationCallsAmount;
	unsigned int maxHeapAllocated;
	int isHeapAvailable;
	HeapAllocatorNode* currentHeapAllocatorNode;
	unsigned int unk1;
	unsigned int unk2;
	VirtualPoolController virtualPoolController;
	
	VirtualPool();
	static VirtualPool* __cdecl GetPool();
	static unsigned int __cdecl GetAllocTableIndexBasedOnAllocSize(size_t size);
	static void* __cdecl AllocateMemory(size_t size);
	static void __cdecl FreeMemory(void* ptr);
	
	void* AllocateMemoryInternal(size_t size);
	void* AllocateMemoryAligned(size_t size, int alignment);
	void FreeMemoryInternal(void* ptr);
	void* TwinHeapAlloc(HeapAllocatorNode* allocatorNode, size_t allocSize, int reserved);
	int HeapDealloc(void* ptr);
	void InitPool(void* memptr, size_t size);
	void* ReallocHeapAllocatorNode(HeapAllocatorNode* node, size_t allocSize, int reserved);
	void RemoveHeapAllocatorNodeFromChain(HeapAllocatorNode* allocatedNode);
	int FUN_001594d0(HeapAllocatorNode* node);
	void FUN_0015a800();
};

extern "C" VirtualPool VIRTUAL_POOL;
extern "C" void* POOL_21MB;