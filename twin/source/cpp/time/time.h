#pragma once
#include <twin_base.h>

extern "C" float TicksPerTime;
extern "C" float TimePerTick1;
extern "C" float CLOCK_TIME_1;
extern "C" float CLOCK_TIME_2;
extern "C" float CLOCK_TIME_3;
extern "C" float CLOCK_TIME_4;
extern "C" float CLOCK_TIME_5;
extern "C" float CLOCK_TIME_6;
extern "C" float CLOCK_TIME_7;
extern "C" float CLOCK_TIME_8;
extern "C" LARGE_INTEGER SOME_STATE;
extern "C" int ENV_FLOAT_116_DT3;
extern "C" int FRAME_NUMBER;

extern "C" void __cdecl TickFrameNumber();

class PTime : public TwinBase {
public:
	int time;
};

class UnkTimePackField : public TwinBase {
public:
	unsigned int flags;
	PTime time1;
	PTime time2;
};

class UnkTimePack : public TwinBase {
public:
	UnkTimePackField fields[8];
	
	void StopTime();
	void ResumeTime();
	void InitializeFields();
};

class GlobalClock : public TwinBase {
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
	
	GlobalClock(int fps);
	void CalculateDeltaTime();
	void FUN_000f63f0();
	bool TimeOutCheck(float budget);
};