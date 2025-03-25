#pragma once
#include <twin_base.h>

class Renderer;

class RenderStorage : TwinBase {
public:
	RenderStorage();
	virtual ~RenderStorage();
	
	short count;
	short expansion;
	short capacity;
	short lastIndex;
	short* indexArray;
	Renderer** rendererArray;
};