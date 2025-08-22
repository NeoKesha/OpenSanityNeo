#include <XTL.h>
#include <stl.h>
#include "spline.h"

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

SplineB::SplineB() : SplineAbstract() {
	AssertNonImplemented
	//Construct unkStruct
}

SplineB::~SplineB() {
	//Deconstruct unkStruct
	AssertNonImplemented
}

SplineAbstract* SplineB::Step(float step, int param_2, int param_3, bool flag) {
	AssertNonImplemented
	return this;
}

void SplineB::Transform(Matrix4* matrix) {
	AssertNonImplemented
}

void SplineB::Reset() {
	AssertNonImplemented
	//Reset unk struct
	//call parent
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
	Matrix4 tmpMatrix((int)((65536.0f / 6.2831855f) * y));
	tmpMatrix.Multiply4443(matrix, matrix);
}

SplineD::SplineD() : SplineAbstract() {
}

SplineD::~SplineD() {
}

SplineAbstract* SplineD::Step(float step, int param_2, int param_3, bool flag) {
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

extern "C" bool IS_WIDESCREEN;
void SplineD::Transform(Matrix4* matrix) {
	float t = 0.44f;
	if (!IS_WIDESCREEN) {
		t = 0.36f;
	}
	matrix->row4.x = t * argument + matrix->row4.x;
}

SplineE::SplineE() : SplineAbstract() {
	
}

SplineE::~SplineE() {
}

SplineAbstract* SplineE::Step(float step, int param_2, int param_3, bool flag) {
	SplineAbstract* segment = this;
	this->argument = this->position / this->length;
	this->position = this->position + step;
	if (this->argument >= 1.0f) {
		this->repeats -= 1;
		this->position = 0.0f;
		if (this->repeats <= 0) {
			segment = this->next;
		}
	}
	return segment;
}

void SplineE::Transform(Matrix4* matrix) {
	Matrix4 tmpMatrix((int)((65536.0f / 6.2831855f) * (argument * 6.2831855f * 4)));
	float t = 0.44f;
	if (!IS_WIDESCREEN) {
		t = 0.36f;
	}
	matrix->row4.x = t + matrix->row4.x;
	tmpMatrix.Multiply4443(matrix, matrix);
}

CollectionUnknown::CollectionUnknown() {
	count = 0;
	expansion = 10;
	capacity = 0;
	lastIndex = -1;
	indexArray = 0;
	collection = 0;
}

CollectionUnknown::~CollectionUnknown() {
	delete indexArray;
	delete collection;
}

void CollectionUnknown::AddIndex(int index) {
	indexArray[index] = lastIndex;
	capacity -= 1;
	lastIndex = index;
}

void CollectionUnknown::FUN_000c3ac0() {
	if (count != 0 && capacity != 0) {
		int i = 0;
		for (i = 0; i < count - 1; ++i) {
			indexArray[i] = i + 1;
		}
		indexArray[i] = -2;
		capacity = 0;
		lastIndex = 0;
	}
}