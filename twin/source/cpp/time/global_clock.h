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
	LARGE_INTEGER frequency;
	LARGE_INTEGER a;
	LARGE_INTEGER startTimestamp;
	LARGE_INTEGER timestamp;
	
	GlobalClock();
	void CalculateDeltaTime();
	void FUN_000f63f0();
	bool TimeOutCheck(float budget);
};