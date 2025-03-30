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
	AssertNonImplemented;
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