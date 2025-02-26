#include "main.h"

ApplicationSystem* _applicationSystem;
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	_applicationSystem = new ApplicationSystem();
	
	CreateGameWindow();
	main(0, 0);
	DestroyGameWindow();
};

void HandleWinApiUpdates() {
	UpdateWindow(_applicationSystem->MainWindow);
	MSG msg;
	while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
}

LRESULT WINAPI MsgProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	//WIN API CRAP
	switch (msg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;

	case WM_PAINT:
		ValidateRect(hWnd, NULL);
		return 0;
	}

	return DefWindowProc(hWnd, msg, wParam, lParam);
}

void CreateGameWindow() {
	// Register the window class.
	const wchar_t CLASS_NAME[] = L"Crash Twinsanity";

	ZeroMemory(&(_applicationSystem->MainWindowClass), sizeof(_applicationSystem->MainWindowClass));
	_applicationSystem->MainWindowClass.lpfnWndProc = MsgProc;
	_applicationSystem->MainWindowClass.hInstance = GetModuleHandle(NULL);
	_applicationSystem->MainWindowClass.lpszClassName = CLASS_NAME;
	RegisterClass(&(_applicationSystem->MainWindowClass));

	_applicationSystem->MainWindow = CreateWindowEx(0, CLASS_NAME, L"Crash Twinsanity", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 640, 480, NULL, NULL, GetModuleHandle(NULL), NULL);
	ShowWindow(_applicationSystem->MainWindow, SW_SHOW);
}

void DestroyGameWindow() {
	UnregisterClass(L"Crash Twinsanity", GetModuleHandle(NULL));
}

void RegisterTexture(IDirect3DTexture8* texture) {
	_applicationSystem->textureRegistry.insert(std::make_pair(((HackTextureReflection*)texture)->dataPtr, texture));
}

void UnregisterTexture(IDirect3DTexture8* texture) {
	if (_applicationSystem->textureRegistry.find(((HackTextureReflection*)texture)->dataPtr) != _applicationSystem->textureRegistry.end()) {
		_applicationSystem->textureRegistry.erase(((HackTextureReflection*)texture)->dataPtr);
	}
}

IDirect3DTexture8* GetTextureInterface(D3DTextureBase* texture) {
	return _applicationSystem->textureRegistry[texture->resource.data];
}