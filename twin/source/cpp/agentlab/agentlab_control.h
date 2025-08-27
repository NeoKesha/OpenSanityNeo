#pragma once
#include <twin_base.h>

extern "C" float ELSE_CONTROL;

class InstanceNodeInstance;

class LayerControl : public TwinBase {
public:
	LayerControl();
	virtual ~LayerControl();
	
	int a;
	int b;
	int c;
	int d;
	float elseControl;
	int time;
	unsigned char g1;
	unsigned char g2;
	short g3;
};

class ChannelControl : public TwinBase {
public:
	int id;
	InstanceNodeInstance* nodeInstance;
};