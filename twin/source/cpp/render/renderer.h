#pragma once
#include <twin_base.h>
#include <twin_math.h>

class RenderSystem;
class ScreenInfoExt;

class FontCollection : TwinBase {
public:
	void** fonts; //TODO: Define AutoClass58
	int count;
	int capacity;
	int unk;
};

class Renderer : TwinBase {
public:	
	RenderSystem* system;
	void* ac25ptr; //TODO: define AutoClass25
	ScreenInfoExt* screenInfo;
	int flags;
	D3DCOLOR color;
	int unk1;
	FontCollection fontCollection;
	void* font; //TODO: Define Font
	Vector2 origin;
	int unk2;
	int unk3;
	int unk4;
	int unk5;
	int unk6;
	int unk7;
	int unk8;
	int unk9;
	int unk10;
	int unk11;
	int unk12;
	int unk13;
	int unk14;
	
	Renderer();
	virtual ~Renderer();
};