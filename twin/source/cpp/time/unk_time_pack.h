#pragma once
#include <twin_base.h>
#include "unk_time_pack_field.h"

class UnkTimePack : TwinBase {
public:
	UnkTimePackField fields[8];
	
	void ResetFlags();
	void SetFlags();
};