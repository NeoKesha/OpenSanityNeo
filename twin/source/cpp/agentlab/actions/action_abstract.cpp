#include <XTL.h>
#include <stl.h>
#include <game/game_controller.h>
#include "action_abstract.h"

ActionAbstract::ActionAbstract() {
	idx = -1;
	nextAction = 0;
}

ActionAbstract::~ActionAbstract() {
	if (nextAction != 0) {
		delete nextAction;
	}
}

void ActionAbstract::Construct(void* dataToIterate) {
	return;
}

void ActionAbstract::Execute(InstanceNodeInstanceA* ctx) {
	return;
}

bool ActionAbstract::Serialize(int param) {
	return true;
}

int ActionAbstract::Get0x1806() {
	return 0x1806;
}