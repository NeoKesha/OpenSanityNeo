#include <XTL.h>
#include <stl.h>
#include <instance_ctx\instance_node_abstract.h>
#include "percept_abstract.h"


UnkFamily1Base::UnkFamily1Base() {
	g2 = g2 & 0xFC;
	g3 = -1;
	a = 0;
	b = 0;
	c = 0;
	elseControl = 0.0f;
	time = 0;
}

UnkFamily1Base::~UnkFamily1Base() {
	
}


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