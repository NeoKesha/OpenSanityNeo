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

PerceptRandom::PerceptRandom() {
	id = 3;
}

PerceptRandom::~PerceptRandom() {
	
}

float PerceptRandom::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	return rand() * 0.000030518f;
}

Percept0x04D::Percept0x04D() {
	id = 0x4D;
}

Percept0x04D::~Percept0x04D() {
	
}

float Percept0x04D::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->var46 != 0) && ((agent->var46->flags & 1) != 0)) {
		agent->var46 = 0;
	}
	if (agent->var46 != 0) {
		if ((agent->var46->flags & 1) == 0) {
			return 1.0f;
		}
		agent->var46 = 0;
	}
	return 0.0f;
}

Percept0x04E::Percept0x04E() {
	id = 0x4E;
}

Percept0x04E::~Percept0x04E() {
	
}

float Percept0x04E::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->var47 != 0) && ((agent->var47->flags & 1) != 0) && (((agent->var16 >> 0x14) & 1) != 0)) {
		agent->var47 = 0;
	}
	if (agent->var47 != 0) {
		if ((agent->var47->flags & 1) == 0) {
			return 1.0f;
		}
		agent->var47 = 0;
	}
	return 0.0f;
}

Percept0x04F::Percept0x04F() {
	id = 0x4F;
}

Percept0x04F::~Percept0x04F() {
	
}

float Percept0x04F::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->var46 != 0) && ((agent->var46->flags & 1) != 0)) {
		agent->var46 = 0;
	}
	if (agent->var46 != 0) {
		InstanceNodeInstance* node = (InstanceNodeInstance*)agent->var46->nodes.GetNode(ComponentId::Instance);
		if (node->var15[0xb] != 0xFFFF) {
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

float Percept0x050::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->var47 != 0) && ((agent->var47->flags & 1) != 0)) {
		agent->var47 = 0;
	}
	if (agent->var47 != 0) {
		InstanceNodeInstance* node = (InstanceNodeInstance*)agent->var47->nodes.GetNode(ComponentId::Instance);
		if (node->var15[0xb] != 0xFFFF) {
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

float Percept0x051::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if (agent->var36 == 0) {
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

float Percept0x052::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if (((agent->var16 >> 0xd) & 1) == 0) {
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

float PerceptSqrMoveSpeed::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	Matrix4* mat = agent->var50;
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

float PerceptNext::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	return 1.0f;
}

PerceptAttachedToAnAgent::PerceptAttachedToAnAgent() {
	id = 0x30;
}

PerceptAttachedToAnAgent::~PerceptAttachedToAnAgent() {
	
}

float PerceptAttachedToAnAgent::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->ctx->flags & 0x40) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

PerceptTimeInUnit::PerceptTimeInUnit() {
	id = 0x05;
}

PerceptTimeInUnit::~PerceptTimeInUnit() {
	
}

float PerceptTimeInUnit::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	return (time->time - control->time) * TimePerTick1;
}

PerceptIsVisible::PerceptIsVisible() {
	id = 0x04;
}

PerceptIsVisible::~PerceptIsVisible() {
	
}

float PerceptIsVisible::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->ctx->flags & 0x400) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

PerceptIsCollidable::PerceptIsCollidable() {
	id = 0x01;
}

PerceptIsCollidable::~PerceptIsCollidable() {
	
}

float PerceptIsCollidable::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->ctx->flags & 0x10) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

PerceptIsBusy::PerceptIsBusy() {
	id = 0x41;
}

PerceptIsBusy::~PerceptIsBusy() {
	
}

float PerceptIsBusy::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if ((agent->ctx->flags & 0x100) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

PerceptFocusIsBusy::PerceptFocusIsBusy() {
	id = 0x42;
}

PerceptFocusIsBusy::~PerceptFocusIsBusy() {
	
}

float PerceptFocusIsBusy::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	if (((agent->var16 & 1) != 0) && (agent->focus != 0)) {
		int focusFlags = agent->focus->flags;
		if ((focusFlags & 1) == 0) {
			if ((focusFlags & 0x100) == 0) {
				return 0.0f;
			} else {
				return 1.0f;
			}
		} else {
			agent->focus = 0;
		}
		agent->var16 &= 0xfffffffc;
	}
	
	return 0.0f;
}

PerceptElse::PerceptElse() {
	id = 2;
}

PerceptElse::~PerceptElse() {
	
}

float PerceptElse::GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) {
	control->elseControl = ELSE_CONTROL;
	return 0.0f;
}