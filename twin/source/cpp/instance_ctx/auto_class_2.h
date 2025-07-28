#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include "auto_class_40.h"

class InstanceContextBase;
class AutoClass2 : public TwinBase {
public:

	AutoClass2();
	AutoClass2(InstanceContextBase* ctx);

	InstanceContextBase* ctx;
	AutoClass40* ac40ptr;
	int a;
	int b;
	InstanceContextBase* ctx2;
	int c;
	int d;
	Matrix4* matrix1;
	byte dataArray[16];
	BoundingBox boundingBox;
	Vector4 vec1;
	Vector4 vec2;
	int e;
	Matrix4* matrixArray;
	int f;
	int g;
	void* ptr;
};