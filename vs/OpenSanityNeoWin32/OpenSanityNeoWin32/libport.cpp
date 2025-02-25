#include "libport.h"

extern "C" void _fpmath() { }
extern "C" void __onexitinit() { }
extern "C" void _fptrap() { }
extern "C" void __initstdio() { }
extern "C" void __endstdio() { }
extern "C" void __cdecl terminate() { }

extern "C" void __stdcall RtlLeaveCriticalSectionAndRegion(int arg) { return; }
extern "C" void __stdcall MmQueryAddressProtect(int arg) { return; }
extern "C" void __stdcall MmClaimGpuInstanceMemory(int arg1, int arg2) { return; }
extern "C" void __stdcall KeStallExecutionProcessor(int arg) { return; }
extern "C" int __stdcall mainXapiStartup(int arg) { return 0; }
extern "C" void __stdcall MmFreeContiguousMemory(int arg) { return; }
extern "C" void __stdcall XapiBootToDash(int arg1, int arg2, int arg3) { return; }
extern "C" void __stdcall MmSetAddressProtect(int arg1, int arg2, int arg3) { return; }
extern "C" void TtfdDbgPrint() { return; }
extern "C" void __stdcall USBD_Init(int arg1, int arg2) { return; }
extern "C" void __cdecl sprintf() { return; }

extern "C" DWORD D3D__DirtyFlags = 0;
extern "C" DWORD D3D__TextureState[4][32] = {};
extern "C" DWORD D3D__RenderState[166] = {};
extern "C" XPP_DEVICE_TYPE XDEVICE_TYPE_GAMEPAD_TABLE = {};
extern "C" const DWORD D3DDIRTYFROMRENDERSTATE[46] = {};

extern "C" void __stdcall RtlSizeHeap(int arg1, int arg2, int arg3) { return; }
