#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include <instance_ctx\instance_context.h>

extern "C" float ELSE_CONTROL;

class InstanceNodeInstance;
class InstanceNodeInstanceD;

class LayerControl : public TwinBase {
public:
	LayerControl();
	virtual ~LayerControl();
	
	int a;
	int b;
	int c;
	int d;
	float elseControl;
	int time;
	unsigned char g1;
	unsigned char g2;
	short g3;
};

class ChannelControl : public TwinBase {
public:
	int id;
	InstanceNodeInstance* nodeInstance;
};

class UnkFamily3Abstract : public TwinBase {
public:
	virtual ~UnkFamily3Abstract();
	virtual void Method1() = 0;
	virtual void Method2() = 0;
	virtual void Method3() = 0;
};

class UnkFamily3F : public UnkFamily3Abstract {
public:
	UnkFamily3F();
	virtual void Method1() = 0;
	virtual void Method2() = 0;
	virtual void Method3() = 0;
	InstanceNodeInstanceD* var1;
	int var2;
	int var3;
	int var4;
	int var5;
	float var6;
	float var7;
	float var8;
	int var9;
	int var10;
	int var11;
	int var12;
	int var13;
	int var14;
	int var15;
	Matrix4 var16;
	Vector4 var17;
	Vector4 var18;
	int flags;
	float var20;
	float var21;
	float var22;
};