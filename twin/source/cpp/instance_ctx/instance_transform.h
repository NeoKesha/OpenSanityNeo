#pragma once
#include <twin_base.h>
#include <twin_math.h>

static const float epsilon = 5e-05f;
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
	
	void FillMatrix();
	bool Reset();
	bool SetupPosition(Vector4* pos);
	
	void GetTransformRow2(Vector4* out);
	void GetTransformRow3(Vector4* out);
	void GetTransformRow4(Vector4* out);
	
	void ExtractPosition();
	void GetPosition(Vector4* out);
	
	bool SetPositionFromOther(InstanceTransform* other);
	bool AddPosition(Vector4* delta);
	void FUN_000a6690(Matrix4* mat, Vector4* vec, Vector4* out, int reserved);
};


