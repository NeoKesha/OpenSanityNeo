#pragma once
#include <twin_base.h>
#include <twin_math.h>

class RenderSystem;

class ScreenInfo : TwinBase {
	RenderSystem* system;
	int unk1;
	int unk2;
	int width2;
	int height2;
	D3DCOLOR color;
	int width1;
	int height1;
};

class ScreenInfoExt : TwinBase {
	ScreenInfo info;
	Matrix4 matrix;
	Vector4 vector;
};