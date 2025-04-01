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
	//TODO: Custom code reimplementation. Original uses smart vector batching?
	int closestIdx = 0;
	float dx = this->points[0].x - vec->x;
	float dy = this->points[0].y - vec->y;
	float dz = this->points[0].z - vec->z;
	float closestDistance = dx * dx + dy * dy + dz * dz;
	for (int i = 1; i < this->pointCnt; ++i) {
		dx = this->points[i].x - vec->x;
		dy = this->points[i].y - vec->y;
		dz = this->points[i].z - vec->z;
		float distance = dx * dx + dy * dy + dz * dz;
		if (distance < closestDistance) {
			closestIdx = i;
			closestDistance = distance;
		}
	}
	return closestIdx;
}

float Path::FUN_000de6a0(int idx, float k) {
	Vector4 vec1;
	Vector4 vec2;
	Vector4 vec3;
	Vector4 vec4;
	vec1.x = this->points[idx].x;
	vec1.y = this->points[idx].y;
	vec1.z = this->points[idx].z;
	vec2.x = this->points[idx + 1].x;
	vec2.y = this->points[idx + 1].y;
	vec2.z = this->points[idx + 1].z;
	vec3.x = this->points[idx + 2].x;
	vec3.y = this->points[idx + 2].y; 
	vec3.z = this->points[idx + 2].z;
	vec4.x = this->points[idx + 3].x; 
	vec4.y = this->points[idx + 3].y;
	vec4.z = this->points[idx + 3].z;
	float a = 0.0f; 
	float b  = 0.0f; 
	Vector4 vectorOut;
	float prevX;
	float prevY;
	float prevZ;
	bool flag = false;
	if (0.0f <= k) {
		do {
			Vector4::StaticTransform(&vectorOut, b);
			float x = vec3.x * vectorOut.z + vec2.x * vectorOut.y + vec4.x * vectorOut.w + vectorOut.x * vec1.x;
			float y = vec4.y * vectorOut.w + vec3.y * vectorOut.z + vec2.y * vectorOut.y + vec1.y * vectorOut.x;
			float z = vec4.z * vectorOut.w + vec3.z * vectorOut.z + vec2.z * vectorOut.y + vec1.z * vectorOut.x;
			if (flag) {
				float diffSqr = (z - prevZ) * (z - prevZ) + (y - prevY) * (y - prevY) +  (x - prevX) * (x - prevX);
				a = sqrt(diffSqr) + a;
			}
			b = b + 0.01f;
			prevX = x;
			prevY = y;
			prevZ = z;
			flag = true;
		} while (b <= k);
	}
	return a;
}

float Path::FUN_000ecee0(VectorContainer* data) {
	float param;
	if (data->idx == 0) {
		param = 0;
	} else {
		param = this->parameters[data->idx - 1];
	}
	float k = this->FUN_000de6a0(data->idx, data->b);
	return (k + param)/(this->parameters[this->pointCnt - 4]);
}

void Path::FUN_000ecf20(unsigned int param_1, float param_2) {
	AssertNonImplemented;
}

bool Path::FUN_000efff0(Vector4* vec, float k) {
	AssertNonImplemented;
	return true;
}

bool Path::FUN_000f17f0(Vector4* vec, VectorContainer* data, int idx) {
	Matrix4 mat;
	Path::FUN_000ddfd0(this->points + idx, this->lastParameter[idx], &mat);
	//TODO Unfinished! Mock
	return true;
}

void Path::FUN_000f1c60(Vector4* vec, VectorContainer* data) {
	data->a = 1e+30;
	int idx = this->FindClosestPoint(vec);
	int pointIdx = idx - 3;
	int someIdx = 4;
	if (pointIdx < 0) {
		someIdx = idx + 1;
		pointIdx = 0;
	}
	idx = this->pointCnt - 3;
	if (idx < someIdx + pointIdx) {
		someIdx = idx - pointIdx;
	}
	while (someIdx != 0) {
		bool flag = this->FUN_000f17f0(vec, data, pointIdx);
		if (flag) {
			data->idx = pointIdx;
		}
		++pointIdx;
		--someIdx;
	}
}

float Path::FUN_000f1ce0(Vector4* vec, Vector4* out) {
	AssertNonImplemented;
	return 0;
}

int  Path::FUN_000f25e0(unsigned int param31, int param_2, float* param_3, float* param_4, char param_5) {
	AssertNonImplemented;
	return -1;
}

void Path::FUN_000ddfd0(Vector4* vecs,float k,Matrix4* mat) {
	float x0 = vecs[0].x;
	float y0 = vecs[0].y;
	float z0 = vecs[0].z;
	float x1 = vecs[1].x;
	float y1 = vecs[1].y;
	float z1 = vecs[1].z;
	float w1 = vecs[1].w;
	float x2 = vecs[2].x;
	float y2 = vecs[2].y;
	float z2 = vecs[2].z;
	float w2 = vecs[2].w;
	
	float k1 = (y2 - y0) * 0.16666667f;
	float k2 = (z2 - z0) * 0.16666667f;
	float k3 = (vecs[2].y + vecs[0].y + vecs[1].y + y1) * 0.16666667f;
	float k4 = (vecs[2].z + vecs[0].z + vecs[1].z + z1) * 0.16666667f;
	float k5 = (x2 - x0) * 0.16666667f;
	
	float kSqr = k * k;
	float kCube = k * kSqr;
	
	float k6 = (vecs[3].y + (y1 - y2) - vecs[0].y) * kCube * 0.16666667f;
	float k7 = (vecs[3].x - (x1 - x2) - vecs[0].x) * kCube * 0.16666667f;
	float k8 = (x0 - x1 - x1 + x2) * kSqr * 0.16666667f;
	float k9 = (vecs[3].z + (z1 - z2) - vecs[0].z) * kCube * 0.16666667f;
	float k10 = (y0 - y1 - y1 + y2) * kSqr * 0.16666667f;
	float k11 = (z0 - z1 - z1 + z2) * kSqr * 0.16666667f;
	
	mat->row1.x = (vecs[2].x + vecs[0].x + vecs[1].x + x1) * 0.16666667f;
	mat->row1.y = k3;
	mat->row1.z = k4;
	mat->row1.w = w1;
	mat->row2.x = k8 + k7 + k5 * k;
	mat->row2.y = k10 + k6 + k1 * k;
	k7 *= 6.0f;
	mat->row2.z = k11 + k9 + k2 * k;
	mat->row2.w = 1.0f;
	k6 *= 6;
	mat->row3.y = k10 * 2.0f + k6;
	mat->row3.w = 1.0f;
	mat->row3.x = k8 * 2.0f + k7;
	mat->row3.z = k11 * 2.0f + k9 * 6.0f;
	mat->row4.x = k7;
	mat->row4.y = k6;
	mat->row4.z = k9 * 6.0f;
	mat->row4.w = w2;
}