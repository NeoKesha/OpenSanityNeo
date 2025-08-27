#pragma once
#include <twin_base.h>
#include <time\time.h>
#include <instance_ctx\instance_context.h>
#include <agentlab\agentlab_control.h>

class InstanceNodeInstanceA;

class ActionAbstract : public TwinBase {
public:
	ActionAbstract();
	virtual ~ActionAbstract();
	
	virtual void Construct(void* dataToIterate); //Construct (Action *param_1,DynamicArray<> *param_2)
	virtual void Execute(InstanceNodeInstanceA* ctx);
	virtual void ExecuteFromCallContext(UnkTimePack* time, ChannelControl *channelControl, LayerControl* layerControl) = 0;
	virtual int GetSize() = 0;
	virtual bool Serialize(int param); //Serialize (Action *this,ChunkFile *param_1)
	virtual int Get0x1806();
	
	int idx;
	ActionAbstract* nextAction;
};