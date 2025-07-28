#pragma once
#include <twin_base.h>
#include "auto_class_2.h"
#include "instance_transform.h"

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

class InstanceContextBase : public TwinBase {
public:
	InstanceContextBase();
	InstanceContextBase(InstanceTransform* transform);
	InstanceContextBase(int param);
	InstanceContextBase(InstanceTransform* transform, int param);
	
	virtual ~InstanceContextBase();
	
	virtual bool Method1();
	virtual bool Method2();
	virtual bool Method3();
	virtual void Method4();

	InstanceContextBase* ctx1;
	int a;
	int b;
	int c;
	int flags;
	InstanceTransform* transform; 
	InstanceContextBase* ctx2;
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