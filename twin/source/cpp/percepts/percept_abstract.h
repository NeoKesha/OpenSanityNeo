#pragma once
#include <twin_base.h>
#include <time\unk_time_pack.h>
#include <instance_ctx\instance_context.h>

class PerceptAbstract : public TwinBase {
public:
	PerceptAbstract();
	PerceptAbstract(int id);
	virtual ~PerceptAbstract();
	
	virtual float GetUtilityScore(InstanceContext *ctx, int param1, int param2) = 0;
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
	virtual float GetUtilityScore(InstanceContext *ctx, int param1, int param2);
};