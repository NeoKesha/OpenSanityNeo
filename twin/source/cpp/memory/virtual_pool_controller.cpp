#include <XTL.h>
#include <stl.h>
#include "virtual_pool_controller.h"

VirtualPoolController::VirtualPoolController() {
	ZeroMemory(this, sizeof(VirtualPoolController));
}

void  VirtualPoolController::CacheDealloc(VirtualAllocatorNode *node) {
	
}

void* VirtualPoolController::CachePoolAlloc(int allocSizeTableIndex) {
	return 0;
}