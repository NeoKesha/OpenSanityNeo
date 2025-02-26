#pragma once
#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#include "xbox.h"
#include <map>

extern "C" int main(int argc, char** argv);

struct HackTextureReflection {
	void** vftable;
	void* dataPtr;
	int c;
	D3DFORMAT format;
	int e;
	int baseptr;
	int g;
	int byteLength;
	int i;
	int width;
	int height;
};

typedef struct HackTextureReflection HackTextureReflection;

struct D3DResource {
	int lock;
	void* data;
	int common;
};
typedef struct D3DResource D3DResource;

struct D3DTextureBase {
	D3DResource resource;
	D3DFORMAT format;
	int size;
};
typedef struct D3DTextureBase D3DTextureBase;

void HandleWinApiUpdates();
LRESULT WINAPI MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
void CreateGameWindow();
void DestroyGameWindow();

void RegisterTexture(IDirect3DTexture8* texture);

void UnregisterTexture(IDirect3DTexture8* texture);

IDirect3DTexture8* GetTextureInterface(D3DTextureBase* texture);

struct ApplicationSystem {
	IDirect3D8* D3D8;
	IDirect3DDevice8* D3DDevice;
	HWND MainWindow;
	WNDCLASSW MainWindowClass;
	void* d3dtexturevft;
	std::map<void*, IDirect3DTexture8*> textureRegistry;
};
typedef struct ApplicationSystem ApplicationSystem;
extern ApplicationSystem* _applicationSystem;
