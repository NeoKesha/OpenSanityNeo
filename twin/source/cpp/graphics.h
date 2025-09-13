#pragma once

//Globals
extern "C" float FixedDeltaTime;
extern "C" int FPS;
extern "C" IDirect3DDevice8* D3D_Device;
extern "C" IDirect3DDevice8* D3D_Device2;
extern "C" IDirect3D8* Direct3D8;
extern "C" D3DSurface* RenderSurface;
extern "C" D3DSurface* StencilSurface;
extern "C" D3DSurface* RENDER_TARGET;
extern "C" D3DTexture* ScreenTexture1;
extern "C" D3DTexture* ScreenTexture2;

//Functions
extern "C" void  __cdecl InitD3D();
extern "C" void  __cdecl InitFrameBuffer();
extern "C" void* __cdecl RegisterScreenSurfaces();
extern "C" void* __cdecl ResetAndRegisterRenderTarget();
extern "C" void  __cdecl ReleaseScreenSurfaces();
extern "C" void  __stdcall ClearViewport(bool clearTargetAndStencil, bool clearZbuffer);