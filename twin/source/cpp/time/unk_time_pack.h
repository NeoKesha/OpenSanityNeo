#pragma once
#include <twin_base.h>
#include "unk_time_pack_field.h"

extern "C" float TicksPerTime;

class UnkTimePack : TwinBase {
public:
	UnkTimePackField fields[8];
	
	void StopTime();
	void ResumeTime();
	void InitializeFields();
};