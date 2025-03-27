#pragma once
#include <twin_base.h>

class PortsStruct {
public:
	unsigned int leftMotor;
	short rightMotor;
	short c;
	float time;
};

extern "C" PortsStruct PORTS_START[4];

class InputData : TwinBase {
public:
	HANDLE handle;
	XINPUT_FEEDBACK feedback;
	XINPUT_STATE state;
	XINPUT_STATE prevState;
	short val5;
	int port;
	int slot;
	
	void Disconnect();
	void SetRumble(short leftMotor, short rightMotor);
};

class InputController : TwinBase {
public:
	InputData* inputSourceList[4];
	unsigned int connectedDevicesMask;
	unsigned int flags;

	InputController();
	
	virtual void EmptyFunction1();
    virtual byte UpdateControllerState(float deltaTime);
    virtual void EmptyFunction2();
    virtual ~InputController();
    virtual void StopRumbleEx();
    virtual void ResetFlags();
	
	void ReconnectInputData(unsigned int insertions,unsigned int removals);
	void StopRumble();
};