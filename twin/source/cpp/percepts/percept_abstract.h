#pragma once
#include <twin_base.h>

extern "C" float TimePerTick1;
extern "C" float ELSE_CONTROL;

class PTime : public TwinBase {
public:
	int time;
};

class UnkFamily1Base : public TwinBase {
public:
	UnkFamily1Base();
	virtual ~UnkFamily1Base();
	
	int a;
	int b;
	int c;
	int d;
	float elseControl;
	int time;
	unsigned char g1;
	unsigned char g2;
	short g3;
};

class InstanceNodeInstanceD;
class PerceptAbstract : public TwinBase {
public:
	PerceptAbstract();
	PerceptAbstract(int id);
	virtual ~PerceptAbstract();
	
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time) = 0;
	virtual bool Process(void* ptr);
	virtual int Get0x1807();
	
	int id;
	float interval;
	float threshold;
	float threshold_inverse;
};

class PerceptRandom : public PerceptAbstract {
	PerceptRandom();
	virtual ~PerceptRandom();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x04D : public PerceptAbstract {
	Percept0x04D();
	virtual ~Percept0x04D();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x04E : public PerceptAbstract {
	Percept0x04E();
	virtual ~Percept0x04E();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x04F : public PerceptAbstract {
	Percept0x04F();
	virtual ~Percept0x04F();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x050 : public PerceptAbstract {
	Percept0x050();
	virtual ~Percept0x050();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x051 : public PerceptAbstract {
	Percept0x051();
	virtual ~Percept0x051();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x052 : public PerceptAbstract {
	Percept0x052();
	virtual ~Percept0x052();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptSqrMoveSpeed : public PerceptAbstract {
	PerceptSqrMoveSpeed();
	virtual ~PerceptSqrMoveSpeed();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptNext : public PerceptAbstract {
	PerceptNext();
	virtual ~PerceptNext();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptAttachedToAnAgent : public PerceptAbstract {
	PerceptAttachedToAnAgent();
	virtual ~PerceptAttachedToAnAgent();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptTimeInUnit: public PerceptAbstract {
	PerceptTimeInUnit();
	virtual ~PerceptTimeInUnit();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptIsVisible: public PerceptAbstract {
	PerceptIsVisible();
	virtual ~PerceptIsVisible();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptIsCollidable: public PerceptAbstract {
	PerceptIsCollidable();
	virtual ~PerceptIsCollidable();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptIsBusy: public PerceptAbstract {
	PerceptIsBusy();
	virtual ~PerceptIsBusy();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptFocusIsBusy: public PerceptAbstract {
	PerceptFocusIsBusy();
	virtual ~PerceptFocusIsBusy();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class PerceptElse: public PerceptAbstract {
	PerceptElse();
	virtual ~PerceptElse();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x053 : public PerceptAbstract {
	Percept0x053();
	virtual ~Percept0x053();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};

class Percept0x054 : public PerceptAbstract {
	Percept0x054();
	virtual ~Percept0x054();
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, UnkFamily1Base* control, PTime* time);
};