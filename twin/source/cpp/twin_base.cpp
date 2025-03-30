#include <XTL.h>
#include <stl.h>
#include "twin_base.h"

void* TwinBase::operator new(size_t size) {
	return VirtualPool::AllocateMemory(size);
}

void TwinBase::operator delete(void* ptr) {
	VirtualPool::FreeMemory(ptr);
}