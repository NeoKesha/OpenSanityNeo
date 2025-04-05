#include <XTL.h>
#include <stl.h>
#include "auto_class_2.h"

AutoClass2::AutoClass2(void* ctx) { //InstanceContextBase*
	ZeroMemory(this, sizeof(AutoClass2));
	this->ctx = ctx;
	this->dataArray[0] = this->dataArray[0] & 0xfa | 2;
}