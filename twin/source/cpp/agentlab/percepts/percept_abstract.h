#pragma once
#include <twin_base.h>
#include <time\time.h>
#include <agentlab\agentlab_control.h>

class InstanceNodeInstanceD;
class PerceptAbstract : public TwinBase {
public:
	PerceptAbstract();
	PerceptAbstract(int id);
	virtual ~PerceptAbstract();
	
	virtual float GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time) = 0;
	virtual bool Process(void* ptr);
	virtual int Get0x1807();
	
	int id;
	float interval;
	float threshold;
	float threshold_inverse;
};

#define REGISTER_PERCEPT(Name)  \
class Percept##Name : public PerceptAbstract { \
public: \
    Percept##Name(); \
    virtual ~Percept##Name(); \
    virtual float GetUtilityScore(InstanceNodeInstanceD *agent, LayerControl* control, PTime* time); \
};
#define DEFINE_PERCEPT(Name, Id) \
	Percept##Name::Percept##Name() : PerceptAbstract(Id) {} \
	Percept##Name::~Percept##Name() {}