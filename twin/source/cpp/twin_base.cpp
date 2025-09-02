#include <XTL.h>
#include <stl.h>
#include "twin_base.h"

void* TwinBase::operator new(size_t size) {
	return VirtualPool::AllocateMemory(size);
}

void TwinBase::operator delete(void* ptr) {
	VirtualPool::FreeMemory(ptr);
}

extern "C" Reflection reflection;
Reflection reflection;

Reflection::Reflection() {
	int cnt = REFLECTION_DATA.cnt;
	
	vtables = new void*[cnt];
	names = new const char*[cnt];
	int* ptr = (int*)&REFLECTION_DATA;
	++ptr;
	static char buffer[256];
	for (int i = 0; i < cnt; ++i) {
		void* addr1 = (void*)ptr[0];
		const char* addr2 = (const char*)ptr[1];
		sprintf(buffer, "PTR: %X => %s", addr1, addr2);
		OutputDebugString(buffer);
		vtables[i] = addr1;
		names[i] = addr2;
		ptr += 2;
	}
}

const char* Reflection::GetName(void* vtable) {
	int cnt = REFLECTION_DATA.cnt;
	for (int i = 0; i < cnt; ++i) {
		if (vtables[i] == vtable) {
			return names[i];
		}
	}
	
	return "NONE";
}