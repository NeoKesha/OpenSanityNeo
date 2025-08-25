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

float PerceptRandom::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	return rand() * 0.000030518f;
}

Percept0x04D::Percept0x04D() {
	id = 0x4D;
}

Percept0x04D::~Percept0x04D() {
	
}

float Percept0x04D::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	if ((ctx->var46 != 0) && ((ctx->var46->flags & 1) != 0)) {
		ctx->var46 = 0;
	}
	if (ctx->var46 != 0) {
		if ((ctx->var46->flags & 1) == 0) {
			return 1.0f;
		}
		ctx->var46 = 0;
	}
	return 0.0f;
}

Percept0x04E::Percept0x04E() {
	id = 0x4E;
}

Percept0x04E::~Percept0x04E() {
	
}

float Percept0x04E::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	if ((ctx->var47 != 0) && ((ctx->var47->flags & 1) != 0) && (((ctx->var16 >> 0x14) & 1) != 0)) {
		ctx->var47 = 0;
	}
	if (ctx->var47 != 0) {
		if ((ctx->var47->flags & 1) == 0) {
			return 1.0f;
		}
		ctx->var47 = 0;
	}
	return 0.0f;
}

Percept0x04F::Percept0x04F() {
	id = 0x4F;
}

Percept0x04F::~Percept0x04F() {
	
}

float Percept0x04F::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	if ((ctx->var46 != 0) && ((ctx->var46->flags & 1) != 0)) {
		ctx->var46 = 0;
	}
	if (ctx->var46 != 0) {
		InstanceNodeInstance* node = (InstanceNodeInstance*)ctx->var46->nodes.GetNode(ComponentId::Instance);
		if (node->var15[0xb] != 0xFFFF) {
			//if ((node->var15[0xb] & 0x7FFF) != 0) {
			if ((node->var15[0xb] & 0x7FFF) != (this->id >> 0x11)) {
				return 0.0f;
			} else {
				return 1.0f;
			}
		}
	}
	return 0.0f;
}

Percept0x050::Percept0x050() {
	id = 0x50;
}

Percept0x050::~Percept0x050() {
	
}

float Percept0x050::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	if ((ctx->var47 != 0) && ((ctx->var47->flags & 1) != 0)) {
		ctx->var47 = 0;
	}
	if (ctx->var47 != 0) {
		InstanceNodeInstance* node = (InstanceNodeInstance*)ctx->var47->nodes.GetNode(ComponentId::Instance);
		if (node->var15[0xb] != 0xFFFF) {
			//if ((node->var15[0xb] & 0x7FFF) != 0) {
			if ((node->var15[0xb] & 0x7FFF) != (this->id >> 0x11)) {
				return 0.0f;
			} else {
				return 1.0f;
			}
		}
	}
	return 0.0f;
}

Percept0x051::Percept0x051() {
	id = 0x51;
}

Percept0x051::~Percept0x051() {

}

float Percept0x051::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	if (ctx->var36 == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

Percept0x052::Percept0x052() {
	id = 0x52;
}

Percept0x052::~Percept0x052() {

}

float Percept0x052::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	if (((ctx->var16 >> 0xd) & 1) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

PerceptSqrMoveSpeed::PerceptSqrMoveSpeed() {
	id = 0x3e;
}

PerceptSqrMoveSpeed::~PerceptSqrMoveSpeed() {
	
}

float PerceptSqrMoveSpeed::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	Matrix4* mat = ctx->var50;
	float x = mat->row3.x;
	float y = mat->row3.y;
	float z = mat->row3.z;
	return x * x + y * y + z * z;
}

PerceptNext::PerceptNext() {
	id = 0;
}

PerceptNext::~PerceptNext() {
	
}

float PerceptNext::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	return 1.0f;
}

PerceptAttachedToAnAgent::PerceptAttachedToAnAgent() {
	id = 0x30;
}

PerceptAttachedToAnAgent::~PerceptAttachedToAnAgent() {
	
}

float PerceptAttachedToAnAgent::GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) {
	if ((ctx->ctx->flags & 0x40) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}