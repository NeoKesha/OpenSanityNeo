#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#include "xbox.h"
#include "main.h"
#include "d3d8_port.h"

/*
	Simple dispatcher CPP file. Purpose - intercept LIB call, convert arguments and call corresponding functions.
*/

extern "C" DWORD WINAPI Wrapper_Direct3DCreate8(UINT param) {
	_applicationSystem->D3D8 = Direct3DCreate8(D3D_SDK_VERSION);
	return 1;
}

extern "C" DWORD WINAPI Wrapper_Direct3D_GetAdapterModeCount(UINT Adapter) {
	return Direct3D_GetAdapterModeCount(Adapter);
}

extern "C" DWORD WINAPI Wrapper_Direct3D_EnumAdapterModes(UINT Adapter, UINT Mode, D3DDISPLAYMODE* pMode) {
	return Direct3D_EnumAdapterModes(Adapter, Mode, pMode);
}

extern "C" void WINAPI Wrapper_Direct3D_SetPushBufferSize(DWORD PushBufferSize, DWORD KickOff) {
	Direct3D_SetPushBufferSize(PushBufferSize, KickOff);
}

extern "C" HRESULT WINAPI Wrapper_Direct3D_CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, void* pUnused, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DDevice8** ppReturnedDeviceInterface) {
	return Direct3D_CreateDevice(Adapter, DeviceType, pUnused, BehaviorFlags, pPresentationParameters, ppReturnedDeviceInterface);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_PSTextureModes(DWORD Value) {
	D3DDevice_SetRenderState_PSTextureModes(Value);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_EdgeAntiAlias(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_EDGEANTIALIAS, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_ShadowFunc(DWORD Value) {
	D3DDevice_SetRenderState_ShadowFunc(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_FogColor(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_FOGCOLOR, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_CullMode(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_CULLMODE, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_FrontFace(DWORD Value) {
	D3DDevice_SetRenderState_FrontFace(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_NormalizeNormals(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_NORMALIZENORMALS, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_TextureFactor(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_TEXTUREFACTOR, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_LineWidth(DWORD Value) {
	D3DDevice_SetRenderState_LineWidth(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_Dxt1NoiseEnable(DWORD Value) {
	D3DDevice_SetRenderState_Dxt1NoiseEnable(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_ZBias(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_ZBIAS, Value);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_LogicOp(DWORD Value) {
	D3DDevice_SetRenderState_LogicOp(Value);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_FillMode(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_FILLMODE, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_BackFillMode(DWORD Value) {
	D3DDevice_SetRenderState_BackFillMode(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_TwoSidedLighting(DWORD Value) {
	D3DDevice_SetRenderState_TwoSidedLighting(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_VertexBlend(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_VERTEXBLEND, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetTextureState_TexCoordIndex(DWORD Stage, DWORD Value) {
	D3DDevice_SetTextureState_TexCoordIndex(Stage, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetTextureState_BumpEnv(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) {
	D3DDevice_SetTextureState_BumpEnv(Stage, Type, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetTextureState_BorderColor(DWORD Stage, DWORD Value) {
	D3DDevice_SetTextureState_BorderColor(Stage, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetTextureState_ColorKeyColor(DWORD Stage, DWORD Value) {
	D3DDevice_SetTextureState_ColorKeyColor(Stage, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_ZEnable(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_ZENABLE, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_StencilEnable(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_STENCILENABLE, Value);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_StencilFail(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_STENCILZFAIL, Value);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_YuvEnable(DWORD Value) {
	D3DDevice_SetRenderState_YuvEnable(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_StencilCullEnable(DWORD Value) {
	D3DDevice_SetRenderState_StencilCullEnable(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_RopZCmpAlwaysRead(DWORD Value) {
	D3DDevice_SetRenderState_RopZCmpAlwaysRead(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_RopZRead(DWORD Value) {
	D3DDevice_SetRenderState_RopZRead(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_DoNotCullUncompressed(DWORD Value) {
	D3DDevice_SetRenderState_DoNotCullUncompressed(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_MultiSampleMode(DWORD Value) {
	D3DDevice_SetRenderState_MultiSampleMode(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_MultiSampleRenderTargetMode(DWORD Value) {
	D3DDevice_SetRenderState_MultiSampleRenderTargetMode(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_MultiSampleAntiAlias(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_MULTISAMPLEANTIALIAS, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_MultiSampleMask(DWORD Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_MULTISAMPLEMASK, Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_SampleAlpha(DWORD Value) {
	D3DDevice_SetRenderState_SampleAlpha(Value);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetGammaRamp(DWORD Flags, CONST D3DGAMMARAMP* pRamp) {
	_applicationSystem->D3DDevice->SetGammaRamp(Flags, pRamp); //TODO: Convert flags
}

extern "C" void WINAPI Wrapper_D3DDevice_SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix) {
	_applicationSystem->D3DDevice->SetTransform(State, pMatrix); //TODO: Convert state
}
extern "C" void WINAPI Wrapper_D3DDevice_GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) {
	_applicationSystem->D3DDevice->GetTransform(State, pMatrix); //TODO: Convert state
}
extern "C" void WINAPI Wrapper_D3DDevice_BlockUntilVerticalBlank() {
	D3DDevice_BlockUntilVerticalBlank();
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderTarget(IDirect3DSurface8* pRenderTarget, IDirect3DSurface8* pNewZStencil) {
	_applicationSystem->D3DDevice->SetRenderTarget(pRenderTarget, pNewZStencil);
}
extern "C" IDirect3DSurface8* WINAPI Wrapper_D3DDevice_GetRenderTarget2() {
	IDirect3DSurface8* result;
	_applicationSystem->D3DDevice->GetRenderTarget(&result);
	return result;
}
extern "C" IDirect3DSurface8* WINAPI Wrapper_D3DDevice_GetDepthStencilSurface2() {
	IDirect3DSurface8* result;
	_applicationSystem->D3DDevice->GetDepthStencilSurface(&result);
	return result;
}
extern "C" IDirect3DSurface8* WINAPI Wrapper_D3DDevice_GetPalette2(DWORD Stage) {
	return D3DDevice_GetPalette2(Stage);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetTexture(DWORD Stage, IDirect3DBaseTexture8* pTexture) {
	_applicationSystem->D3DDevice->SetTexture(Stage, pTexture);
	D3DDevice_SetTexture(Stage, pTexture);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetOverscanColor(D3DCOLOR Color) {
	D3DDevice_SetOverscanColor(Color);
}
extern "C" void WINAPI Wrapper_D3DDevice_SelectVertexShaderDirect(D3DVERTEXATTRIBUTEFORMAT* pVAF, DWORD Address) {
	D3DDevice_SelectVertexShaderDirect(pVAF, Address);
}

extern "C" HRESULT WINAPI Wrapper_D3DDevice_CreateVertexShader(CONST DWORD* pDeclaration, CONST DWORD* pFunction, DWORD* pHandle, DWORD Usage) {
	return _applicationSystem->D3DDevice->CreateVertexShader(pDeclaration, pFunction, pHandle, Usage);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer8* pStreamData, UINT Stride) {
	_applicationSystem->D3DDevice->SetStreamSource(StreamNumber, pStreamData, Stride);
}
extern "C" void WINAPI Wrapper_D3DDevice_LoadVertexShaderProgram(CONST DWORD* pFunction, DWORD Address) {
	D3DDevice_LoadVertexShaderProgram(pFunction, Address);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetShaderConstantMode(D3DSHADERCONSTANTMODE Mode) {
	D3DDevice_SetShaderConstantMode(Mode);
}
extern "C" void WINAPI Wrapper_D3DDevice_DeleteVertexShader(DWORD Handle) {
	_applicationSystem->D3DDevice->DeleteVertexShader(Handle);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetVertexShader(DWORD Handle) {
	_applicationSystem->D3DDevice->SetVertexShader(Handle);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetVertexShaderInput(DWORD Handle, UINT StreamCount, CONST D3DSTREAM_INPUT* pStreamInputs) {
	D3DDevice_SetVertexShaderInput(Handle, StreamCount, pStreamInputs);
}
extern "C" void WINAPI Wrapper_D3DDevice_Clear(DWORD Count, CONST D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil) {
	_applicationSystem->D3DDevice->Clear(Count, pRects, Flags, Color, Z, Stencil);
}
extern "C" void WINAPI Wrapper_D3DDevice_DrawVerticesUP(D3DPRIMITIVETYPE PrimitiveType, UINT VertexCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride) {
	//TODO: Mite mite!
	_applicationSystem->D3DDevice->DrawPrimitiveUP(PrimitiveType, VertexCount, pVertexStreamZeroData, VertexStreamZeroStride);
}
extern "C" void WINAPI Wrapper_D3DDevice_DrawVertices(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT VertexCount) {
	//TODO: Mite mite!
	_applicationSystem->D3DDevice->DrawPrimitive(PrimitiveType, StartVertex, VertexCount);
}
extern "C" void WINAPI Wrapper_D3DDevice_Begin(D3DPRIMITIVETYPE PrimitiveType) {
	D3DDevice_Begin(PrimitiveType);
}

extern "C" void WINAPI Wrapper_D3DDevice_End() {
	D3DDevice_End();
}

extern "C" DWORD WINAPI Wrapper_D3DDevice_Swap(DWORD Flags) {
	return _applicationSystem->D3DDevice->Present(NULL, NULL, NULL, NULL);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetPixelShader(DWORD Handle) {
	_applicationSystem->D3DDevice->SetPixelShader(Handle);
}
extern "C" BOOL WINAPI Wrapper_D3DDevice_GetOverlayUpdateStatus() {
	return D3DDevice_GetOverlayUpdateStatus();
}
extern "C" void WINAPI Wrapper_D3DDevice_UpdateOverlay(IDirect3DSurface8* pSurface, CONST RECT* SrcRect, CONST RECT* DstRect, BOOL EnableColorKey, D3DCOLOR ColorKey) {
	D3DDevice_UpdateOverlay(pSurface, SrcRect, DstRect, EnableColorKey, ColorKey);
}
extern "C" void WINAPI Wrapper_D3DDevice_EnableOverlay(BOOL Enable) {
	D3DDevice_EnableOverlay(Enable);
}