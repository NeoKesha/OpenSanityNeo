#include <XTL.h>
#include <stl.h>
#include <instance_ctx\instance_node_abstract.h>
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

Percept0x04D::Percept0x04D() {
	id = 0x4D;
}

Percept0x04D::~Percept0x04D() {
	
}

float Percept0x04D::GetUtilityScore(InstanceContext *ctx, int param1, int param2) {
	InstanceNodeAbstract* characterNode = ctx->nodes.nodes[ComponentId::Character];
	if ((characterNode != 0) && ((characterNode->c & 1) != 0)) {
		ctx->nodes.nodes[ComponentId::Character] = 0; //WTF?
	}
	
	characterNode = ctx->nodes.nodes[ComponentId::Character];
	if (characterNode != 0) {
		if ((characterNode->c & 1) == 0) {
			return 1.0f;
		}
		
		ctx->nodes.nodes[ComponentId::Character] = 0; //WTF?
	}
	
	return 0.0f;
}