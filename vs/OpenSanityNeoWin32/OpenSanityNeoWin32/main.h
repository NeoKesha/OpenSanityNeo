#pragma once
#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#include "xbox.h"

extern "C" int main(int argc, char** argv);

void HandleWinApiUpdates();
LRESULT WINAPI MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
void CreateGameWindow();
void DestroyGameWindow();

struct ApplicationSystem {
	IDirect3D8* D3D8;
	IDirect3DDevice8* D3DDevice;
	HWND MainWindow;
	WNDCLASSW MainWindowClass;
};
typedef struct ApplicationSystem ApplicationSystem;
extern ApplicationSystem* _applicationSystem;