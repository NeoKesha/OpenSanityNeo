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

extern "C" Reflection reflection;
void ActionProbe::ExecuteFromCallContext(UnkTimePack* time, ChannelControl *channelControl, LayerControl* layerControl) {
	size_t size1 = reflection.GetStructSize(time);
	size_t size2 = reflection.GetStructSize(channelControl);
	size_t size3 = reflection.GetStructSize(layerControl);
	static char buffer[256];
	sprintf(buffer, "Time: %x, CC: %x, LC: %x", size1, size2, size3);
	OutputDebugString(buffer);
	while(1);
	return;
}

int ActionProbe::GetSize() {
	return sizeof(ActionProbe);
}