#pragma once
#include <twin_base.h>
#include <time\time.h>
#include <instance_ctx\instance_context.h>
#include "action_abstract.h"

class ActionPickUpWumpa : public ActionAbstract {
public:
	ActionPickUpWumpa();
	virtual ~ActionPickUpWumpa();
	
	virtual void Construct(void* dataToIterate);
	virtual void Execute(InstanceNodeInstanceA* ctx);
	virtual void ExecuteFromCallContext(UnkTimePack* time, ChannelControl *channelControl, LayerControl* layerControl);
	virtual int GetSize();
	
	int wumpaAmount;
};

class ActionProbe : public ActionAbstract {
public:
	virtual void ExecuteFromCallContext(UnkTimePack* time, ChannelControl *channelControl, LayerControl* layerControl);
	virtual int GetSize();
};