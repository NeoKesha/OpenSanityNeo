#pragma once

#define AssertNonImplemented {\
	OutputDebugStringA(__FUNCTION__);\
	while(true);\
}

#define AllocateMemory(size) (FUN_000D06B0(size)) 
#define FreeMemory(ptr) (FUN_000D06D0(ptr)) 
extern "C" void* __cdecl FUN_000D06B0(size_t size);
extern "C" void __cdecl FUN_000D06D0(void* ptr);

class TwinBase {
public:
    static void* operator new(size_t size);
    static void operator delete(void* ptr);
};

//#define FUNNY_001