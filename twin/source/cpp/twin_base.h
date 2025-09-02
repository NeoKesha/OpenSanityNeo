#pragma once
#include <memory/virtual_pool.h>
#define AssertNonImplemented {\
	OutputDebugStringA(__FUNCTION__);\
	while(true);\
}
#define PrintMe {\
	OutputDebugStringA(__FUNCTION__);\
}
#define PrintVtableAddr(x) {\
	static char buffer[512];\
	sprintf(buffer, "VTable print %X", *(int*)(x));\
	OutputDebugString(buffer);\
}
#define PrintAddr(x) {\
	static char buffer[512];\
	sprintf(buffer, "Addr %X", (x));\
	OutputDebugString(buffer);\
}

//#define _AllocateMemory(size) (FUN_000D06B0(size)) 
#define _AllocateMemory(size) (VirtualPool::AllocateMemory(size)) 
//#define _FreeMemory(ptr) (FUN_000D06D0(ptr)) 
#define _FreeMemory(ptr) (VirtualPool::FreeMemory(ptr)) 
//extern "C" void* __cdecl FUN_000D06B0(size_t size);
//extern "C" void __cdecl FUN_000D06D0(void* ptr);

class TwinBase {
public:
    static void* operator new(size_t size);
    static void operator delete(void* ptr);
};


class ReflectionData {
public:
	int cnt;
};
class Reflection {
public:
	Reflection();
	const char* GetName(void* vtable);
	void** vtables;
	const char** names;
};
extern "C" ReflectionData REFLECTION_DATA;

//#define ENABLE_FUN