#include <XTL.h>
#include <stl.h>
#include "auto_class_2.h"

AutoClass2::AutoClass2(InstanceContextBase* ctx) {
	ZeroMemory(this, sizeof(AutoClass2));
	this->ctx = ctx;
	this->dataArray[0] = this->dataArray[0] & 0xfa | 2;
}

AutoClass2::AutoClass2() {
	ZeroMemory(this, sizeof(AutoClass2));
}