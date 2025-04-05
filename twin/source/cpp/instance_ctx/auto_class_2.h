#pragma once
#include <twin_base.h>
#include <twin_math.h>

class AutoClass2 : public TwinBase {
public:

	AutoClass2(void* ctx);

	//InstanceContext* ctx;
	void* ctx;
	//AutoClass40* ac40ptr;
	void* ac40ptr;
	int a;
	int b;
	//InstanceContext* ctx2;
	void* ctx2;
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