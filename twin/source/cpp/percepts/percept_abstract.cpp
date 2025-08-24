#include <XTL.h>
#include <stl.h>
#include "percept_abstract.h"


PerceptAbstract::PerceptAbstract() {
	id = 0;
}

PerceptAbstract::PerceptAbstract(int id) {
	this->id = id;
}

PerceptAbstract::~PerceptAbstract() {
	
}

bool PerceptAbstract::Process(void* ptr) {
	AssertNonImplemented
}

int PerceptAbstract::Get0x1807() {
	return 0x1807;
}

PerceptRandom::PerceptRandom() {
	id = 3;
}

PerceptRandom::~PerceptRandom() {
	
}

float PerceptRandom::GetUtilityScore(InstanceContext *ctx, int param1, int param2) {
	return rand() * 0.000030518f;
}