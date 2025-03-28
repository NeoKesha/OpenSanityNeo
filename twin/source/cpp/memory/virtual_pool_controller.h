#pragma once
#include "virtual_allocator_node.h"

extern "C" int SEG_TABLE[63];

class VirtualPoolController {
public:
	unsigned int allocatorsAmount;
	VirtualAllocatorNode* lastNode;
	short* memoryAllocSizeIndices;
	void* lastNodeTop;
	VirtualAllocatorNode rootNode;
	VirtualAllocatorNode* allocatorCache[64];
	void* nodesToDealloc[3];
	int nodeToDeallocIndex;
	
	VirtualPoolController();
	void  CacheDealloc(VirtualAllocatorNode *node);
	void* CachePoolAlloc(int allocSizeTableIndex);
};