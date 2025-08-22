#pragma once
#include <twin_base.h>

class Matrix4;
class Vector2;
class Vector3;
class Vector4;

extern "C" short TRIGONOMETRY_INDEXES[2048];

class Rotation2D {
public:
	void FUN_000d2a10(float* x, float* y);
	
	int value;
};

class Vector2 {
public:
	float x;
	float y;
};

class Vector3 {
public:
	float x;
	float y;
	float z;
	
	float GetLengthSqr();
	float GetLengthXZ();
	void Invert();
	float Distance(Vector3* other);
	float DistanceSqr(Vector3* other);
	float DotProduct(Vector3* other);
	void CopyTo(Vector4* other);
	
	static float __cdecl GetLength(Vector3* vec);
	static void __cdecl Scale(Vector3* vec, Vector3* src, float k);
	static void __cdecl Subtract(Vector3* dst, Vector3* a, Vector3* b);
	static void __cdecl Transform(Vector3* a, Vector3* b, Matrix4* m);
	static float __cdecl DistanceDelta(Vector3* a ,Vector3* b, Vector3* outDelta);
};

class Vector4 {
public:
	float x;
	float y;
	float z;
	float w;
	
	float GetLength();
	float GetLengthSqr();
	float GetInverseLengthSqr(float defaultInverse, float epsilon);
	void Reset();
	void CopyTo(Vector4* other);
	
	static void __cdecl Transform(Vector4* a, Vector4* b, Matrix4* m);
	static void __stdcall StaticTransform(Vector4* outVector, float k);
};

class Path;
class Matrix4 {
public:
	Matrix4();
	Matrix4(int angle);

	Vector4 row1;
	Vector4 row2;
	Vector4 row3;
	Vector4 row4;
	
	void FromRotation(Vector4* rot);
	void TransformOut(Vector4* vec, Vector4* out);
	void Multiply4443(Matrix4* mat, Matrix4* out);
};

class BoundingBox {
public:
	Vector4 v1;
	Vector4 v2;
};

class SplineAbstract : public TwinBase {
public:
	SplineAbstract();
	virtual ~SplineAbstract();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag) = 0;
	virtual void Transform(Matrix4* matrix);
	virtual void UnkMethod(int param);
	virtual void Reset();
	
	float length;
	float position;
	float argument;
	int repeats;
	SplineAbstract* next;
};

class SplineA : public SplineAbstract {
public:
	SplineA();
	~SplineA();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
	
	int arrayLength;
	Vector2* spline;
};

class SplineC : public SplineAbstract {
public:
	SplineC();
	~SplineC();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
};

class SplineD : public SplineAbstract {
public:
	SplineD();
	~SplineD();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
	virtual void Reset();
};