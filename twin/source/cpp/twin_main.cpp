#include <XTL.h>
#include <stl.h>
#include "twin_main.h"
#include <game/game_context.h>
#include <graphics.h>
#include <time/time.h>

static char buffer[256];

class DSDevice {
	public:

	IDirectSound8* device;
	DSCAPS caps;
		DSDevice();
		virtual ~DSDevice();
};
extern "C" DSDevice DS_DEVICE;
extern "C" TwinString CdRomVolume;

extern "C" void __stdcall FUN_000C62A4();
extern "C" void __stdcall FUN_0010CBD0();

extern "C" void __stdcall FUN_0012DFB0();
void (__fastcall *InitDSound)(DSDevice*) = reinterpret_cast<void(__fastcall*)(DSDevice*)>(FUN_0012DFB0);

extern "C" void __stdcall FUN_0012F640();
extern "C" void __cdecl FUN_00205D40(int);
extern "C" void __stdcall FUN_00131ED0();

extern "C" char* PTR_s_English_0039eb4c;

extern "C" void* __cdecl FUN_000CF930(int, char**);
extern "C" void* __cdecl SpyFUN_000CF930(int argc, char** argv) {
	for (int i = 0; i < argc; ++i) {
		OutputDebugString(argv[i]);
	}
	
	return FUN_000CF930(argc, argv);
}

extern "C" RenderSystem* RENDERER;
extern "C" void __stdcall FUN_00115B50();
extern "C" int SCREEN_WIDTH;
extern "C" int SCREEN_HEIGHT;
extern "C" bool IS_PAL;
RenderSystem* (__fastcall *RenderSystemConstruct)(RenderSystem*, void*, int, int, bool) = reinterpret_cast<RenderSystem*(__fastcall*)(RenderSystem*, void*, int, int, bool)>(FUN_00115B50);
extern "C" int FPS;
extern "C" GlobalClock* GLOBAL_CLOCK;
extern "C" InputController* INPUT_CONTROLLER;
extern "C" bool IS_WIDESCREEN;

extern "C" void __stdcall FUN_000D0290();
void (__fastcall *SetupScreenAndCopyright)(void*) = reinterpret_cast<void(__fastcall*)(void*)>(FUN_000D0290);

extern "C" int GameState;


extern "C" __stdcall FUN_0012E030();
void (__fastcall *ReleaseDSound)(DSDevice*) = reinterpret_cast<void(__fastcall*)(DSDevice*)>(FUN_0012E030);

extern "C" __stdcall FUN_000CFE70();
void (__fastcall *_GameContextUpdateGameState)(void*, void*, int) = reinterpret_cast<void(__fastcall*)(void*, void*, int)>(FUN_000CFE70);
extern "C" void __fastcall GameContextUpdateGameState(void* gameContext, int flags) {
	_GameContextUpdateGameState(gameContext, 0, flags);
}

extern "C" void __stdcall FUN_000CFFD0();
void (__fastcall *_GameContextDoStuff)(void*, void*, int) = reinterpret_cast<void (__fastcall*)(void*, void*, int)>(FUN_000CFFD0);
extern "C" void __fastcall GameContextDoStuff(void* gameContext, int flags) {
	_GameContextDoStuff(gameContext, 0, flags);

}

extern "C" void __stdcall FUN_000D0070();
void (__fastcall *_GameContextProcessCredits)(void*, void*, bool) = reinterpret_cast<void (__fastcall*)(void*, void*, bool)>(FUN_000D0070);
extern "C" void __fastcall GameContextProcessCredits(void* gameContext, int flags) {
	_GameContextProcessCredits(gameContext, 0, flags);
}

extern "C" Reflection reflection;

inline int IsVideoPlayerUp(VideoPlayer* videoPlayer) {
	return (int)((videoPlayer != 0) && ((videoPlayer->flags & 0xf000) == 0x2000));
}
extern "C" int DAT_003ead50;
extern "C" void __cdecl dmain(int argc, char** argv) {
	FUN_000C62A4(); //cinit
	LAUNCH_DATA launchData;
	DWORD launchType;
	XGetLaunchInfo(&launchType, &launchData);
	PLD_FROM_DEBUGGER_CMDLINE data = (PLD_FROM_DEBUGGER_CMDLINE)&launchData;
	
	if (launchType == LDT_FROM_DEBUGGER_CMDLINE && data->szCmdLine[0] != 0) {
		//fill args
	}
	InitD3D();
	InitFrameBuffer();
	FUN_0010CBD0(); //InitShaders
	XSetFileCacheSize(0x20000);
	InitDSound(&DS_DEVICE);
	FUN_0012F640(); //InitSoundBuffer();
	
	CdRomVolume.Set("d:\\");
	TwinString::SetCdRomVolume(&CdRomVolume);

	FUN_00205D40(8);//CreateSectionRelatedStruct(8);
	FUN_00131ED0();//CreateSoundRelatedStruct();
	//EmptyFunction();
	IterateLanguages(5,&PTR_s_English_0039eb4c);
	
	//TODO: implement GameContext
	GameContext* gameContext = (GameContext*)SpyFUN_000CF930(argc, argv);
	//Mock construct
	RENDERER = (RenderSystem*)_AllocateMemory(sizeof(RENDERER));
	RenderSystemConstruct(RENDERER, 0, SCREEN_WIDTH, SCREEN_HEIGHT, IS_PAL);
	
	GLOBAL_CLOCK = new GlobalClock(FPS);
	INPUT_CONTROLLER = new InputController();
	IS_WIDESCREEN = (XGetVideoFlags() & XC_VIDEO_FLAGS_WIDESCREEN) != 0;
	
	SetupScreenAndCopyright(gameContext);
	while(GameState != 5) {
		DAT_003ead50 = 0;
		DirectSoundDoWork();
		int flags = (int)RegisterScreenSurfaces();
		GameContextUpdateGameState(gameContext, (flags & 0xFFFFFF00) | IsVideoPlayerUp(VIDEO_PLAYER));
		GameContextDoStuff(gameContext, (flags & 0xFFFFFF00) | IsVideoPlayerUp(VIDEO_PLAYER));
		GameContextProcessCredits(gameContext, (flags & 0xFFFFFF00) | IsVideoPlayerUp(VIDEO_PLAYER));
		gameContext->EndFrameUpdate((flags & 0xFFFFFF00) | IsVideoPlayerUp(VIDEO_PLAYER));
		ReleaseScreenSurfaces();
	}
	
	ReleaseDSound(&DS_DEVICE);
	delete INPUT_CONTROLLER;
	delete GLOBAL_CLOCK;
	//delete RENDERER;
	//delete gameContext;
}