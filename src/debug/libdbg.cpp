#include <XTL.h>
#include <stl.h>
#include <SIGNAL.H>
#include "libdbg.h"

char* debugPrintString;
char* debugCurrentFunction;
int debugPrintValue;
float debugPrintValueFloat;
int debugPrintValueArrayCnt;
int debugFPUStatus;
void* _this;
void* EBP;
void* ESP;

set <char*> functionNames;
map <void*, char*> addressToName;
map <void*, void*> retToFunc;
void* funcMin = 0;
void* funcMax = 0;
HANDLE hLogFile = (HANDLE)-1;
char inited = 0;

struct funcDesc {
	void* funcPtr;
	char* funcName;
};
struct returnDesc {
	void* retPtr;
	void* funcPtr;
};

char buffer[1024];
void ClearLog() {
	DeleteFileA(TEXT("debug.log"));
	hLogFile = CreateFile(TEXT("debug.log"),  FILE_APPEND_DATA | FILE_GENERIC_READ,  0, NULL, OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL|FILE_FLAG_NO_BUFFERING|FILE_FLAG_WRITE_THROUGH, NULL);   
}

char thunk(int a, int b, int c) {
	Log("fuck");
	return 0;
}

class Vector4 {
public:
	float x, y, z, w;
};
class Matrix4 {
public:
	Vector4 v1, v2, v3, v4;
};

class Path {
public:
	void* vftable;
	int cnt;
	Vector4* points;
};

void __stdcall foo() {
	Path* path = (Path*)debugPrintValue;
	sprintf(buffer, "POINTS: %d\n", path->cnt);
	Log(buffer);
	for (int i = 0; i < path->cnt; ++i) {
		sprintf(buffer, "(%f %f %f %f)\n", path->points[i].x, path->points[i].y, path->points[i].z, path->points[i].w);
		Log(buffer);
	}
}

void __stdcall PrintVector4() {
	Vector4* vec = (Vector4*)debugPrintValue;
	sprintf(buffer, "(%f %f %f %f)\n", vec->x, vec->y, vec->z, vec->w);
	Log(buffer);
}

void __stdcall PrintMatrix4() {
	Matrix4* mat = (Matrix4*)debugPrintValue;
	sprintf(buffer, "(%f %f %f %f)\n", mat->v1.x, mat->v1.y, mat->v1.z, mat->v1.w); Log(buffer);
	sprintf(buffer, "(%f %f %f %f)\n", mat->v2.x, mat->v2.y, mat->v2.z, mat->v2.w); Log(buffer);
	sprintf(buffer, "(%f %f %f %f)\n", mat->v3.x, mat->v3.y, mat->v3.z, mat->v3.w); Log(buffer);
	sprintf(buffer, "(%f %f %f %f)\n", mat->v4.x, mat->v4.y, mat->v4.z, mat->v4.w); Log(buffer);
	
}

LONG WINAPI HandleCrash(PEXCEPTION_POINTERS pExceptionInfo) {
	sprintf(buffer, "CRASH!\n", debugPrintString);
	Log(buffer);
	
	return EXCEPTION_CONTINUE_EXECUTION;
}

void FloatingPointException(int sig) {
	sprintf(buffer, "FPE SIGNAL, 0x%X!\n", debugPrintString, sig);
	Log(buffer);
}

void SegmentException(int sig) {
	sprintf(buffer, "SIGSEGV, 0x%X!\n", debugPrintString, sig);
	Log(buffer);
}

void InterruptException(int sig) {
	sprintf(buffer, "SIGINT, 0x%X!\n", debugPrintString, sig);
	Log(buffer);
}

void __stdcall DbgInit() {
	ClearLog();
	SetUnhandledExceptionFilter(HandleCrash);
	
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

	signal(SIGFPE, FloatingPointException);
	signal(SIGSEGV, SegmentException);
	signal(SIGINT, InterruptException);
	inited = 1;
}

void __stdcall DbgCalllog() {
	sprintf(buffer, "%s\n", debugCurrentFunction);
	Log(buffer);
}
void __stdcall RegisterFunction() {
	if (functionNames.find(debugCurrentFunction) == functionNames.end()) {
		functionNames.insert(debugCurrentFunction);
		sprintf(buffer, "%s\n", debugCurrentFunction);
		Log(buffer);
	}
}

double get_st0() {
    double value;
    __asm {
        fst value
    }
    return value;
}

void __stdcall CheckFPUState() {
	double st0 = get_st0();
	if (debugFPUStatus != 0x00 && debugFPUStatus != 0x20) {
		functionNames.insert(debugCurrentFunction);
		sprintf(buffer, "%s FPU Status on enter: 0x%X\n", debugCurrentFunction, debugFPUStatus);
		Log(buffer);
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

void __stdcall DbgPrintValueFloatArray() {
	float* arr = (float*)debugPrintValue;
	sprintf(buffer, "%d: %f\n", -2, arr[-2]);
	Log(buffer);
	for (int i = 0; i < debugPrintValueArrayCnt; ++i) {
		sprintf(buffer, "%d: %f\n", i, arr[i]);
		Log(buffer);
	}
}

void Log(char* buffer) {
	DWORD dwBytesToWrite = (DWORD)strlen(buffer);
    DWORD dwBytesWritten = 0;
	
	WriteFile(hLogFile, buffer, dwBytesToWrite, &dwBytesWritten, NULL); 
}