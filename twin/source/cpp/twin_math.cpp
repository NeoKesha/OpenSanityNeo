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

void Rotation2D::FUN_000d2a10(float* x, float* y) {
	int a = value + 8;
	int b = a >> 4;
	int c = b & 0xc00;
	a = a & 0xf;
	b = b & 0x3ff;
	if (c < 0x801) {
		if ((c == 0x800) || (c == 0)) {
		  a = a - 8;
		} else {
			if (c != 0x400) {

			} else {
				b = 0x400 - b;
				a = 7 - a;
			}
		}

	} else if (c != 0xc00) {

	} else {
		b = 0x400 - b;
		a = 7 - a;
	}
	

	float cos = TRIGONOMETRY_INDEXES[b * 2] * 0.00024414063f;
	float sin = TRIGONOMETRY_INDEXES[b * 2 + 1] * 0.00024414063f;
	if (a == 0) {
		*x = cos;
		*y = sin;
	} else {
		float t = 6.2831855f * 0.00024414063f * 0.0625f * a;
		*x = cos - t * sin;
		*y = t * cos + sin;
	}
	if (c == 0x400) {
		*x = 0.0 - *x;
	} else {
		if (c == 0x800) {
			*x = 0.0 - *x;
			*y = 0.0 - *y;
			return;
		}
		if (c == 0xc00) {
			*y = 0.0 - *y;
			return;
		}
	}
}

Matrix4::Matrix4() {
	ZeroMemory(this, sizeof(Matrix4));
	row1.x = 1.0f;
	row2.y = 1.0f;
	row3.z = 1.0f;
	row4.w = 1.0f;
}

Matrix4::Matrix4(int angle) {
	ZeroMemory(this, sizeof(Matrix4));
	if (angle == 0) {
		row1.x = 1.0f;
		row2.y = 1.0f;
		row3.z = 1.0f;
		row4.w = 1.0f;
		return;
	}
	Rotation2D* hack = (Rotation2D*)&angle;
	float x;
	float y;
	row4.w = 1.0f;
	hack->FUN_000d2a10(&x, &y);
	row2.y = x;
	row1.x = x;
	row3.z = 1.0f;
	row2.x = -y;
	row1.y = y;
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

void Matrix4::Multiply4443(Matrix4* mat, Matrix4* out) {
	float a11 = this->row1.x;
	float a12 = this->row1.y;
	float a13 = this->row1.z;
	float a14 = this->row1.w;
	float a21 = this->row2.x;
	float a22 = this->row2.y;
	float a23 = this->row2.z;
	float a24 = this->row2.w;
	float a31 = this->row3.x;
	float a32 = this->row3.y;
	float a33 = this->row3.z;
	float a34 = this->row3.w;
	float a41 = this->row4.x;
	float a42 = this->row4.y;
	float a43 = this->row4.z;
	float a44 = this->row4.w;
	float b11 = mat->row1.x;
	float b12 = mat->row1.y;
	float b13 = mat->row1.z;
	float b14 = mat->row1.w;
	float b21 = mat->row2.x;
	float b22 = mat->row2.y;
	float b23 = mat->row2.z;
	float b24 = mat->row2.w;
	float b31 = mat->row3.x;
	float b32 = mat->row3.y;
	float b33 = mat->row3.z;
	float b34 = mat->row3.w;
	float b41 = mat->row4.x;
	float b42 = mat->row4.y;
	float b43 = mat->row4.z;
	float b44 = mat->row4.w;
	out->row1.x = a11 * b11 + a12 * b21 + a13 * b31 + a14 * b41;
	out->row1.y = a11 * b12 + a12 * b22 + a13 * b32 + a14 * b42;
	out->row1.z = a11 * b13 + a12 * b23 + a13 * b33 + a14 * b43;
	out->row1.w = a11 * b14 + a12 * b24 + a13 * b34 + a14 * b44;
	out->row2.x = a21 * b11 + a22 * b21 + a23 * b31 + a24 * b41;
	out->row2.y = a21 * b12 + a22 * b22 + a23 * b32 + a24 * b42;
	out->row2.z = a21 * b13 + a22 * b23 + a23 * b33 + a24 * b43;
	out->row2.w = a21 * b14 + a22 * b24 + a23 * b34 + a24 * b44;
	out->row3.x = a31 * b11 + a32 * b21 + a33 * b31 + a34 * b41;
	out->row3.y = a31 * b12 + a32 * b22 + a33 * b32 + a34 * b42;
	out->row3.z = a31 * b13 + a32 * b23 + a33 * b33 + a34 * b43;
	out->row3.w = a31 * b14 + a32 * b24 + a33 * b34 + a34 * b44;
	out->row4.x = a41 * b11 + a42 * b21 + a43 * b31 + a44 * b41;
	out->row4.y = a41 * b12 + a42 * b22 + a43 * b32 + a44 * b42;
	out->row4.z = a41 * b13 + a42 * b23 + a43 * b33 + a44 * b43;
	out->row4.w = a41 * b14 + a42 * b24 + a43 * b34 + a44 * b44;
	return;
}

SplineAbstract::SplineAbstract() {
	next = 0;
	position = 0.0f;
	argument = 0.0f;
	repeats = 0;
}

SplineAbstract::~SplineAbstract() {

}

void SplineAbstract::Transform(Matrix4* matrix) {

}

void SplineAbstract::UnkMethod(int param) {

}

void SplineAbstract::Reset() {
	position = 0.0f;
	argument = 0.0f;
	repeats = 0;
}

SplineA::SplineA() : SplineAbstract() {
	arrayLength = 4;
	spline = new Vector2[arrayLength];
	spline[0].x = 1.0f;
	spline[0].y = 1.0f;
	spline[1].x = 1.2f;
	spline[1].y = 1.2f;
	spline[2].x = 1.3f;
	spline[2].y = 1.3f;
	spline[3].x = 1.0f;
	spline[3].y = 1.0f;
}

SplineA::~SplineA() {
	delete spline; //not in the original code, fixing memory leak
}

SplineAbstract* SplineA::Step(float step, int param_2, int param_3, bool flag) {
	SplineAbstract* segment = this;
	if (flag) {
		this->argument = this->position / this->length;
		this->position = this->position + step;
		if (this->argument >= 1.0f) {
			this->repeats -= 1;
			this->position = 0.0f;
			if (this->repeats <= 0) {
				segment = this->next;
			}
		}
	}
	return segment;
}

void SplineA::Transform(Matrix4* matrix) {
	Vector2 vec;
	Matrix4 tmpMatrix;
	float j = argument;
	if (1.0f <= j) {
		vec.x = spline[arrayLength - 1].x;
		vec.y = spline[arrayLength - 1].y;
	} else {
		Vector2* vectorArray = spline;
		j = (float)(arrayLength - 1) * j;
		int i = (int)j;
		j = j - (float)i;
		vec.x = (vectorArray[i + 1].x - vectorArray[i].x) * j + vectorArray[i].x;
		vec.y = (vectorArray[i + 1].y - vectorArray[i].y) * j + vectorArray[i].y;
	}
	
	tmpMatrix.row1.x = vec.x;
	tmpMatrix.row2.y = vec.y;
	tmpMatrix.Multiply4443(matrix, matrix);
}

SplineC::SplineC() : SplineAbstract() {

}

SplineC::~SplineC() {

}

SplineAbstract* SplineC::Step(float step, int param_2, int param_3, bool flag) {
	SplineAbstract* segment = this;
	this->argument = this->position / this->length;
	this->position = this->position + step;
	if (this->argument >= 1.0f) {
		this->repeats -= 1;
		this->position -= this->length;
		if (this->repeats <= 0) {
			segment = this->next;
		}
	}
	return segment;
}

void SplineC::Transform(Matrix4* matrix) {
	Rotation2D a;
	float x;
	float y;
	a.value = (65536.0f / 6.2831855f) * (argument * 6.2831855f);
	a.FUN_000d2a10(&x, &y);
	y = 0.78539819f * y * 0.5f;
	Matrix4 tmpMatrix((65536.0f / 6.2831855f) * y);
	tmpMatrix.Multiply4443(matrix, matrix);
}