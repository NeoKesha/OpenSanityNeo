#include <XTL.h>
#include <stl.h>
#include <xgraphics.h>
#include "twin_base.h"
#include "graphics.h"
#include <fun/fun.h>

extern "C" void __cdecl InitD3D() {
	D3DPRESENT_PARAMETERS params;
	ZeroMemory(&params, sizeof(params));
	params.BackBufferWidth = 640;
	params.BackBufferHeight = 480;
	params.BackBufferFormat = D3DFMT_LIN_X8R8G8B8;
	params.BackBufferCount = 2;
	params.EnableAutoDepthStencil = true;
	params.AutoDepthStencilFormat = D3DFMT_D24S8;
	params.SwapEffect = D3DSWAPEFFECT_DISCARD;
	params.FullScreen_PresentationInterval = D3DPRESENT_INTERVAL_DEFAULT;
	
	int videoFlags = XGetVideoFlags();
	if ((videoFlags & XC_VIDEO_FLAGS_HDTV_480p) != 0) {
		params.Flags = params.Flags | D3DPRESENTFLAG_PROGRESSIVE;
	}
	if ((videoFlags & XC_VIDEO_FLAGS_WIDESCREEN) != 0) {
		params.Flags = params.Flags | D3DPRESENTFLAG_WIDESCREEN ;
	}
	
	Direct3D8 = Direct3DCreate8(0);
	if (Direct3D8 != 0) {
		D3DDISPLAYMODE displayMode;
		int modes = Direct3D_GetAdapterModeCount(D3DADAPTER_DEFAULT);
		for (int i = 0; i < modes; ++i) {
			Direct3D_EnumAdapterModes(D3DADAPTER_DEFAULT, i, &displayMode);
		}
		
		Direct3D_SetPushBufferSize(0x100000, 0x20000);
		
		int fps = 50;
		int videoStandard = XGetVideoStandard();
		if (videoStandard == XC_VIDEO_STANDARD_NTSC_J || videoStandard == XC_VIDEO_STANDARD_NTSC_M) {
			fps = 60;
		}
		if (videoStandard == XC_VIDEO_STANDARD_PAL_I && (videoFlags & XC_VIDEO_FLAGS_PAL_60Hz != 0)) {
			fps = 60;
		}
		FixedDeltaTime = 1.0f / (float)i;
		FPS = i;
		params.FullScreen_RefreshRateInHz = fps;
		HRESULT result = Direct3D_CreateDevice(D3DADAPTER_DEFAULT,D3DDEVTYPE_HAL,0,D3DCREATE_HARDWARE_VERTEXPROCESSING,&params,&D3D_Device);
		if (result == S_OK) {
			D3D_Device2 = D3D_Device;
			D3DDevice_SetRenderState_ZEnable(true);
			D3D__DirtyFlags = D3D__DirtyFlags | 0x1200;
			D3D__DirtyFlags = D3D__DirtyFlags | 0x80f;
			D3DDevice_SetRenderState_FillMode(D3DFILL_SOLID);
			D3DDevice_SetRenderState_CullMode(D3DCULL_NONE);
			D3DDevice_SetRenderState_StencilCullEnable(true);
			D3DDevice_SetRenderState_StencilCullEnable(false);
			
			//Crash Twinsanity texture pipeline
			//Stage 1: RGB(Texture * Diffuse) + A(Texture * Diffuse) = Temp
			//Stage 2: RGB(Temp) + A(Temp) = Current
			//Stage 3: RGB(0) + A(Temp) = Temp
			//Stage 4: RGB(Temp) + A(Temp) = Current
			D3D__TextureState[0][D3DTSS_ADDRESSU] = D3DTADDRESS_WRAP;
			D3D__TextureState[0][D3DTSS_ADDRESSV] = D3DTADDRESS_WRAP;
			D3D__TextureState[0][D3DTSS_MAGFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[0][D3DTSS_MINFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[0][D3DTSS_MIPFILTER] = D3DTEXF_NONE;
			D3D__TextureState[0][D3DTSS_ALPHAKILL] = D3DTALPHAKILL_ENABLE;
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_DIFFUSE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TEXTURE;
			D3D__TextureState[0][D3DTSS_ALPHAOP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_ALPHAARG1] = D3DTA_DIFFUSE;
			D3D__TextureState[0][D3DTSS_ALPHAARG2] = D3DTA_TEXTURE;
			D3D__TextureState[0][D3DTSS_RESULTARG] = D3DTA_TEMP;
			
			D3D__TextureState[1][D3DTSS_ADDRESSU] = D3DTADDRESS_CLAMP;
			D3D__TextureState[1][D3DTSS_ADDRESSV] = D3DTADDRESS_WRAP;
			D3D__TextureState[1][D3DTSS_MAGFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[1][D3DTSS_MINFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[1][D3DTSS_MIPFILTER] = D3DTEXF_NONE;
			D3D__TextureState[1][D3DTSS_ALPHAKILL] = D3DTALPHAKILL_DISABLE;
			D3D__TextureState[1][D3DTSS_COLOROP] = D3DTOP_SELECTARG2;
			D3D__TextureState[1][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[1][D3DTSS_COLORARG2] = D3DTA_TEMP;
			D3D__TextureState[1][D3DTSS_ALPHAOP] = D3DTOP_SELECTARG2;
			D3D__TextureState[1][D3DTSS_ALPHAARG1] = D3DTA_TEXTURE;
			D3D__TextureState[1][D3DTSS_ALPHAARG2] = D3DTA_TEMP;
			D3D__TextureState[1][D3DTSS_RESULTARG] = D3DTA_CURRENT;
			
			D3D__TextureState[2][D3DTSS_ADDRESSU] = D3DTADDRESS_CLAMP;
			D3D__TextureState[2][D3DTSS_ADDRESSV] = D3DTADDRESS_CLAMP;
			D3D__TextureState[2][D3DTSS_MAGFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[2][D3DTSS_MINFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[2][D3DTSS_MIPFILTER] = D3DTEXF_NONE;
			D3D__TextureState[2][D3DTSS_ALPHAKILL] = D3DTALPHAKILL_DISABLE;
			D3D__TextureState[2][D3DTSS_COLOROP] = D3DTOP_DISABLE;
			D3D__TextureState[2][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[2][D3DTSS_COLORARG2] = D3DTA_TEMP;
			D3D__TextureState[2][D3DTSS_ALPHAOP] = D3DTOP_SELECTARG2;
			D3D__TextureState[2][D3DTSS_ALPHAARG1] = D3DTA_TEXTURE;
			D3D__TextureState[2][D3DTSS_ALPHAARG2] = D3DTA_TEMP;
			D3D__TextureState[2][D3DTSS_RESULTARG] = D3DTA_TEMP;
			
			D3D__TextureState[3][D3DTSS_ADDRESSU] = D3DTADDRESS_CLAMP;
			D3D__TextureState[3][D3DTSS_ADDRESSV] = D3DTADDRESS_CLAMP;
			D3D__TextureState[3][D3DTSS_MAGFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[3][D3DTSS_MINFILTER] = D3DTEXF_LINEAR;
			D3D__TextureState[3][D3DTSS_MIPFILTER] = D3DTEXF_NONE;
			D3D__TextureState[3][D3DTSS_ALPHAKILL] = D3DTALPHAKILL_DISABLE;
			D3D__TextureState[3][D3DTSS_COLOROP] = D3DTOP_SELECTARG2;
			D3D__TextureState[3][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[3][D3DTSS_COLORARG2] = D3DTA_TEMP;
			D3D__TextureState[3][D3DTSS_ALPHAOP] = D3DTOP_SELECTARG2;
			D3D__TextureState[3][D3DTSS_ALPHAARG1] = D3DTA_TEXTURE;
			D3D__TextureState[3][D3DTSS_ALPHAARG2] = D3DTA_TEMP;
			D3D__TextureState[3][D3DTSS_RESULTARG] = D3DTA_CURRENT;
			
			
			D3DDevice_SetPixelShader(0);
			D3DDevice_SetShaderConstantMode(0);
			D3DDevice_SetRenderState_TextureFactor(0xFF000000);
			D3DGAMMARAMP gammaRamp;
			for (int i = 0; i < 256; ++i) {
				gammaRamp.red[i] = i;
				gammaRamp.green[i] = i;
				gammaRamp.blue[i] = i;
			}
			
			float negOne = -1.0f;
			D3DDevice_SetGammaRamp(D3DSGR_IMMEDIATE,&gammaRamp);
			D3D__RenderState[D3DRS_LIGHTING] = false;
			D3DDevice_SetRenderState_Simple(0x409f8,D3DSWATH_8);
			D3D__RenderState[D3DRS_SWATHWIDTH] = D3DSWATH_8;
			D3DDevice_SetRenderState_Simple(0x40388, -1.0);
			D3D__RenderState[D3DRS_POLYGONOFFSETZOFFSET] = *(DWORD*)&negOne;
			D3DDevice_SetRenderState_Simple(0x40384,-1.0);
			D3D__RenderState[D3DRS_POLYGONOFFSETZSLOPESCALE] = *(DWORD*)&negOne;
			D3DDevice_SetRenderState_Simple(0x40344,D3DBLEND_SRCALPHA);
			D3D__RenderState[D3DRS_SRCBLEND] = D3DBLEND_SRCALPHA;
			D3DDevice_SetRenderState_Simple(0x40348,D3DBLEND_INVSRCALPHA);
			D3D__RenderState[D3DRS_DESTBLEND] = D3DBLEND_INVSRCALPHA;
			D3DDevice_SetRenderState_Simple(0x40300,false);
			D3D__RenderState[D3DRS_ALPHATESTENABLE] = false;
			D3DDevice_SetRenderState_Simple(0x40340,0xff);
			D3D__RenderState[D3DRS_ALPHAREF] = 0xff;
			D3DDevice_SetRenderState_Simple(0x4033c,D3DCMP_GREATEREQUAL);
			D3D__RenderState[D3DRS_ALPHAFUNC] = D3DCMP_GREATEREQUAL;
			D3DDevice_SetRenderState_Simple(0x40364,D3DCMP_ALWAYS);
			D3D__RenderState[D3DRS_STENCILFUNC] = D3DCMP_ALWAYS;
			D3DDevice_SetRenderState_Simple(0x40368,0x40);
			D3D__RenderState[D3DRS_STENCILREF] = 0x40;
			D3DDevice_SetRenderState_Simple(0x40378,D3DSTENCILOP_REPLACE);
			D3D__RenderState[D3DRS_STENCILPASS] = D3DSTENCILOP_REPLACE;
			D3DDevice_SetRenderState_Simple(0x40304,false);
			D3D__RenderState[D3DRS_ALPHABLENDENABLE] = false;
		}
	}
}

extern "C" void* __cdecl RegisterScreenSurfaces() {
	RenderSurface = D3DDevice_GetRenderTarget2();
	StencilSurface = D3DDevice_GetDepthStencilSurface2();
	
#ifdef ENABLE_FUN
	InitFun();
	UpdateFun();
#endif
	
	return ResetAndRegisterRenderTarget();
}

extern "C" void* __cdecl ResetAndRegisterRenderTarget() {
	D3DTexture *pDVar1;
	D3DLOCKED_RECT rect;

	D3DSurface_LockRect(RenderSurface, &rect, 0, D3DLOCK_NOOVERWRITE | D3DLOCK_READONLY);
	ZeroMemory(ScreenTexture1, sizeof(ScreenTexture1));
	XGSetTextureHeader(640, 480, 1, 0, D3DFMT_LIN_X8R8G8B8, 0, ScreenTexture1, 0, 0xa00);
	D3DResource_Register(ScreenTexture1, rect.pBits);
	return rect.pBits;
}

extern "C" void __cdecl InitFrameBuffer() {
	D3DTexture *pDVar1;

	ScreenTexture1 = (D3DTexture *)_AllocateMemory(0x14);
	ScreenTexture2 = (D3DTexture *)_AllocateMemory(0x14);
	ZeroMemory(ScreenTexture1, sizeof(ScreenTexture1));
	ZeroMemory(ScreenTexture2, sizeof(ScreenTexture2));
	size_t length = XGSetTextureHeader(320, 240, 1, 0, D3DFMT_LIN_X8R8G8B8, 0, ScreenTexture2, 0, 0x500);
	void* buffer = D3D_AllocContiguousMemory(length, 0x80);
	D3DResource_Register(ScreenTexture2, buffer);
	RENDER_TARGET = D3DTexture_GetSurfaceLevel2(ScreenTexture2, 0);
	return;
}

extern "C" void __cdecl ReleaseScreenSurfaces(void) {
	D3DResource_Release(RenderSurface);
	D3DResource_Release(StencilSurface);
	return;
}