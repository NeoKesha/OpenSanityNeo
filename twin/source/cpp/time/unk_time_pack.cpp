#include <XTL.h>
#include <stl.h>
#include "unk_time_pack.h"

void UnkTimePack::InitializeFields() {
	for (int i = 8; i != 0; --i) {
		this->fields[i].flags = 2;
		this->fields[i].time1 = (int)(TicksPerTime * 0.0f);
		this->fields[i].time2 = (int)(TicksPerTime * 0.0f);
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