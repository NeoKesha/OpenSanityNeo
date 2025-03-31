#include <XTL.h>
#include <stl.h>
#include "twin_math.h"
#include <math.h>

float __cdecl Vector3::GetLength(Vector3* vec) {
	return sqrt(vec->x * vec->x + vec->y * vec->y + vec->z * vec->z);
}

void __cdecl Vector3::Scale(Vector3* dst, Vector3* src, float k) {
	dst->x = src->x * k;
	dst->y = src->y * k;
	dst->z = src->z * k;
}

void __cdecl Vector3::Subtract(Vector3* dst, Vector3* a, Vector3* b) {
	dst->x = a->x - b->x;
	dst->y = a->y - b->y;
	dst->z = a->z - b->z;
}

float __cdecl Vector3::DistanceDelta(Vector3* a ,Vector3* b, Vector3* outDelta) {
	if (outDelta != 0) {
		outDelta->x = a->x - b->x;
		outDelta->y = a->y - b->y;
		outDelta->z = a->z - b->z;
		return sqrt(outDelta->x * outDelta->x + outDelta->y * outDelta->y + outDelta->z * outDelta->z);
	}
	
	float dx = a->x - b->x;
	float dy = a->y - b->y;
	float dz = a->z - b->z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}

float Vector3::GetLengthXZ() {
	return sqrt(this->x * this->x + this->z * this->z);
}

float Vector3::GetLengthSqr() {
	return this->x * this->x + this->y * this->y + this->z * this->z;
}

void Vector3::Invert() {
	this->x = -this->x;
	this->y = -this->y;
	this->z = -this->z;
}

float Vector3::DistanceSqr(Vector3* other) {
	float dx = this->x - other->x;
	float dy = this->y - other->y;
	float dz = this->z - other->z;
	return dx * dx + dy * dy + dz * dz;
}

float Vector3::Distance(Vector3* other) {
	float dx = this->x - other->x;
	float dy = this->y - other->y;
	float dz = this->z - other->z;
	return sqrt(dx * dx + dy * dy + dz * dz);
}

float Vector3::DotProduct(Vector3* other) {
	return this->x * other->x + this->y * other->y + this->z * other->z;
}

void Vector3::CopyTo(Vector4* other) {
	other->x = this->x;
	other->y = this->y;
	other->z = this->z;
	other->w = 1.0f;
}

float Vector4::GetLengthSqr() {
	return this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w;
}

float Vector4::GetLength() {
	return sqrt(this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w);
}

void __cdecl Vector3::Transform(Vector3* a, Vector3* b, Matrix4* m) {
	a->x = m->row3.x * b->z + m->row2.x * b->y + m->row1.x * b->x;
	a->y = m->row3.y * b->z + m->row2.y * b->y + m->row1.y * b->x;
	a->z = m->row3.z * b->z + m->row2.z * b->y + m->row1.z * b->x;
}

void __cdecl Vector4::Transform(Vector4* a, Vector4* b, Matrix4* m) {
	a->x = m->row3.x * b->z + m->row2.x * b->y + m->row1.x * b->x + m->row4.x; //W = 1
	a->y = m->row3.y * b->z + m->row2.y * b->y + m->row1.y * b->x + m->row4.y; //W = 1
	a->z = m->row3.z * b->z + m->row2.z * b->y + m->row1.z * b->x + m->row4.z; //W = 1
}

void Vector4::Reset() {
	this->y = 0.0f;
	this->z = 0.0f;
	this->x = (float)((unsigned int)this->x & 0xfffffcff | 0xff);
	this->w = 1.0f;
}

void Vector4::CopyTo(Vector4* other) {
	other->x = this->x;
	other->y = this->y;
	other->z = this->z;
	other->w = 1.0f;
}

void __stdcall Vector4::StaticTransform(Vector4* outVector, float k) {
	static Matrix4 mat;
	bool inited = false;
	if (!inited) {
		mat.row1.x = -0.1666666f;
		mat.row1.y = 0.4999998f;
		mat.row2.x = 0.4999998f;
		mat.row2.y = -0.9999996f;
		mat.row2.z = 0.4999998f;
		mat.row3.z = 0.4999998f;
		mat.row1.z = -0.4999998f;
		mat.row1.w = 0.1666666f;
		mat.row2.w = 0.0f;
		mat.row3.x = -0.4999998f;
		mat.row3.y = 0.0f;
		mat.row3.w = 0.0f;
		mat.row4.x = 0.1666666f;
		mat.row4.y = 0.6666664f;
		mat.row4.z = 0.1666666f;
		mat.row4.w = 0.0f;
		inited = true;
	}
	
	Vector4 result;
	outVector->y = k * k;
	outVector->x = k * k * k;
	outVector->z = k;
	outVector->w = 1.0f;
	float x = outVector->x;
	float y = outVector->y;
	float z = outVector->z;
	result.y = x * mat.row1.y + y * mat.row2.y + z * mat.row3.y + mat.row4.y;
	result.x = x * mat.row1.x + y * mat.row2.x + z * mat.row3.x + mat.row4.x;
	result.z = x * mat.row1.z + y * mat.row2.z + z * mat.row3.z + mat.row4.z;
	result.w = x * mat.row1.w + y * mat.row2.w + z * mat.row3.w + mat.row4.w;
	outVector->x = result.x;
	outVector->y = result.y;
	outVector->z = result.z;
	outVector->w = result.w;
}