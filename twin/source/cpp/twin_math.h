#pragma once

class Matrix4;
class Vector2;
class Vector3;
class Vector4;

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
	void Reset();
	void CopyTo(Vector4* other);
	
	static void __cdecl Transform(Vector4* a, Vector4* b, Matrix4* m);
	static void __stdcall StaticTransform(Vector4* outVector, float k);
};

class Path;
class Matrix4 {
public:
	Vector4 row1;
	Vector4 row2;
	Vector4 row3;
	Vector4 row4;
};

class BoundingBox {
public:
	Vector4 v1;
	Vector4 v2;
};