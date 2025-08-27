#include <XTL.h>
#include <stl.h>
#include <limits.h>
#include "time.h"

void UnkTimePack::InitializeFields() {
	for (int i = 8; i != 0; --i) {
		this->fields[i].flags = 2;
		this->fields[i].time1.time = (int)(TicksPerTime * 0.0f);
		this->fields[i].time2.time = (int)(TicksPerTime * 0.0f);
	}
	return;
}

void UnkTimePack::StopTime() {
	this->fields[0].flags &= 0xfffffffe;
	this->fields[1].flags &= 0xfffffffe;
	this->fields[2].flags &= 0xfffffffe;
	this->fields[3].flags &= 0xfffffffe;
	this->fields[4].flags &= 0xfffffffe;
	this->fields[5].flags &= 0xfffffffe;
	this->fields[6].flags &= 0xfffffffe;
	this->fields[7].flags &= 0xfffffffe;
}
	
void UnkTimePack::ResumeTime() {
	this->fields[0].flags |= 1;
	this->fields[1].flags |= 1;
	this->fields[2].flags |= 1;
	this->fields[3].flags |= 1;
	this->fields[4].flags |= 1;
	this->fields[5].flags |= 1;
	this->fields[6].flags |= 1;
	this->fields[7].flags |= 1;
}

GlobalClock::GlobalClock(int fps) {
	this->timeArray.InitializeFields();
	
	this->prevTime = 0;
	this->fps = fps;
	this->startTimestamp.u.LowPart = 0;
	this->startTimestamp.u.HighPart = 0;
	this->timestamp.u.LowPart = 0;
	this->timestamp.u.HighPart = 0;
	
	int result = QueryPerformanceFrequency(&this->frequency);
	unsigned int flag = -(unsigned int)(result != 0) & frequency.u.LowPart;
	if (!QueryPerformanceCounter(&this->startTimestamp)) {
		this->startTimestamp.u.LowPart = 0;
		this->startTimestamp.u.HighPart = 0;
	}
	this->a.u.LowPart = this->frequency.u.LowPart / 7373;
	this->a.u.HighPart = this->frequency.u.HighPart / 7373;
	this->divisions = 0;
	
	unsigned int frequencyLow = frequency.u.LowPart;
	while (frequencyLow >= 9000) {
		frequencyLow >>= 1;
		++this->divisions;
	}
	SOME_STATE.u.LowPart = 3;
	CLOCK_TIME_1 = 1.0f;
	CLOCK_TIME_2 = 1.0f;
	CLOCK_TIME_3 = 1.0f;
	CLOCK_TIME_4 = 1.0f;
	CLOCK_TIME_5 = 1.0f;
	CLOCK_TIME_6 = 1.0f;
	CLOCK_TIME_7 = 1.0f;
	CLOCK_TIME_8 = 1.0f;
	
	TicksPerTime = (float)frequencyLow;
	TimePerTick1 = 1.0f / TicksPerTime;
	SOME_STATE.u.HighPart = 0;
	ENV_FLOAT_116_DT3 = SOME_STATE.u.HighPart;
	this->timeArray.fields[0].flags |= 1;
	this->timeArray.fields[1].flags |= 1;
	this->timeArray.fields[2].flags |= 1;
	this->timeArray.fields[3].flags |= 1;
	this->timeArray.fields[4].flags |= 1;
	this->timeArray.fields[5].flags |= 1;
	this->timeArray.fields[6].flags |= 1;
	this->timeArray.fields[7].flags |= 1;
}
void GlobalClock::CalculateDeltaTime() {
	AssertNonImplemented
}
void GlobalClock::FUN_000f63f0() {
	AssertNonImplemented
}
bool GlobalClock::TimeOutCheck(float budget) {
	unsigned int ticksPerFrame = this->frequency.u.LowPart / this->fps;
	unsigned int ticksBudget = (unsigned int)(ticksPerFrame * budget);
	LARGE_INTEGER ticks;
	if (!QueryPerformanceCounter(&ticks)) {
		ticks.u.LowPart = 0;
		ticks.u.HighPart = 0;
	}
	
	LARGE_INTEGER delta;
	delta.u.LowPart = ticks.u.LowPart - this->timestamp.u.LowPart;
	delta.u.HighPart = ticks.u.HighPart - this->timestamp.u.HighPart;
	if (ticks.u.LowPart < this->timestamp.u.LowPart) {
		delta.u.HighPart -= 1;
	}
	
	LARGE_INTEGER endTime;
	endTime.u.LowPart = this->a.u.LowPart;
	endTime.u.HighPart = this->a.u.HighPart;
	if (ticks.u.LowPart + ticksPerFrame > UINT_MAX) {
		endTime.u.HighPart += 1;
	}
	
	//TODO: fold
	if (endTime.u.HighPart <= delta.u.HighPart) {
		if (endTime.u.HighPart < delta.u.HighPart) {
			do {
				delta.u.LowPart -= ticksPerFrame;
				if (delta.u.LowPart < ticksPerFrame) --delta.u.HighPart;
			} while (endTime.u.HighPart < delta.u.HighPart);
		} else {
			do {
				if (delta.u.LowPart <= endTime.u.LowPart + ticksPerFrame) break;
				do {
					delta.u.LowPart -= ticksPerFrame;
					if (delta.u.LowPart < ticksPerFrame) --delta.u.HighPart;
				} while (endTime.u.HighPart < delta.u.HighPart);
			} while (endTime.u.HighPart <= delta.u.HighPart);
		}
	}

	int ticksBudgetDecimated = ticksBudget >> 0x1f;
	int tmp = -delta.u.HighPart;
	if (ticksPerFrame < delta.u.LowPart) {
		--tmp;
	}
	if ((ticksBudgetDecimated <= tmp) && ((ticksBudgetDecimated < tmp || (ticksBudget < ticksPerFrame - delta.u.LowPart)))) {
		return true;
	}
	return false;
}