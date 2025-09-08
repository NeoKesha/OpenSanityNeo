#include <XTL.h>
#include <stl.h>
#include "twin_main.h"
#include <graphics.h>
#include <string/twin_string.h>
#include "misc_global.h"
#include <render/render_system.h>
#include <time/time.h>
#include <input/input_controller.h>

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
void (__fastcall *UpdateGameState)(void*, void*, int) = reinterpret_cast<void(__fastcall*)(void*, void*, int)>(FUN_000CFE70);

class VideoPlayer : public TwinBase {
public:
	void** vftable;
	int flags;
	int a;
	int b;
	TwinString fmvName;
};
extern "C" VideoPlayer* VIDEO_PLAYER;

extern "C" void __stdcall FUN_000CFFD0();
void (__fastcall *GameContextDoStuff)(void*, void*, int) = reinterpret_cast<void (__fastcall*)(void*, void*, int)>(FUN_000CFFD0);

extern "C" void __fastcall SpyGameContextDoStuff(void* gameContext, void* reserved, int flags) {
	OutputDebugString("THE GAME CONTEXT IS A SPY!");
	static char buffer[256];
	sprintf(buffer, "GameContext: %p Trash: %x flags: %x", gameContext, reserved, flags);
	OutputDebugString(buffer);
	GameContextDoStuff(gameContext, reserved, flags);
}

extern "C" void __stdcall FUN_000D0070();
void (__fastcall *GameContextProcessCredits)(void*, void*, bool) = reinterpret_cast<void (__fastcall*)(void*, void*, bool)>(FUN_000D0070);

extern "C" void __stdcall FUN_000D0750();
void (__fastcall *GameContextEndFrameUpdate)(void*, void*, bool) = reinterpret_cast<void (__fastcall*)(void*, void*, bool)>(FUN_000D0750);

extern "C" Reflection reflection;
extern "C" void __cdecl disabled_main(int argc, char** argv) {
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
	void* gameContext = FUN_000CF930(argc, argv);
	//Mock construct
	RENDERER = (RenderSystem*)_AllocateMemory(sizeof(RENDERER));
	RenderSystemConstruct(RENDERER, 0, SCREEN_WIDTH, SCREEN_HEIGHT, IS_PAL);
	
	GLOBAL_CLOCK = new GlobalClock(FPS);
	INPUT_CONTROLLER = new InputController();
	int videoFlags = (int)XGetVideoFlags();
	if ((videoFlags & XC_VIDEO_FLAGS_WIDESCREEN) != 0) {
		IS_WIDESCREEN = true;
	} else {
		IS_WIDESCREEN = false;
	}
	
	SetupScreenAndCopyright(gameContext);
	static char buffer[256];
	while(GameState != 5) {
		DirectSoundDoWork();
		VideoPlayer* videoPlayer = VIDEO_PLAYER;
		void* bits = RegisterScreenSurfaces();
		int foo = ((int)bits) >> 8;
		int flags = 0;
		
		if ((videoPlayer == 0) || ((videoPlayer->flags & 0xf000) != 0x2000)) {
			flags = foo << 8;
		} else {
			flags = (foo << 8) | 0x01;
		}
		UpdateGameState(gameContext, 0, flags);
		
		if ((videoPlayer == (VideoPlayer *)0x0) || (flags = videoPlayer->flags & 0xf000, flags != 0x2000)) {
			flags = flags & 0xffffff00;
		} else {
			flags = 0x2001;
		}
		GameContextDoStuff(gameContext, 0, flags);
		
		bool videoPlayerIsUp;
		if ((videoPlayer == 0) || ((videoPlayer->flags & 0xf000) != 0x2000)) {
			videoPlayerIsUp = false;
		} else {
			videoPlayerIsUp = true;
		}
		GameContextProcessCredits(gameContext, 0, videoPlayerIsUp);
		
		bool bVar2;
		if ((videoPlayer == 0) || ((videoPlayer->flags & 0xf000) != 0x2000)) {
			bVar2 = false;
		}
		else {
			bVar2 = true;
		}
		GameContextEndFrameUpdate(gameContext, 0, bVar2);
		ReleaseScreenSurfaces();
	}
	
	ReleaseDSound(&DS_DEVICE);
	delete INPUT_CONTROLLER;
	delete GLOBAL_CLOCK;
	//delete RENDERER;
	//delete gameContext;
}

extern "C" void __cdecl DoSoundsStuff(bool flag, void* ptr) {
	
}

extern "C" void __cdecl DoMemoryTasks(bool flag) {
	
}

