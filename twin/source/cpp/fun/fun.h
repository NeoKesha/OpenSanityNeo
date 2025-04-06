#pragma once
#include <twin_base.h>

#ifdef ENABLE_FUN
extern "C" void InitFun();
extern "C" void UpdateFun();
//#define FUNNY_001
//#define FUNNY_002

#ifdef FUNNY_002
	class InputController;
	class GlobalClock;
	class DSDevice {
	public:

	IDirectSound8* device;
	DSCAPS caps;
		DSDevice();
		virtual ~DSDevice();
	};
	extern "C" InputController* INPUT_CONTROLLER;
	extern "C" GlobalClock*  GlobalClock;
	extern "C" float CLOCK_TIME_1;
	extern "C" float CLOCK_TIME_2;
	extern "C" float CLOCK_TIME_3;
	extern "C" float CLOCK_TIME_4;
	extern "C" float CLOCK_TIME_5;
	extern "C" float CLOCK_TIME_6;
	extern "C" float CLOCK_TIME_7;
	extern "C" float CLOCK_TIME_8;
	extern "C" DSDevice DS_DEVICE;
#endif

#endif