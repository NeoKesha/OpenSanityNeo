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

class InstanceDataList {
public:
	int cnt;
	void* nodes[24]; //NodeAbstract;
};

class InstanceContext : public InstanceContextBase { //TODO: unfinished class
public:
	int var1;
	int var2;
	int var3;
	InstanceContextSmartPtr smartPtr;
	int var4;
	int var5;
	int var6;
	Vector4 vec;
	int var7;
	InstanceDataList nodes;
	void* findMe;
	//InstanceContextSub* subPtr;
	void* subPtr;
	InstanceContext* prev;
	InstanceContext* next;
	int var8;
	int var9;
	int var10;
	int someIndex;
	int var11;
	int var12;
};