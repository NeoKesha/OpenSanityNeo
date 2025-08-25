#pragma once
#include <twin_base.h>

class InstanceNodeInstanceD;
class PerceptAbstract : public TwinBase {
public:
	PerceptAbstract();
	PerceptAbstract(int id);
	virtual ~PerceptAbstract();
	
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2) = 0;
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
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class Percept0x04D : public PerceptAbstract {
	Percept0x04D();
	virtual ~Percept0x04D();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class Percept0x04E : public PerceptAbstract {
	Percept0x04E();
	virtual ~Percept0x04E();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class Percept0x04F : public PerceptAbstract {
	Percept0x04F();
	virtual ~Percept0x04F();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class Percept0x050 : public PerceptAbstract {
	Percept0x050();
	virtual ~Percept0x050();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class Percept0x051 : public PerceptAbstract {
	Percept0x051();
	virtual ~Percept0x051();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class Percept0x052 : public PerceptAbstract {
	Percept0x052();
	virtual ~Percept0x052();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class PerceptSqrMoveSpeed : public PerceptAbstract {
	PerceptSqrMoveSpeed();
	virtual ~PerceptSqrMoveSpeed();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class PerceptNext : public PerceptAbstract {
	PerceptNext();
	virtual ~PerceptNext();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};

class PerceptAttachedToAnAgent : public PerceptAbstract {
	PerceptAttachedToAnAgent();
	virtual ~PerceptAttachedToAnAgent();
	virtual float GetUtilityScore(InstanceNodeInstanceD *ctx, int param1, int param2);
};