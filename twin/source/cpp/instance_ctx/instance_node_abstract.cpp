#include <XTL.h>
#include <stl.h>
#include "instance_node_abstract.h"

InstanceNodeAbstract::InstanceNodeAbstract() {
	ctx = 0;
	a = 0;
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