#pragma once
#include <twin_base.h>
#include <twin_math.h>


class InstanceTransform : public TwinBase {
public:
	Matrix4 transform;
	Vector4 position;
	Vector4 rotation;
	int a;
	int b;
	int c;
	int d;
	
	InstanceTransform();
	InstanceTransform(InstanceTransform* other);
};
