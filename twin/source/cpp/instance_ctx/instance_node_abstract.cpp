#include <XTL.h>
#include <stl.h>
#include "instance_node_abstract.h"

InstanceNodeAbstract::InstanceNodeAbstract() {
	ctx = 0;
	a1 = 0;
	a2 = 0;
	b = 0;
	time = 0;
	ptr = 0;
	c = 0;
}

InstanceNodeAbstract::~InstanceNodeAbstract() {
	
}

void InstanceNodeAbstract::ReleaseCtxPtr(InstanceContextSmartPtr ptr) {
	ptr.Release();
}

void InstanceNodeAbstract::SetCtx(InstanceContext* ctx) {
	if (this->ctx == 0) {
		this->ctx = ctx;
	}
}

bool InstanceNodeAbstract::IsA() {
	return true;
}

void InstanceNodeAbstract::EmptyFunction(int param) {
	
}

void InstanceNodeAbstract::UpdateTime(UnkTimePack* time, int flags) {
	this->time = time->fields[0].time1;
}

bool InstanceNodeAbstract::Step(UnkTimePack* newTime) {
	if ((newTime->fields[0].flags & 1) != 0) {
		if (((~a1 & 1) == 0) && (time != 0)) {
			a1 = a1 & 0xfe;
			return true;
		}
		time = newTime->fields[0].time1;
	}
	return true;
}

void InstanceNodeAbstract::EmptyFunction2() {

}

void InstanceNodeInstance::EmptyFunction3() {

}

void InstanceNodeInstance::InstanceMethod1(void* param1) {
	AssertNonImplemented
}

bool InstanceNodeInstance::IsD() {
	return false;
}

bool InstanceNodeInstance::IsE() {
	return false;
}

bool InstanceNodeInstanceD::IsB() {
	return true;
}

bool InstanceNodeInstanceD::IsC() {
	return true;
}