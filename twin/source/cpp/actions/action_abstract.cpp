#include <XTL.h>
#include <stl.h>
#include "action_abstract.h"
#include <game/game_controller.h>
ActionAbstract::ActionAbstract() {
	idx = -1;
	nextAction = 0;
}

ActionAbstract::~ActionAbstract() {
	if (nextAction != 0) {
		delete nextAction;
	}
}

void ActionAbstract::UnkMethod(void* dataToIterate) {
	return;
}

void ActionAbstract::Execute(InstanceContext* ctx) {
	return;
}

bool ActionAbstract::ReturnTrue(int param) {
	return true;
}

int ActionAbstract::Get0x1806() {
	return 0x1806;
}


ActionSetPlayerInput::ActionSetPlayerInput() : ActionAbstract() {
	a = 0;
	b = 0;
	c &= 0xfffffffc; //i'll keep it
}

ActionSetPlayerInput::~ActionSetPlayerInput() {
	
}

void ActionSetPlayerInput::UnkMethod(void* dataToIterate) {
	AssertNonImplemented
	return;
}

void ActionSetPlayerInput::ExecuteFromCallContext(UnkTimePack* time, InstanceContext *ctx, int unk) {
	AssertNonImplemented
	return;
}

int ActionSetPlayerInput::GetSize() {
	return sizeof(ActionSetPlayerInput);
}

ActionPickUpWumpa::ActionPickUpWumpa() : ActionAbstract() {
	wumpaAmount = 1;
}

ActionPickUpWumpa::~ActionPickUpWumpa() {
	
}

void ActionPickUpWumpa::UnkMethod(void* dataToIterate) {
	AssertNonImplemented
	return;
}

void ActionPickUpWumpa::Execute(InstanceContext* ctx) {
	//Decomp Nodes
	//Node Projectile
	//Node crate
	//Decomp Game Controller
	//Decomp OLEG
	static char buffer[256];
	
	for (int i = 0; i < 64; ++i) {
		OlegModuleAbstract* module = GameController1->oleg.modules[i];
		if (module == 0) continue;
		
		sprintf(buffer, "Module %d: (%f %f) (%f %f)", i, module->vec1.x,module->vec1.y,module->vec2.x,module->vec2.y);
		OutputDebugString(buffer);
		
		module->vec2.x = 20.0f;
		module->vec2.y = 20.0f;
	}

	GameController1->oleg.wumpaCnt += wumpaAmount;
	return;
}

void ActionPickUpWumpa::ExecuteFromCallContext(UnkTimePack* time, InstanceContext *ctx, int unk) {
	PrintMe
	Execute((InstanceContext*)ctx->ctx1); //Upcast for life, because i don't know if it's base or child used in the actions and i am not comfortable with putting non base pointer into the base class
	return;
}

int ActionPickUpWumpa::GetSize() {
	return sizeof(ActionPickUpWumpa);
}