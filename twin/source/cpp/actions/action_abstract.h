#pragma once
#include <twin_base.h>
#include <time\unk_time_pack.h>
#include <instance_ctx\instance_context.h>

class ActionAbstract : TwinBase {
public:
	ActionAbstract();
	virtual ~ActionAbstract();
	
	virtual void UnkMethod(void* dataToIterate);
	virtual void EmptyFunction(InstanceContext* ctx);
	virtual void ExecuteFromCallContext(UnkTimePack* time, InstanceContext *ctx) = 0;
	virtual int GetSize() = 0;
	virtual bool ReturnTrue(int param);
	virtual int Get0x1806();
	
	int idx;
	ActionAbstract* nextAction;
};