#include <XTL.h>
#include <stl.h>
#include <limits.h>
#include "global_clock.h"

GlobalClock::GlobalClock() {
	AssertNonImplemented
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