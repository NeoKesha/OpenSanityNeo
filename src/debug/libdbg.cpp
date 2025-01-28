#include <XTL.h>
#include <stl.h>
#include <SIGNAL.H>
#include "libdbg.h"

char* debugPrintString;
char* debugCurrentFunction;
int debugPrintValue;
float debugPrintValueFloat;
int debugFPUStatus;
void* _this;
void* EBP;
void* ESP;
set <char*> functionNames;
map <void*, char*> addressToName;
map <void*, void*> retToFunc;

int enableCallog = 0;
void* funcMin = 0;
void* funcMax = 0;
HANDLE hLogFile = (HANDLE)-1;
char inited = 0;
char buffer[1024];

//Debug common functions
void __stdcall DbgInit() {
	ClearLog();

	funcDesc* ptr = (funcDesc*)FUNC_NAMES_START;
	while (ptr < (funcDesc*)FUNC_NAMES_END) {
		addressToName.insert(make_pair(ptr->funcPtr, ptr->funcName));
		if (funcMin == 0 || funcMin > ptr->funcPtr) {
			funcMin = ptr->funcPtr;
		}
		if (funcMax == 0 || funcMax < ptr->funcPtr) {
			funcMax = ptr->funcPtr;
		}
		++ptr;
	}
	
	returnDesc* retDescPtr = (returnDesc*)RETURN_TO_FUNC_MAP_START;
	while (retDescPtr < (returnDesc*)RETURN_TO_FUNC_MAP_END) {
		retToFunc.insert(make_pair(retDescPtr->retPtr, retDescPtr->funcPtr));
		++retDescPtr;
	}

	inited = 1;
}

void ClearLog() {
	DeleteFileA(TEXT("debug.log"));
	hLogFile = CreateFile(TEXT("debug.log"),  FILE_APPEND_DATA | FILE_GENERIC_READ,  0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL|FILE_FLAG_NO_BUFFERING|FILE_FLAG_WRITE_THROUGH, NULL);   
}

void Log(char* buffer) {
	DWORD dwBytesToWrite = (DWORD)strlen(buffer);
    DWORD dwBytesWritten = 0;
	
	WriteFile(hLogFile, buffer, dwBytesToWrite, &dwBytesWritten, NULL); 
}

//Debug special functions

void __stdcall PrintThisInfo() {
	void** vtablePtr = (void**)_this;
	if (functionNames.find(debugCurrentFunction) == functionNames.end()) {
		functionNames.insert(debugCurrentFunction);
		if ((char*)vtablePtr >= RDATA_START && (char*)vtablePtr < RDATA_END) {
			char* vtName = (char*)vtablePtr[-1];
			if (vtName >= VTABLE_NAMES_START && vtName < VTABLE_NAMES_END && ((int)vtName) % 4 == 0) {
				sprintf(buffer, "Function name: %s, ", debugCurrentFunction);
				Log(buffer);
				sprintf(buffer, "VTable name: %s\n", vtName);
				Log(buffer);
			}
		} 
	}
}

void __stdcall Backtrace() {
	void** vtablePtr = (void**)_this;
	int* ptr = (int*)ESP;
	while (ptr <= (int*)EBP) {
		int value = *ptr;
		if (retToFunc.find((void*)value) != retToFunc.end()) {
			void* funcPtr = retToFunc[(void*)value];
			if (addressToName.find(funcPtr) != addressToName.end()) {
				sprintf(buffer, "0x%X : %s\n", (int)funcPtr, addressToName[funcPtr]);
				Log(buffer);
			}
		} else {
			if (value >= (int)funcMin && value <= (int)funcMax + 2048) {
				int distance = 2048;
				char* funcName = 0;
				void* foundFuncPtr = 0;
				for (map<void*, char*>::iterator it = addressToName.begin(); it != addressToName.end(); ++it)
				{
					void* funcPtr = it->first;
					if ((int)funcPtr < value && distance > value - (int)funcPtr) {
						distance = value - (int)funcPtr;
						foundFuncPtr = funcPtr;
						funcName = it->second;
					}
				}
				if (funcName != (char*)0) {
					sprintf(buffer, "0x%X : %s\n", (int)foundFuncPtr, funcName);
					Log(buffer);
				}
			}
		}
		++ptr;
	}
}

void __stdcall CheckFPUState() {
	if (debugFPUStatus != 0x00 && debugFPUStatus != 0x20) {
		functionNames.insert(debugCurrentFunction);
		sprintf(buffer, "%s FPU Status on enter: 0x%X\n", debugCurrentFunction, debugFPUStatus);
		Log(buffer);
	}
}

//Debug function calling log

void __stdcall EnableCalllog() {enableCallog = 1;}
void __stdcall DisableCalllog() {enableCallog = 0;}
void __stdcall DbgCalllog() {
	if (enableCallog == 0) return;
	
	sprintf(buffer, "Entered: %s\n", debugCurrentFunction);
	Log(buffer);
}
void __stdcall DbgRetlog() {
	if (enableCallog == 0) return;
	
	sprintf(buffer, "Returned from: %s\n", debugCurrentFunction);
	Log(buffer);
}

void __stdcall RegisterFunction() {
	if (functionNames.find(debugCurrentFunction) == functionNames.end()) {
		functionNames.insert(debugCurrentFunction);
		sprintf(buffer, "%s\n", debugCurrentFunction);
		Log(buffer);
	}
}

//Debug memory logging

void __stdcall DbgPrintStr() {
	sprintf(buffer, "%s\n", debugPrintString);
	Log(buffer);
}

void __stdcall DbgPrintValue() {
	sprintf(buffer, "%s: 0x%x\n", debugPrintString, debugPrintValue);
	Log(buffer);
}

void __stdcall DbgPrintValueFloat() {
	sprintf(buffer, "%s: %f\n", debugPrintString, debugPrintValueFloat);
	Log(buffer);
}

