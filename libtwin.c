#define _DEBUG

#include <XTL.h>

int debugPrintValue = 0;
char* debugPrintString = 0;
char* stackFname = 0;
int debugTmp = 0;

void* debugEBP = 0;
void* debugESP = 0;
int skip = 2000000;

int stack_idx = 0;
char* fname[65535];

void __stdcall Log(char* buffer);
void __stdcall DbgPrintNewLine();
void DbgPrintHit();
void __stdcall DbgPrintValue();
void __stdcall DbgPrintStr();
void ClearLog();
HANDLE hLogFile;

void AddStack() {
	if (stack_idx == 65535) {
		return;
	}
	fname[stack_idx] = stackFname;
	++stack_idx;
}

void RemoveStack() {
	if (stack_idx == 0) {
		return;
	}
	fname[stack_idx] = 0;
	--stack_idx;
}

void Backtrace() {
	int i = 0;
	for (i = 0; i < stack_idx; ++i) {
		debugPrintString = fname[i];
		DbgPrintValue();
	}
	DbgPrintNewLine();
}

void Callstack() {
	int* ptr = (int*)debugESP;	
	debugPrintValue = (int)debugEBP;
	debugPrintString = "EBP: ";
	DbgPrintValue();
	debugPrintValue = (int)debugESP;
	debugPrintString = "ESP: ";
	DbgPrintValue();
	while (ptr <= debugEBP) {
		debugPrintValue = *ptr;
			debugPrintString = "STACK VALUE: ";
			DbgPrintValue();
		++ptr;
	}
	DbgPrintNewLine();
	//FlushFileBuffers(hLogFile);
}

void __stdcall Log(char* buffer) {
	DWORD dwBytesToWrite = (DWORD)strlen(buffer);
    DWORD dwBytesWritten = 0;
	
	WriteFile(hLogFile, buffer, dwBytesToWrite, &dwBytesWritten, NULL); 
}

void __stdcall DbgPrintNewLine() {
	char DataBuffer[] = "\n";
	Log(DataBuffer);
}

void DbgPrintHit() {
	char DataBuffer[] = "HIT";
	Log(DataBuffer);
	DbgPrintNewLine();
	//FlushFileBuffers(hLogFile);
}

void __stdcall DbgPrintStr() {
	if (skip > 0) {
		--skip;
		return;
	}
	Log(debugPrintString);
	DbgPrintNewLine();
	//FlushFileBuffers(hLogFile);
}

void __stdcall DbgPrintValue() {
	char buffer[256];
	memset(buffer, 0, 256);
	_itoa(debugPrintValue, buffer, 16);
	Log(debugPrintString);
	Log(buffer);
	DbgPrintNewLine();
	//FlushFileBuffers(hLogFile);
}

void DbgStall() {
	while(1) {
		
	}
	return;
}