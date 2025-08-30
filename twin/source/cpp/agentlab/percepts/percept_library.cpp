#include <XTL.h>
#include <stl.h>
#include <instance_ctx\instance_node_abstract.h>
#include "percept_library.h"

DEFINE_PERCEPT(Next, 0x000)
float PerceptNext::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	return 1.0f;
}

DEFINE_PERCEPT(IsCollidable, 0x001)
float PerceptIsCollidable::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if ((agent->ctx->flags & 0x10) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

DEFINE_PERCEPT(Else, 0x002)
float PerceptElse::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	control->elseControl = ELSE_CONTROL;
	return 0.0f;
}

DEFINE_PERCEPT(Random, 0x003)
float PerceptRandom::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	return rand() * 0.000030518f;
}

DEFINE_PERCEPT(IsVisible, 0x004)
float PerceptIsVisible::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if ((agent->ctx->flags & 0x400) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

DEFINE_PERCEPT(TimeInUnit, 0x005)
float PerceptTimeInUnit::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	return (time->time - control->time) * TimePerTick1;
}

DEFINE_PERCEPT(AttachedToAnAgent, 0x030)
float PerceptAttachedToAnAgent::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if ((agent->ctx->flags & 0x40) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

DEFINE_PERCEPT(SqrMoveSpeed, 0x03E)
float PerceptSqrMoveSpeed::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	Matrix4* mat = agent->var50;
	float x = mat->row3.x;
	float y = mat->row3.y;
	float z = mat->row3.z;
	return x * x + y * y + z * z;
}

DEFINE_PERCEPT(IsBusy, 0x041)
float PerceptIsBusy::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if ((agent->ctx->flags & 0x100) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

DEFINE_PERCEPT(FocusIsBusy, 0x042)
float PerceptFocusIsBusy::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
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

DEFINE_PERCEPT(0x04D, 0x04D)
float Percept0x04D::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
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

DEFINE_PERCEPT(0x04E, 0x04E)
float Percept0x04E::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
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

DEFINE_PERCEPT(0x04F, 0x04F)
float Percept0x04F::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
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

DEFINE_PERCEPT(0x050, 0x050)
float Percept0x050::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
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

DEFINE_PERCEPT(0x051, 0x051)
float Percept0x051::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if (agent->var36 == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

DEFINE_PERCEPT(0x052, 0x052)
float Percept0x052::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if (((agent->var16 >> 0xd) & 1) == 0) {
		return 0.0f;
	} else {
		return 1.0f;
	}
}

DEFINE_PERCEPT(0x053, 0x053)
float Percept0x053::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if (agent->IsC()) {
		if (((agent->var16) & 0x10000) == 0) {
			return 0.0f;
		} else {
			return 1.0f;
		}
	}
	return 0.0f;
}

DEFINE_PERCEPT(0x054, 0x054)
float Percept0x054::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if (agent->IsC()) {
		if (((agent->var16 >> 0x11) & 1) == 0) {
			return 0.0f;
		} else {
			return 1.0f;
		}
	}
	return 0.0f;
}

DEFINE_PERCEPT(0x055, 0x055)
float Percept0x055::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if (agent->IsC()) {
		if (((agent->var16 >> 0xf) & 1) == 0) {
			return 0.0f;
		} else {
			return 1.0f;
		}
	}
	return 0.0f;
}

DEFINE_PERCEPT(0x056, 0x056)
float Percept0x056::GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) {
	if (agent->IsC()) {
		return agent->var61a * 0.003921569f;
	}
	return 0.0f;
}