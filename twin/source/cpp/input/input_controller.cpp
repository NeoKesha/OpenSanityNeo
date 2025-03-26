#include <XTL.h>
#include <stl.h>
#include "input_controller.h"

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
		PORTS_START[i].a &= 0xffc00020;
		PORTS_START[i].b = 0;
	}
	this->connectedDevicesMask = XGetDevices(XDEVICE_TYPE_GAMEPAD);
	this->flags &= 0xfffffffd;
}

void InputController::EmptyFunction1() {
	
}

byte InputController::ProcessInsertionRemovals(float deltaTime) {
	DWORD insertions = 0;
	DWORD removals = 0;
	if (XGetDeviceChanges(XDEVICE_TYPE_GAMEPAD, &insertions, &removals)) {
		this->connectedDevicesMask = ~removals & this->connectedDevicesMask | insertions;
		

	}
	
	for (int i = 0; i < 4; ++i) {
		if (this->inputSourceList[i]->handle != 0) {
			memcpy(&(this->inputSourceList[i]->prevState), &(this->inputSourceList[i]->state), sizeof(XINPUT_STATE));
			XInputGetState(this->inputSourceList[i]->handle,&this->inputSourceList[i]->state);
		}
	}
	return 0;
}

void InputController::EmptyFunction2() {
	
}

InputController::~InputController() {
	AssertNonImplemented
}

void InputController::SendDataToControllersEx() {
	//AssertNonImplemented
}

void InputController::ResetFlags() {
	this->flags &= 0xfffffffe;
}