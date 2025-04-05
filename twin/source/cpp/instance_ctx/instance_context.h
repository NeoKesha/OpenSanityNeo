#pragma once
#include <twin_base.h>
#include "auto_class_2.h"

class InstanceContextBase;
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

class InstanceContextBase {
public:
	InstanceContextBase();
	virtual ~InstanceContextBase();

	InstanceContext* ctx1;
	int a;
	int b;
	int c;
	int flags;
	//InstanceTransform* transform; 
	void* transform; 
	InstanceContext* ctx2;
	AutoClass2 ac2;
	int d;
	int e;
	int f;
	//ChunkData* chunkData;
	void* chunkData;
};

class InstanceContext : public InstanceContextBase { //TODO: unfinished class
public:
	int a;
	int b;
	int c;
	InstanceContextSmartPtr smartPtr;
};