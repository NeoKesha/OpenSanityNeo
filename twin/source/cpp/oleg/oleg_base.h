#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include <string/twin_string.h>

class Color {
public:
	unsigned char R;
	unsigned char G;
	unsigned char B;
	unsigned char A;
};

class OlegMask {
public:
	int high;
	int low;
};

class OlegModuleAbstract : TwinBase {
public:	
	OlegModuleAbstract();
	virtual ~OlegModuleAbstract();
	
	unsigned int flags;
	Vector2 vec1;
	int startTime;
	int fadeInLength;
	int fadeOutLength;
	float value;
	OlegModuleAbstract* next;
	//SplineA* spline;
	void* spline;
	int* ptr;
	Color col;
	Vector2 vec2;
};

class OlegBase : TwinBase {
public:
	OlegBase();
	virtual ~OlegBase();
	
	float a;
	int b;
	int c;
	OlegMask uiPresetMask[64];
	OlegModuleAbstract* modules[64];
};

class Oleg : public OlegBase {
public:
	unsigned char cnt1;
	unsigned char wumpaCnt;
	unsigned char cnt2;
	unsigned char cnt3;
	int screenFlags;
	
	int a;
	int b;
	int c;
	int deltaTime;
};

class OlegModuleA : public OlegModuleAbstract {
public:
	Color color1;
	Color color2;
	Color color3;
	Color color4;
	Vector2 array[8];
};

class OlegModuleAB : public OlegModuleA {
public:
	//UIElementImage* icons;
	void* icons;
};

class OlegModuleAC : public OlegModuleA {
public:
	//UIElementImage* icons;
	void* icons;
};

class OlegModuleAF : public OlegModuleA {
public:
	float a;
	//UIElementImage* image1;
	//UIElementImage* image2;
	//UIElementImage* image3;
	//UIElementImage* image4;
	void* image1;
	void* image2;
	void* image3;
	void* image4;
};

class OlegModuleAH : public OlegModuleA {
public:
	//UIElementImage* image;
	void* image;
	//ChunkDesc* chunkDesc;
	void* chunkDesc;
};

class OlegModuleAI : public OlegModuleA {
public:
	int a;
	int b;
};

class OlegModuleAIA : public OlegModuleAI {
public:
	int c;
};

class OlegModuleAIB : public OlegModuleAI {
public:
	int c;
	int d;
};

class OlegModuleB : public OlegModuleAbstract {
public:
	Vector2 array[10];
};

class OlegModuleIcon : public OlegModuleA {
public:
	//UIElementImage* icons;
	//UnkFamily20Base* ptr;
	void* icons;
	void* ptr;
	float array[11];
};

class OlegModuleLabelGeneric : public OlegModuleA {
public:
	//Font* font;
	void* font;
	int index;
	TwinString str;
};

class OlegModuleLabelPulsating : public OlegModuleA {
public:
	//Font* font;
	void* font;
	int index1;
	int index2;
};

class OlegModuleLabelSelectable : public OlegModuleA {
public:
	int a;
	//UnkFamily10Base* page1;
	void* page1;
	//UnkFamily10Base* page2;
	void* page2;
	//InputData* inputHandle;
	void* inputHandle;
	//InputObserver* inputObserver;
	void* inputObserver;
	//ColorMatrix* color;
	void* color;
	//UnkSfxCollection* sfxCollection;
	void* sfxCollection;
	int b;
	int c;
};

class OlegModuleMenuBubble : public OlegModuleA {
public:
	unsigned char cnt;
	unsigned char a;
	unsigned char index1;
	unsigned char b;
	int index2;
	//UIElementSimpleShapeA** imageArray;
	void** imageArray;
};