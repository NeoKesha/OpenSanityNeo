#include <XTL.h>
#include <stl.h>
#include "render_system.h"
#include <time/time.h>

RenderSystem::RenderSystem() {
	AssertNonImplemented
}

RenderSystem::~RenderSystem() {
	AssertNonImplemented
}


int RenderSystem::UnkFunc(int a, int b) {
	return 0;
}

void RenderSystem::UpdateShadersClock(UnkTimePack* clock) {
	AssertNonImplemented
	return;
}

void RenderSystem::EmptyFunction1() {
	return;
}

void RenderSystem::EmptyFunction2() {
	return;
}

void RenderSystem::ResetGradient() {
	AssertNonImplemented
	return;
}

void RenderSystem::SetXY(Vector2* vec) {
	if (-1.0f < vec->x || vec->x == -1.0f) {
		if (vec->x <= 1.0f) {
			this->vec.x = vec->x;
		}
		else {
			this->vec.x = 1.0f;
		}
	}
	else {
		this->vec.x = -1.0f;
	}
	if (-1.0f < vec->y || vec->y == -1.0f) {
		if (vec->y <= 1.0f) {
			this->vec.y = vec->y;
		}
		else {
			this->vec.y = 1.0f;
		}
	}
	else {
		this->vec.y = -1.0f;
	}
	RENDER_VEC_X = (int)(this->vec.x * 256.0f);
	RENDER_VEC_Y = (int)(this->vec.y * 256.0f);
}

void RenderSystem::SwapBuffer() {
	D3DDevice_Swap(D3DSWAP_DEFAULT);
}

void RenderSystem::EmptyFunction5(int a) {
	return;
}

void RenderSystem::EmptyFunction6(int a) {
	return;
}

void RenderSystem::EmptyFunction7(int a,int b,int c) {
	return;
}

Renderer* RenderSystem::CreateFontRenderer() {
	AssertNonImplemented
	return 0;
}

void RenderSystem::EmptyFunction8(int a) {
	return;
}

void RenderSystem::EmptyFunction9() {
	return;
}

void RenderSystem::EmptyFunction10() {
	return;
}