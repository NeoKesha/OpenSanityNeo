#include <XTL.h>
#include <stl.h>
#include "twin_math.h"
#include <math.h>
#include <level/path.h>

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
	return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
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

float Vector4::GetInverseLengthSqr(float defaultInverse, float epsilon) {
	float length = this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w;
	if (length > epsilon * epsilon) {
		return 1.0f / length;
	}
	
	return defaultInverse;
}

void Vector4::CopyTo(Vector4* other) {
	other->x = this->x;
	other->y = this->y;
	other->z = this->z;
	other->w = 1.0f;
}

int __cdecl Vector4::AddVectorToDict(Vector4 *vector) {
	Vector4* ptr = &VECTOR_ARRAY;
	for (int i = 0; i < SOME_VECTOR_INDEX; ++i) {
		float dx = ptr->x - vector->x;
		float dy = ptr->y - vector->y;
		float dz = ptr->z - vector->z;
		if (sqrt(dx*dx + dy*dy + dz*dz) < 0.0001f) {
			return i;
		}
		++ptr;
	}
	
	int cnt = SOME_VECTOR_INDEX;
	Vector4* last = &VECTOR_ARRAY + SOME_VECTOR_INDEX;
	++SOME_VECTOR_INDEX;
	last->x = vector->x;
	last->y = vector->y;
	last->z = vector->z;
	last->w = vector->w;
	static char buffer[512];
	sprintf(buffer, "New entry %d: %f %f %f", cnt, last->x, last->y, last->z);
	OutputDebugString(buffer);
	return cnt;
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

void Matrix4::FromRotation(Vector4 *rot) {
	float a = rot->x * (rot->x + rot->x);
	float b = rot->y + rot->y;
	float c = rot->z + rot->z;
	float d = rot->w * (rot->x + rot->x);
	
	this->row1.x = 1.0f - (rot->z * c + rot->y * b);
	this->row1.y = rot->w * c + rot->x * b;
	this->row1.z = rot->x * c - rot->w * b;
	this->row1.w = 0.0f;
	
	this->row2.x = rot->x * b - rot->w * c;
	this->row2.y = 1.0f - (rot->z * c + a);
	this->row2.z = d + rot->y * c;
	this->row2.w = 0.0f;
	
	this->row3.x = rot->w * b + rot->x * c;
	this->row3.y = rot->y * c - d;
	this->row3.z = 1.0f - (rot->y * b + a);
	this->row3.w = 0.0f;
}

void Matrix4::TransformOut(Vector4* vec, Vector4* out) {
	out->x = this->row3.x * vec->z + this->row2.x * vec->y + this->row1.x * vec->x;
	out->y = this->row3.y * vec->z + this->row2.y * vec->y + this->row1.y * vec->x;
	out->z = this->row3.z * vec->z + this->row2.z * vec->y + this->row1.z * vec->x;
	out->w = vec->w;
}