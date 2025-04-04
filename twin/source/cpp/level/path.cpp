#include <XTL.h>
#include <stl.h>
#include "path.h"
#include <math.h>

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
	float step = this->lastParameter[idx];
	bool result = false;
	Path::FUN_000ddfd0(this->points + idx, step, &mat);
	this->vec1.x = vec->x;
	this->vec1.y = vec->y;
	this->vec1.z = vec->z;
	this->vec1.w = vec->w;
	this->vec2.x = mat.row1.x;
	this->vec2.y = mat.row1.y;
	this->vec2.z = mat.row1.z;
	this->vec2.w = mat.row1.w;
	float dx1 = vec->x - mat.row1.x;
	float dy1 = vec->y - mat.row1.y;
	float dz1 = vec->z - mat.row1.z;
	float dot1 = dx1 * dx1 + dy1 * dy1 + dz1 * dz1;
	this->fl1 = dot1;
	
	float kx = (this->points[idx + 2].x * 4.0f + this->points[idx + 1].x + this->points[idx].x) * 0.16666667f;
	float ky = (this->points[idx + 2].y * 4.0f + this->points[idx + 1].y + this->points[idx].y) * 0.16666667f;
	float kz = (this->points[idx + 2].z * 4.0f + this->points[idx + 1].z + this->points[idx].z) * 0.16666667f;
	float dx2 = vec->x - kx;
	float dy2 = vec->y - ky;
	float dz2 = vec->z - kz;
	float dot2 = dz2 * dz2 + dy2 * dy2 + dx2 * dx2;
	if (dot2 < dot1) {
		this->vec2.x = kx;
		this->vec2.y = ky;
		this->vec2.z = kz;
		this->vec2.w = this->points[idx + 1].w;
		this->fl1 = dot2;
		this->fl2 = 1.0f;
	}
	
	float t = 0.0f;
	Vector4 vec1;
	vec1.x = mat.row1.x;
	vec1.y = mat.row1.y;
	vec1.z = mat.row1.z;
	vec1.w = mat.row1.w;
	while (t < 1.0f) {
		float dx3 = vec->x - vec1.x;
		float dy3 = vec->y - vec1.y;
		float dz3 = vec->z - vec1.z;
		float dot3 = dx3 * dx3 + dy3 * dy3 + dz3 * dz3;
		if (t > 0.0f && dot3 < this->fl1 * 0.998f) {
			PathTmpStruct tmp; //Matrix4 stack reuse
			tmp.cnt = 4;
			tmp.vec1.x = 0.000049999999f;
			tmp.vec1.y = 0.000049999999f;
			tmp.vec1.z = 0.0f;
			tmp.vec1.w = 1.0f;
			tmp.FUN_000f25e0(this, Path::FUN_000effe0, &t, &dot3, 1);
			FUN_000ec8c0(this->points + idx, t, &vec1);
			this->vec2.x = vec1.x;
			this->vec2.y = vec1.y;
			this->vec2.z = vec1.z;
			this->vec2.w = vec1.w;
			this->fl1 = dot3;
			this->fl2 = t;
			if (data->a <= dot3) {
				return result;
			}
			
			data->vec1.x = this->vec2.x;
			data->vec1.y = this->vec2.y;
			data->vec1.z = this->vec2.z;
			data->vec1.w = this->vec2.w;
			data->a = this->fl1;
			data->b = this->fl2;
			return true;
		}
		if (dot3 < data->a) {
			data->vec1.x = vec1.x;
			data->vec1.y = vec1.y;
			data->vec1.z = vec1.z;
			data->vec1.w = mat.row1.w;
			data->a = dot3;
			data->b = t;
			result = true;
		}
		
		t += step;
		vec1.x = mat.row2.x + vec1.x;
		vec1.y = mat.row2.y + vec1.y;
		vec1.z = mat.row2.z + vec1.z;
		
		mat.row2.x = mat.row3.x + mat.row2.x; //Stack reuse restore?!
		mat.row2.y = mat.row3.y + mat.row2.y;
		mat.row2.z = mat.row3.z + mat.row2.z;
		
		mat.row3.x = mat.row4.x + mat.row3.x;
		mat.row3.y = mat.row4.y + mat.row3.y;
		mat.row3.z = mat.row4.z + mat.row3.z;
	}
	return result;
}


//ISSUE: TODO: this code is shit and is probably not working, same with all FUN methods i know no whit what they do
int PathTmpStruct::FUN_000f25e0(Path* path, float(__stdcall *cb)(Path* path, float k), float* t, float* dot, bool flag) {
	this->vec2.z = *t;
	this->vec2.x = *t;
	if (flag) {
		this->vec2.w = *dot;
		this->vec2.y = *dot;
	} else {
		*dot = cb(path, *t);
		this->vec2.w = *dot;
		this->vec2.y = *dot;
	}
	if (this->cnt < 1) {
		return -1;
	}
	
	float dotResult = 0;
	float someShit = 0;
	for (int i = 0; i <= this->cnt; ++i) {
		float dotFuckingSaved = *dot;
		float tVal = *t;
		if (tVal < 0) {
			tVal = 0.0f - tVal;
		}
		tVal *= this->vec1.y;
		if (tVal < this->vec1.x) {
			tVal = this->vec1.x;
		}
		float jimbo = (this->vec1.x + this->vec1.w) * 0.5f;
		float newT = *t - jimbo;
		float apple = tVal * 0.5f;
		if (newT < 0) {
			newT = 0.0f - newT;
		}
		if (newT < tVal - jimbo) {
			return 0;
		}
		float dotVal = *dot;
		if (dotVal < 0) {
			dotVal = 0.0f - dotVal;
		}
		float resVal = 0;
		float tmp3 = 0;
		float tmpWeight = 0;
		if (tVal * 0.5f < dotVal) {
			float k1 = *t - this->vec2.x;
			float k2 = *t - this->vec2.z;
			float tmp1 = (*dot - this->vec2.w) * k1;
			float tmp2 = (*dot - this->vec2.y) * k2;
			tmp3 = (tmp1 - tmp2) * 2.0f;
			tmpWeight = k1 * tmp1 - k2 * tmp2;
			if (tmp3 > 0) {
				tmpWeight = 0.0f - tmpWeight;
			}
			if (tmp3 < 0) {
				tmp3 = 0.0f - tmp3;
			}
			
			if (tmpWeight < 0) {
				newT = 0.0 - tmpWeight;
			}
			resVal = dotFuckingSaved;
			dotResult = someShit;
		}
		
		float otherT = resVal * tmp3 * 0.5f;
		if (otherT < 0) {
			otherT = 0.0f - otherT;
		}
		
		if ((otherT <= newT) || (tmpWeight <= (this->vec1.x - *t) * tmp3) || ((this->vec1.w - *t) * tmp3 <= tmpWeight)) {
			if (jimbo <= *t) {
				dotResult = this->vec1.z - *t;
			} else {
				dotResult = this->vec1.w - *t;
			}
			someShit = dotResult * 0.381966f;
		} else {
			otherT = *t + newT / tmp3;
			this->a = otherT;
			if (otherT - this->vec1.z < tVal) {
				someShit = 0.0f - apple;
			} else {
				someShit = newT / tmpWeight;
				if (this->vec1.w - otherT < tVal) {
					someShit = apple;
					if (jimbo <= *t) {
						someShit = 0.0f - apple;
					}
				}
				resVal = someShit;
				if (someShit < 0.0f) {
					resVal = 0.0f - someShit;
				}
				
				tVal = *t;
				if (resVal < apple) {
					if (someShit >= 0.0f) {
						tVal = tVal + apple;
					} else {
						tVal = tVal - apple;
					}
				} else {
					tVal = tVal + someShit;
				}
				
				this->a = tVal;
				jimbo = cb(path, this->a);
				this->b = jimbo;
				tVal = *t; 
				//god save my soul
				if (*dot < jimbo) {
					if (tVal <= this->a) {
						this->vec1.w = this->a;
					} else {
						this->vec1.z = this->a;
					}
					if ((jimbo <= this->vec2.w) || (tVal = this->vec2.z, (_isnan(tVal) || _isnan(*t)) != (tVal == *t))) {
						tVal = this->a;
						this->vec2.x = this->vec2.z;
						this->vec2.y = this->vec2.w;
						this->vec2.z = tVal;
						this->vec2.w = jimbo;
					} else if ((jimbo <= this->vec2.y) || ((_isnan(this->vec2.x) || _isnan(*t)) != (this->vec2.x == *t)) || ((_isnan(this->vec2.x) || _isnan(this->vec2.z)) != (this->vec2.x == this->vec2.z))) {
						this->vec2.x = this->a;
						this->vec2.y = this->vec2.w;
					}
				} else {
					if (tVal <= this->a) {
						this->vec1.z = *t;
					} else {
						this->vec1.w = *t;
					}
					this->vec2.y = this->vec2.w;
					tVal = this->a;
					this->vec2.x = this->vec2.z;
					this->vec2.z = *t;
					this->vec2.w = *dot;
					*t = tVal;
					*dot = this->b;
				}
			}
		}
	}
	return 0;
}

float Path::FUN_000eca50(float k) {
	Vector4 vec;
	FUN_000ec8c0(this->points + this->num, k, &vec);
	vec.x = this->vec1.x - vec.x;
	vec.y = this->vec1.y - vec.y;
	vec.z = this->vec1.z - vec.z;
	return vec.x * vec.x + vec.y * vec.y + vec.z * vec.z;
}

float Path::FUN_000effe0(Path* path, float k) {
	return path->FUN_000eca50(k);
}

void Path::FUN_000ec8c0(Vector4* vecs, float k, Vector4* vec) {
	float x0 = vecs[0].x;
	float y0 = vecs[0].y;
	float z0 = vecs[0].z;
	float x1 = vecs[1].x;
	float y1 = vecs[1].y;
	float z1 = vecs[1].z;
	float x2 = vecs[2].x;
	float y2 = vecs[2].y;
	float z2 = vecs[2].z;
	float x3 = vecs[3].x;
	float y3 = vecs[3].y;
	float z3 = vecs[3].z;
	Vector4 outVec;
	Vector4::StaticTransform(&outVec,k);
	vec->x = outVec.x * x0;
	vec->w = 1.0f;
	float k1 = outVec.y * x1 + outVec.x * x0;
	float k2 = outVec.y * z1 + outVec.x * z0;
	vec->x = outVec.x * z0;
	float k3 = outVec.y * y1 + outVec.x * y0;
	vec->y = outVec.x * y0;
	outVec.x = outVec.w * x3;
	vec->x = k1;
	vec->y = k3;
	vec->z = k2;
	vec->x = k1 + outVec.x + outVec.z * x2;
	vec->y = k3 + outVec.w * y3 + outVec.z * y2;
	vec->z = k2 + outVec.w + z3 + outVec.z * z2;
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