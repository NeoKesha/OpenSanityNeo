#include <XTL.h>
#include <stl.h>
#include <game/game_controller.h>
#include "action_library.h"


ActionPickUpWumpa::ActionPickUpWumpa() : ActionAbstract() {
	wumpaAmount = 1;
}

ActionPickUpWumpa::~ActionPickUpWumpa() {
	
}

void ActionPickUpWumpa::Construct(void* dataToIterate) {
	AssertNonImplemented
	return;
}

void ActionPickUpWumpa::Execute(InstanceNodeInstanceA* channelControl) {
	GameController1->oleg.wumpaCnt += wumpaAmount;
	return;
}

void ActionPickUpWumpa::ExecuteFromCallContext(UnkTimePack* time, ChannelControl *channelControl, LayerControl* layerControl) {
	AssertNonImplemented
	return;
}

int ActionPickUpWumpa::GetSize() {
	return sizeof(ActionPickUpWumpa);
}

void ActionProbe::ExecuteFromCallContext(UnkTimePack* time, ChannelControl *channelControl, LayerControl* layerControl) {
	return;
}

int ActionProbe::GetSize() {
	return sizeof(ActionProbe);
}