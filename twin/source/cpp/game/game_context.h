#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include <misc_global.h>
#include <string/twin_string.h>
#include <input/input_controller.h>

class VideoPlayer : public TwinBase {
public:
	void** vftable;
	int flags;
	int a;
	int b;
	TwinString fmvName;
};

class RenderSystem;
class GlobalClock;
extern "C" RenderSystem* RENDERER;
extern "C" GlobalClock* GLOBAL_CLOCK;
extern "C" int VideoPlayerTerminated;
extern "C" int GameState;
extern "C" VideoPlayer* VIDEO_PLAYER;

class GameResources : public TwinBase {
	unsigned char padding[0x44]; //TODO: Placeholder
};

class GameResourceManager : public TwinBase {
	unsigned char padding[0x28]; //TODO: Placeholder
};

class GameContextBase : public TwinBase {
public:
	int profile;
	float unkField0;
	Color color;
	TwinString restrict;
};

class GameContext : public GameContextBase {
public:
	
	GameContext();
	virtual ~GameContext();
	void EndFrameUpdate(int flag);

	int flags;
	TwinString startupLevel;
	StringCollection stringCollection;
	int unkField8;
	TwinString batch;
	GameResources gameResources;
	void* builder1;
	void* builder2;
	void* actionFactory;
	void* perceptFactory;
	void* builder5;
	void* builder6;
	void* sceneryFactory;
	GameResourceManager resourceManager;
	void* cameraFactory;
	void* builder9;
	void* builder10;
	int time;
	InputData* inputHandle1;
	InputData* inputHandle2;
	void* defaultRm;
	void* gameController;
	int ai;
	int render;
};