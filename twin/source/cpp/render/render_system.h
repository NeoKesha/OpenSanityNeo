#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include "render_system_abstract.h"

extern "C" int RENDER_VEC_X;
extern "C" int RENDER_VEC_Y;

class Renderer; 
class UnkTimePack;

class RenderSystem : public RenderSystemAbstract {
public:
	RenderSystem();
	virtual ~RenderSystem();

	virtual int UnkFunc(int a, int b);
	virtual void UpdateShadersClock(UnkTimePack* clock);
	virtual void EmptyFunction1();
	virtual void EmptyFunction2();
	virtual void ResetGradient();
	virtual void SetXY(Vector2* vec);
	virtual void SwapBuffer();
	virtual void EmptyFunction5(int a);
	virtual void EmptyFunction6(int a);
	virtual void EmptyFunction7(int a,int b,int c);
	//Child functions
	virtual Renderer* CreateFontRenderer();
	virtual void EmptyFunction8(int a);
	virtual void EmptyFunction9();
	virtual void EmptyFunction10();
};

