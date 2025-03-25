#pragma once
#include <twin_base.h>
#include "unk_time_pack.h"

class GlobalClock : TwinBase {
public:
	int prevTime;
	int deltaTimeTicks;
	UnkTimePack timeArray;
	int fps;
	int divisions;
	unsigned int frequencyHigh;
	unsigned int frequencyLow;
	int a;
	int b;
	unsigned int startTimestampHigh;
	unsigned int startTimestampLow;
	unsigned int timestampHigh;
	unsigned int timestampLow;
	
	GlobalClock();
	void CalculateDeltaTime();
	void FUN_000f63f0();
	void TimeOutCheck(float budget);
};