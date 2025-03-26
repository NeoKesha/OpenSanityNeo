#pragma once
#include <twin_base.h>

class PortsStruct {
public:
	unsigned int a;
	short b;
	short c;
	unsigned int d;
};

extern "C" PortsStruct PORTS_START[4];

class InputData : TwinBase {
public:
	HANDLE handle;
	int devicePtr[16];
	int val1;
	short val2;
	XINPUT_STATE state;
	XINPUT_STATE prevState;
	short val5;
	int port;
	int slot;
};

class InputController : TwinBase {
public:
	InputData* inputSourceList[4];
	unsigned int connectedDevicesMask;
	unsigned int flags;

	InputController();
	
	virtual void EmptyFunction1();
    virtual byte ProcessInsertionRemovals(float deltaTime);
    virtual void EmptyFunction2();
    virtual ~InputController();
    virtual void SendDataToControllersEx();
    virtual void ResetFlags();
};