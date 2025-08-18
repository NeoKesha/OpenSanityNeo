#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include <oleg/oleg_base.h>

class GameController {
public:
	char padding[0x610];
	Oleg oleg;
};

extern "C" GameController* GameController1;