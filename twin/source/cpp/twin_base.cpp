#include <XTL.h>
#include <stl.h>
#include "twin_base.h"

void* TwinBase::operator new(size_t size) {
	return FUN_000D06B0(size);
}

void TwinBase::operator delete(void* ptr) {
	FUN_000D06D0(ptr);
}