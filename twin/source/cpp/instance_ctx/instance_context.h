#pragma once
#include <twin_base.h>

class InstanceContext;
class InstanceContextRefCounter;
class InstanceContextSmartPtr;

class InstanceContextRefCounter : public TwinBase {
public:
	InstanceContext* ctx;
	int refCount;
};

class InstanceContextSmartPtr : public TwinBase {
public:
	InstanceContextRefCounter* refCounter;
	
	InstanceContextRefCounter* CreateRef(InstanceContext* ctx, byte flag);
	void FreeCtx(InstanceContext* ctx);
	InstanceContextSmartPtr* FUN_00059e80(InstanceContext* ctx);
	void Release();
	InstanceContextSmartPtr* SetCtx(InstanceContext* ctx);
};

class InstanceContext {
public:
	byte padding[0xb4]; //TODO: unfinished class
	int a;
	int b;
	int c;
	InstanceContextSmartPtr smartPtr;
};