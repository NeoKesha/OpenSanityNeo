#include "main.h"
#include "patcher.h"

void Patch(void* target, void* source);

void ApplyExePatches() {

}

void Patch(void* target, void* source) {
	DWORD oldProtect;
	VirtualProtect(target, 5, PAGE_EXECUTE_READWRITE, &oldProtect);
	byte* jmpOpcode = (byte*)target;
	int** address = (int**)(jmpOpcode + 1);
	intptr_t offset = (intptr_t)source - (intptr_t)target - 5;
	*jmpOpcode = 0xE9;
	*address = (int*)offset;
	VirtualProtect(target, 5, oldProtect, &oldProtect);
}