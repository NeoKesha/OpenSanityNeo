#pragma once
#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#include "xbox.h"
#include "main.h"

extern "C" ULONG __stdcall D3DDevice_AddRef();

extern "C" ULONG __stdcall D3DDevice_Release();

extern "C" void __stdcall D3DDevice_GetDirect3D(IDirect3D8** ppD3D8);

extern "C" void __stdcall D3DDevice_GetDeviceCaps(D3DCAPS8* pCaps);

extern "C" void __stdcall D3DDevice_GetDisplayMode(D3DDISPLAYMODE* pMode);

extern "C" void __stdcall D3DDevice_GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS* pParameters);

extern "C" HRESULT __stdcall D3DDevice_Reset(D3DPRESENT_PARAMETERS* pPresentationParameters);

extern "C" void __stdcall D3DDevice_GetRasterStatus(D3DRASTER_STATUS* pRasterStatus);

extern "C" void __stdcall D3DDevice_SetFlickerFilter(DWORD Filter);

extern "C" void __stdcall D3DDevice_SetSoftDisplayFilter(BOOL Enable);

extern "C" void __stdcall D3DDevice_GetGammaRamp(D3DGAMMARAMP* pRamp);

extern "C" void __stdcall D3DDevice_CopyRects(IDirect3DSurface8* pSourceSurface, const RECT* pSourceRectsArray, UINT cRects, IDirect3DSurface8* pDestinationSurface, const POINT* pDestPointsArray);

extern "C" void __stdcall D3DDevice_SetCopyRectsState(const D3DCOPYRECTSTATE* pCopyRectState, const D3DCOPYRECTROPSTATE* pCopyRectRopState);

extern "C" void __stdcall D3DDevice_GetCopyRectsState(D3DCOPYRECTSTATE* pCopyRectState, D3DCOPYRECTROPSTATE* pCopyRectRopState);

extern "C" void __stdcall D3DDevice_MultiplyTransform(D3DTRANSFORMSTATETYPE State, const D3DMATRIX* pMatrix);

extern "C" void __stdcall D3DDevice_SetViewport(const D3DVIEWPORT8* pViewport);

extern "C" void __stdcall D3DDevice_GetViewport(D3DVIEWPORT8* pViewport);

extern "C" void __stdcall D3DDevice_SetMaterial(const D3DMATERIAL8* pMaterial);

extern "C" void __stdcall D3DDevice_GetMaterial(D3DMATERIAL8* pMaterial);

extern "C" void __stdcall D3DDevice_SetBackMaterial(const D3DMATERIAL8* pMaterial);

extern "C" void __stdcall D3DDevice_GetBackMaterial(D3DMATERIAL8* pMaterial);

extern "C" HRESULT __stdcall D3DDevice_SetLight(DWORD Index, const D3DLIGHT8* pLight);

extern "C" void __stdcall D3DDevice_GetLight(DWORD Index, D3DLIGHT8* pLight);

extern "C" HRESULT __stdcall D3DDevice_LightEnable(DWORD Index, BOOL Enable);

extern "C" void __stdcall D3DDevice_GetLightEnable(DWORD Index, BOOL* pEnable);

extern "C" void __stdcall D3DDevice_SetRenderStateNotInline(D3DRENDERSTATETYPE State, DWORD Value);

extern "C" HRESULT __stdcall D3DDevice_SetRenderState_ParameterCheck(D3DRENDERSTATETYPE State, DWORD Value);

extern "C" void D3DFASTCALL D3DDevice_SetRenderState_Simple(DWORD Method, DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_PSTextureModes(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_BackFillMode(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_TwoSidedLighting(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_FrontFace(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_LogicOp(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_MultiSampleMode(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_MultiSampleRenderTargetMode(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_ShadowFunc(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_LineWidth(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_SampleAlpha(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_Dxt1NoiseEnable(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_YuvEnable(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_OcclusionCullEnable(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_StencilCullEnable(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_RopZCmpAlwaysRead(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_RopZRead(DWORD Value);

extern "C" void __stdcall D3DDevice_SetRenderState_DoNotCullUncompressed(DWORD Value);

extern "C" void __stdcall D3DDevice_SetTextureStageStateNotInline(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value);

extern "C" HRESULT __stdcall D3DDevice_SetTextureState_ParameterCheck(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value);

extern "C" void __stdcall D3DDevice_SetTextureState_BumpEnv(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value);

extern "C" void __stdcall D3DDevice_SetTextureState_TexCoordIndex(DWORD Stage, DWORD Value);

extern "C" void __stdcall D3DDevice_SetTextureState_BorderColor(DWORD Stage, DWORD Value);

extern "C" void __stdcall D3DDevice_SetTextureState_ColorKeyColor(DWORD Stage, DWORD Value);

extern "C" void __stdcall D3DDevice_BlockUntilVerticalBlank();

extern "C" IDirect3DSurface8* __stdcall D3DDevice_GetPalette2(DWORD Stage);

extern "C" void __stdcall D3DDevice_SetOverscanColor(D3DCOLOR Color);

extern "C" void __stdcall D3DDevice_SelectVertexShaderDirect(D3DVERTEXATTRIBUTEFORMAT* pVAF, DWORD Address);

extern "C" void __stdcall D3DDevice_LoadVertexShaderProgram(const DWORD* pFunction, DWORD Address);

extern "C" void __stdcall D3DDevice_SetShaderConstantMode(D3DSHADERCONSTANTMODE Mode);

extern "C" void __stdcall D3DDevice_SetVertexShaderInput(DWORD Handle, UINT StreamCount, const D3DSTREAM_INPUT* pStreamInputs);

extern "C" void __stdcall D3DResource_Register(IDirect3DResource8* pThis, void* pBase);

extern "C" void __stdcall D3DDevice_Begin(D3DPRIMITIVETYPE PrimitiveType);

extern "C" void __stdcall D3DDevice_End();


extern "C" void __stdcall Direct3D_SetPushBufferSize(DWORD PushBufferSize, DWORD KickOffSize);

extern "C" BOOL __stdcall D3DDevice_GetOverlayUpdateStatus();

extern "C" void __stdcall D3DDevice_UpdateOverlay(IDirect3DSurface8* pSurface, const RECT* SrcRect, const RECT* DstRect, BOOL EnableColorKey, D3DCOLOR ColorKey);

extern "C" void __stdcall D3DDevice_EnableOverlay(BOOL Enable);

extern "C" void* __stdcall D3D_AllocContiguousMemory(DWORD Size, DWORD Alignment);
