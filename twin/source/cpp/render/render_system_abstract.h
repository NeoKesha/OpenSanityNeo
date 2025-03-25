#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include "render_storage.h"

class UnkTimePack;

class RenderSystemAbstract : TwinBase {
public:
	RenderStorage storage;
	Vector2 vec;

	RenderSystemAbstract();
	virtual ~RenderSystemAbstract();

	virtual int UnkFunc(int a, int b) = 0;
	virtual void UnkMethod1();
	virtual void UpdateShadersClock(UnkTimePack* clock) = 0;
	virtual void EmptyFunction1() = 0;
	virtual void EmptyFunction2() = 0;
	virtual void UnkMethod2();
	virtual void Render();
	virtual void EmptyFunction3(int a);
	virtual void ResetGradient();
	virtual void UnkMethod5();
	virtual void SetXY(Vector2* vec);
	virtual void EmptyFunction4(int a);
	virtual void SwapBuffer() = 0;
	virtual void EmptyFunction5(int a) = 0;
	virtual void EmptyFunction6(int a) = 0;
	virtual void EmptyFunction7(int a,int b,int c) = 0;
};
