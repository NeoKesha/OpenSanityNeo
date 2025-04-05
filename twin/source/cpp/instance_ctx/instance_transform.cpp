#include <XTL.h>
#include <stl.h>
#include "instance_transform.h"

InstanceTransform::InstanceTransform() {
	ZeroMemory(this, sizeof(InstanceTransform));
	this->transform.row4.w = 1.0f;
	this->transform.row3.z = 1.0f;
	this->transform.row2.y = 1.0f;
	this->transform.row1.x = 1.0f;
	
	this->position.x = 0.0f;
	this->position.y = 0.0f;
	this->position.z = 0.0f;
	this->position.w = 1.0f;
	
	this->rotation.x = 0.0f;
	this->rotation.y = 0.0f;
	this->rotation.z = 0.0f;
	this->rotation.w = 1.0f;
	
	this->a = this->a & 0xfffffff0;
}

InstanceTransform::InstanceTransform(InstanceTransform* other) {
	memcpy(this, other, sizeof(InstanceTransform));
}