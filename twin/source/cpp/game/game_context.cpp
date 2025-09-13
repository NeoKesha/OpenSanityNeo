#include <XTL.h>
#include <stl.h>
#include "game_context.h"
#include <time/time.h>
#include <graphics.h>
#include <render/render_system.h>

GameContext::GameContext() {
	AssertNonImplemented
}

GameContext::~GameContext() {
	AssertNonImplemented
}


extern "C" void __cdecl FUN_000D0460(int);
extern "C" void __cdecl DoMemoryTasks(int isEndFrameUpdate) {
	FUN_000D0460(isEndFrameUpdate);
}

extern "C" void __cdecl FUN_00134060(int, LARGE_INTEGER*);
extern "C" void __cdecl DoSoundStuff(int flag, LARGE_INTEGER* state) {
	FUN_00134060(flag, state);
}

extern "C" void __stdcall FUN_00021A80();
void (__fastcall *_ProgressUI2)(GameContext*,void*,int) = reinterpret_cast<void (__fastcall*)(GameContext*,void*,int)>(FUN_00021A80);
extern "C" void __fastcall ProgressUI2(GameContext* ctx, int flag) {
	_ProgressUI2(ctx, 0, flag);
}

void VideoPlayerStub1(void* ptr) {
	
}

void GameContext::EndFrameUpdate(int flag) {
	if ((flag & 0xFFFFFF00) != 0) {
		DoSoundStuff((flag & 0xFFFFFF00) | (GameState == 3), &SOME_STATE);
	}
	ProgressUI2(this, flag);
	if (RENDERER != 0) {
		RENDERER->ResetGradient();
	}
	if ((flag & 0xFFFFFF00) != 0) {
		DoMemoryTasks(true);
	}
	if (RENDERER != 0) {
		if ((flag & 0xFFFFFF00) == 0) {
			VideoPlayerStub1(VIDEO_PLAYER);
		} else {
			if (VideoPlayerTerminated != 0) {
				ClearViewport(true, true);
				VideoPlayerTerminated = 0;
			}
			RENDERER->SwapBuffer();
		}
	}
	if (GLOBAL_CLOCK != 0) {
		TickFrameNumber();
	}
}