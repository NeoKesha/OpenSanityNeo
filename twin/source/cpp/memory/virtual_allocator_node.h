#pragma once

#define MEMORY_NODE_NEXT_PTR_FIELD_OFFSET 0x18
#define MEMORY_NODE_PREV_PTR_FIELD_OFFSET 0x1C

class VirtualAllocatorInfo {
public:
	void* firstEntry;
	size_t totalMemoryAlloc;
	size_t allocChunkSize;
	void* nextEntry;
	unsigned int maxEntries;
	unsigned int entriesLeft;
};

class VirtualAllocatorNode {
public:
	VirtualAllocatorInfo info;
	VirtualAllocatorNode* nextAllocator;
	VirtualAllocatorNode* previousAllocator;

	void InitSegments(size_t size, size_t segSize, VirtualAllocatorNode *ptr);
	void InsertNode(VirtualAllocatorNode **node);

	static void __cdecl ListInsertJonBurtonHack(byte* nodeA, byte** nodeB, size_t nextOffset, size_t prevOffset);
};

