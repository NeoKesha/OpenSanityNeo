#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include <time\time.h>
#include <string\twin_string.h>
#include "instance_context.h"

class InstanceNodeAbstract : public TwinBase {
public:

	InstanceNodeAbstract();

	virtual void ReleaseCtxPtr(InstanceContextSmartPtr ptr);
	virtual ~InstanceNodeAbstract();
	virtual void SetCtx(InstanceContext* ctx);
	virtual bool IsA();
	virtual int GetIndex() = 0;
	virtual void EmptyFunction(int param);
	virtual void UpdateTime(UnkTimePack* time, int flags);
	virtual bool Step(UnkTimePack* time);
	virtual void EmptyFunction2();
	virtual int GetBuilderIndex() = 0;

	InstanceContext* ctx;
	unsigned char a1;
	unsigned char a2;
	short b;
	int time;
	InstanceNodeAbstract* ptr;
	int c;
};

class AutoClass52 : public TwinBase {
public:
	Vector4 vec1;
	Vector4 vec2;
	int a;
	TwinString chunkName;
};

class InstanceNodeInstance : public InstanceNodeAbstract {
public:
	virtual void EmptyFunction3();
	virtual void InstanceMethod1(void* param1);
	virtual void InstanceMethod2(void* param1) = 0;
	virtual bool IsB() = 0;
	virtual bool IsC() = 0;
	virtual bool IsE();
	virtual bool IsD();

	int var1;
	int var2;
	Vector4 var3;
	InstanceContext* focus;
	int var8;
	int var9;
	void* var10;
	AutoClass52 ac52;
	AutoClass52* ac52ptr1;
	AutoClass52* ac52ptr2;
	int var11;
	short var12;
	short var13;
	int var14;
	short* var15;
	int var16;
	char var17;
	char var18;
	short var19;
	int var20;
	int var21;
	int var22;
	int var23;
	Vector4 vec1;
	Vector4 vec2;
	int var24;
	int var25;
	int var26;
	int var27;
};

class InstanceNodeInstanceC : public InstanceNodeInstance {
public:
	int var28;
};

class InstanceNodeInstanceD : public InstanceNodeInstanceC {
public:
	virtual bool IsB();
	virtual bool IsC();
	int var29;
	int var30;
	void* var31;
	int var32;
	int var33;
	int var34;
	int var35;
	int var36;
	float var37;
	int var38;
	int var39;
	int var40;
	int var41;
	int var42;
	int var43;
	int var44;
	int var45;
	InstanceContext* var46;
	InstanceContext* var47;
	int var48;
	void* var49;
	Matrix4* var50;
	void* var51;
	int var52;
	int var53;
	int var54;
	int var55;
	void* var56;
	int var57;
	int var58;
	int var59;
	int var60;
	unsigned char var61a;
	unsigned char var61b;
	unsigned char var61c;
	unsigned char var61d;
	int var62;
	int var63;
	int var64;
	int var65;
	int var66;
	int var67;
	int var68;
	int var69;
	int var70;
	InstanceNodeInstanceD* var71;
};