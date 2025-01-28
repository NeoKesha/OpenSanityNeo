void ClearLog();
void __stdcall Backtrace();
void __stdcall DbgInit();
void Log(char* buffer);

extern "C" char* VTABLE_NAMES_START;
extern "C" char* VTABLE_NAMES_END;
extern "C" char* RDATA_START;
extern "C" char* RDATA_END;
extern "C" void* FUNC_NAMES_START;
extern "C" void* FUNC_NAMES_END;
extern "C" void* RETURN_TO_FUNC_MAP_START;
extern "C" void* RETURN_TO_FUNC_MAP_END;

struct funcDesc {
	void* funcPtr;
	char* funcName;
};
struct returnDesc {
	void* retPtr;
	void* funcPtr;
};