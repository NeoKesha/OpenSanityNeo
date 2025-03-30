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