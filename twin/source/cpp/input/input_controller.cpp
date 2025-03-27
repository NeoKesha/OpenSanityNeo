#include <XTL.h>
#include <stl.h>
#include "input_controller.h"
#include "math.h"

InputController::InputController() {
	this->connectedDevicesMask = 0;
	this->flags = this->flags & 0xfffffffe | 2;
	
	XDEVICE_PREALLOC_TYPE preallocType;
	preallocType.DeviceType = XDEVICE_TYPE_GAMEPAD;
	preallocType.dwPreallocCount = 4;
	XInitDevices(1, &preallocType);
	for (int i = 0; i < 4; ++i) {
		InputData* inputData = (InputData*)AllocateMemory(0x80); //TODO: proper new + constructor call
		if (inputData != 0) {
			ZeroMemory(inputData, sizeof(InputData));
			inputData->handle = XInputOpen(XDEVICE_TYPE_GAMEPAD, i, 0, 0);
			inputData->port = i;
		}
		this->inputSourceList[i] = inputData;
		PORTS_START[i].leftMotor &= 0xffc00020;
		PORTS_START[i].rightMotor = 0;
	}
	this->connectedDevicesMask = XGetDevices(XDEVICE_TYPE_GAMEPAD);
	this->flags &= 0xfffffffd;
}

void InputController::EmptyFunction1() {
	
}

byte InputController::UpdateControllerState(float deltaTime) {
	DWORD insertions = 0;
	DWORD removals = 0;
	if (XGetDeviceChanges(XDEVICE_TYPE_GAMEPAD, &insertions, &removals)) {
		this->ReconnectInputData(insertions, removals);
		this->connectedDevicesMask = ~removals & this->connectedDevicesMask | insertions;
	}
	
	byte flag = 0;
	for (int i = 0; i < 4; ++i) {
		if (this->inputSourceList[i]->handle != 0) {
			memcpy(&(this->inputSourceList[i]->prevState), &(this->inputSourceList[i]->state), sizeof(XINPUT_STATE));
			XInputGetState(this->inputSourceList[i]->handle,&this->inputSourceList[i]->state);
		}
		
		flag = this->inputSourceList[i]->handle == 0;
		if (((PORTS_START[i].leftMotor & 0x1f) != 0) && ((this->flags & 1) == 0)) {
			if (PORTS_START[i].time < 0.0f) {
				PORTS_START[i].rightMotor = 0;
				PORTS_START[i].leftMotor = PORTS_START[i].leftMotor & 0xffc00020 | 0x20;
			} else {
				PORTS_START[i].time -= deltaTime;
			}
			
			if (((PORTS_START[i].leftMotor & 0x20) != 0) & ((this->flags & 2) != 0)) {
				this->inputSourceList[i]->SetRumble(PORTS_START[i].leftMotor >> 6, PORTS_START[i].rightMotor);
				PORTS_START[i].leftMotor &= 0xffffffdf;
			}
		}
	}
	return flag;
}

void InputController::EmptyFunction2() {
	
}

InputController::~InputController() {
	AssertNonImplemented
}

void InputController::StopRumbleEx() {
	this->StopRumble();
	this->flags |= 1;
}

void InputController::StopRumble() {
	for (int i = 0; i < 4; ++i) {
		if (this->inputSourceList[i] != 0 && this->inputSourceList[i]->handle != 0 && (PORTS_START[i].leftMotor & 0x1f) != 0 && this->inputSourceList[i]->feedback.Header.dwStatus != ERROR_IO_PENDING) {
			this->inputSourceList[i]->feedback.Rumble.wLeftMotorSpeed = 0;
			this->inputSourceList[i]->feedback.Rumble.wRightMotorSpeed = 0;
			XInputSetState(this->inputSourceList[i]->handle,&(this->inputSourceList[i]->feedback));
		}
	}
}

void InputController::ResetFlags() {
	this->flags &= 0xfffffffe;
}

void InputController::ReconnectInputData(unsigned int insertions,unsigned int removals) {
	for (int i = 0; i < 4; ++i) {
		unsigned int bit = 1 << ((byte)i & 0x1f);
		if ((removals & bit) && this->inputSourceList[i] != 0) {
			this->inputSourceList[i]->Disconnect();
		}
		if (insertions & bit) {
			ZeroMemory(this->inputSourceList[i], sizeof(InputData));
			this->inputSourceList[i]->handle = XInputOpen(XDEVICE_TYPE_GAMEPAD, i, XDEVICE_NO_SLOT, 0);
			this->inputSourceList[i]->port = i;
		}
	}
}

void InputData::Disconnect() {
	if (this->handle != 0) {
		XInputClose(this->handle);
		ZeroMemory(this, sizeof(InputData));
	}
	this->handle = 0; //Yes, i know
	this->slot = 1;
}

void InputData::SetRumble(short leftMotor, short rightMotor) {
	if (this->handle != 0 && this->feedback.Header.dwStatus != ERROR_IO_PENDING) {
		this->feedback.Rumble.wLeftMotorSpeed = leftMotor;
		this->feedback.Rumble.wRightMotorSpeed = rightMotor;
		XInputSetState(this->handle,&(this->feedback));
	}
}