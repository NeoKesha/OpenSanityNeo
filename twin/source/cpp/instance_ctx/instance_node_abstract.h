#pragma once
#include <twin_base.h>
#include "instance_context.h"

class InstanceNodeAbstract : public TwinBase {
public:

	InstanceNodeAbstract();

	virtual void ReleaseCtxPtr(InstanceContextSmartPtr ptr);
	virtual ~InstanceNodeAbstract();
	virtual void SetCtx(InstanceContext* ctx);

	InstanceContext* ctx;
	short a;
	short b;
	int time;
	InstanceNodeAbstract* ptr;
	int c;
};