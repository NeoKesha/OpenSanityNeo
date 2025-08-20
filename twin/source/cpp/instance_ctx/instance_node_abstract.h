#pragma once
#include <twin_base.h>
#include <time\unk_time_pack.h>
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