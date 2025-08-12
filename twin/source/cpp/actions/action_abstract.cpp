#include <XTL.h>
#include <stl.h>
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

void ActionAbstract::UnkMethod(void* dataToIterate) {
	return;
}

void ActionAbstract::EmptyFunction(InstanceContext* ctx) {
	return;
}

bool ActionAbstract::ReturnTrue(int param) {
	return true;
}

int ActionAbstract::Get0x1806() {
	return 0x1806;
}