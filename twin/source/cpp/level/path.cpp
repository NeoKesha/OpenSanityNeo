#include <XTL.h>
#include <stl.h>
#include "path.h"

PathBase::PathBase() {
	this->points = 0;
}

PathBase::PathBase(PathBase* other) {
	AssertNonImplemented;
}

PathBase::~PathBase() {
	AssertNonImplemented;
}

void PathBase::Method1(Matrix4* mat) {
	OutputDebugStringA("Transform Path");
	for (int i = 0; i < this->pointCnt; ++i) {
		Vector4* point = this->points + i;
		float x = point->x;
		float y = point->y;
		float z = point->z;
		Vector4 vec;
		vec.y = x * mat->row1.y + y * mat->row2.y + z * mat->row3.y + mat->row4.y;
		vec.x = x * mat->row1.x + y * mat->row2.x + z * mat->row3.x + mat->row4.x;
		vec.z = x * mat->row1.z + y * mat->row2.z + z * mat->row3.z + mat->row4.z;
		vec.w = x * mat->row1.w + y * mat->row2.w + z * mat->row3.w + mat->row4.w;
		point->x = vec.x;
		point->y = vec.y;
		point->z = vec.z;
		point->w = vec.w;
	}
}

void PathBase::Read(MemoryStream* stream) {
	stream->ReadInt2((char*)&this->pointCnt);
	this->points = (Vector4*)VirtualPool::AllocateMemory(this->pointCnt * 16);
	stream->Read((char*)this->points, this->pointCnt * 16, 1);
}

unsigned int PathBase::GetBuilderIndex() {
	return 0x1511;
}

void PathBase::Write(MemoryStream* stream) {
	stream->WriteInt2(this->pointCnt);
	stream->Write((char*)this->points, this->pointCnt * 16);
}

bool PathBase::Method5(void* unknown) {
	AssertNonImplemented;
	return false;
}

Path::Path() {
	AssertNonImplemented;
}

Path::Path(Path* other) {
	AssertNonImplemented;
}

Path::~Path() {
	AssertNonImplemented;
}

void Path::Read(MemoryStream* stream) {
	stream->ReadInt2((char*)&this->pointCnt);
	this->points = (Vector4*)VirtualPool::AllocateMemory(this->pointCnt * 16);
	stream->Read((char*)this->points, this->pointCnt * 16, 1);
	size_t parametersCnt = 0;
	stream->ReadInt2((char*)&parametersCnt);
	this->parameters = (float*)VirtualPool::AllocateMemory(parametersCnt * 8);
	stream->Read((char*)this->parameters, parametersCnt * 8, 1);
	this->lastParameter = this->parameters + parametersCnt;
}

unsigned int Path::GetBuilderIndex() {
	return 0x1512;
}

void Path::Write(MemoryStream* stream) {
	size_t pointCnt = this->pointCnt;
	size_t paramCnt = this->pointCnt - 3;
	stream->WriteInt2(pointCnt);
	stream->Write((char*)this->points,pointCnt * 16);
	stream->WriteInt2(paramCnt);
	stream->Write((char*)this->parameters, paramCnt * 8);
}

bool Path::Method5(void* unknown) {
	AssertNonImplemented;
	return false;
}

int Path::FindClosestPoint(Vector4* vec) {
	AssertNonImplemented;
	return 0;
}

void Path::FUN_000de6a0(int idx, float k) {
	AssertNonImplemented;
}

float Path::FUN_000ecee0(Vector4* vec) {
	AssertNonImplemented;
	return 0;
}

void Path::FUN_000ecf20(unsigned int param_1, float param_2) {
	AssertNonImplemented;
}

bool Path::FUN_000efff0(Vector4* vec, float k) {
	AssertNonImplemented;
	return true;
}

bool Path::FUN_000f17f0(Vector4* vec, void* param_2, int param_3) {
	AssertNonImplemented;
	return true;
}

void Path::FUN_000f1c60(Vector4* param_1, void* data) {
	AssertNonImplemented;
}

float Path::FUN_000f1ce0(Vector4* vec, Vector4* out) {
	AssertNonImplemented;
	return 0;
}

int  Path::FUN_000f25e0(unsigned int param31, int param_2, float* param_3, float* param_4, char param_5) {
	AssertNonImplemented;
	return -1;
}