#include <Windows.h>
#include <xinput.h>
#include <d3d8.h>
#include <d3dx8core.h>
#include <dsound.h>
#include <dinput.h>
#include <stdio.h>
#include "xbox.h"
#include "main.h"
#include "d3d8_port.h"
#include "xboxapi_port.h"
#include "dsound_port.h"
#include "convert.h"

/*
	Simple dispatcher CPP file. Purpose - intercept LIB call, convert arguments and call corresponding functions.
*/

extern "C" DWORD WINAPI Wrapper_Direct3DCreate8(UINT param) {
	_applicationSystem->D3D8 = Direct3DCreate8(D3D_SDK_VERSION);
	return 1;
}

extern "C" DWORD WINAPI Wrapper_Direct3D_GetAdapterModeCount(UINT Adapter) {
	return _applicationSystem->D3D8->GetAdapterModeCount(Adapter);
}

extern "C" DWORD WINAPI Wrapper_Direct3D_EnumAdapterModes(UINT Adapter, UINT Mode, D3DDISPLAYMODE* pMode) {
	return _applicationSystem->D3D8->EnumAdapterModes(Adapter, Mode, pMode);
}

extern "C" void WINAPI Wrapper_Direct3D_SetPushBufferSize(DWORD PushBufferSize, DWORD KickOff) {
	Direct3D_SetPushBufferSize(PushBufferSize, KickOff);
}

extern "C" HRESULT WINAPI Wrapper_Direct3D_CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, void* pUnused, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DDevice8** ppReturnedDeviceInterface) {
	pPresentationParameters->BackBufferFormat = ConvertD3DFormat(pPresentationParameters->BackBufferFormat);
	pPresentationParameters->AutoDepthStencilFormat = ConvertD3DFormat(pPresentationParameters->AutoDepthStencilFormat);
	pPresentationParameters->SwapEffect = ConvertSwapEffect(pPresentationParameters->SwapEffect);
	pPresentationParameters->FullScreen_RefreshRateInHz = 0;
	pPresentationParameters->Flags = 0;
	pPresentationParameters->Windowed = true;

	HRESULT result = _applicationSystem->D3D8->CreateDevice(Adapter, ConvertDeviceType(DeviceType), _applicationSystem->MainWindow, BehaviorFlags, pPresentationParameters, ppReturnedDeviceInterface);
	_applicationSystem->D3DDevice = *ppReturnedDeviceInterface;

	IDirect3DTexture8* tmp;
	D3DXCreateTexture(_applicationSystem->D3DDevice, 64, 64, 1, 0, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &tmp);
	_applicationSystem->d3dtexturevft = *((void**)tmp);

	return result;
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
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_CullMode(D3DCULL Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_CULLMODE, ConvertCull(Value));
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

extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_FillMode(D3DFILLMODE Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_FILLMODE, ConvertFillMode(Value));
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_BackFillMode(DWORD Value) {
	D3DDevice_SetRenderState_BackFillMode(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_TwoSidedLighting(DWORD Value) {
	D3DDevice_SetRenderState_TwoSidedLighting(Value);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderState_VertexBlend(D3DVERTEXBLENDFLAGS Value) {
	_applicationSystem->D3DDevice->SetRenderState(D3DRS_VERTEXBLEND, ConvertVertexBlendFlags(Value));
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
	_applicationSystem->D3DDevice->SetGammaRamp(ConvertSetGammaRampFlags(Flags), pRamp);
}

extern "C" void WINAPI Wrapper_D3DDevice_SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix) {
	_applicationSystem->D3DDevice->SetTransform(ConvertTransformState(State), pMatrix); 
}
extern "C" void WINAPI Wrapper_D3DDevice_GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) {
	_applicationSystem->D3DDevice->GetTransform(ConvertTransformState(State), pMatrix); 
}
extern "C" void WINAPI Wrapper_D3DDevice_BlockUntilVerticalBlank() {
	D3DDevice_BlockUntilVerticalBlank();
}
extern "C" void WINAPI Wrapper_D3DDevice_SetRenderTarget(IDirect3DSurface8* pRenderTarget, IDirect3DSurface8* pNewZStencil) {
	_applicationSystem->D3DDevice->SetRenderTarget(pRenderTarget, pNewZStencil);
}
extern "C" IDirect3DSurface8* WINAPI Wrapper_D3DDevice_GetRenderTarget2() {
	IDirect3DSurface8* surf;
	HRESULT result = _applicationSystem->D3DDevice->GetRenderTarget(&surf);
	return surf;
}
extern "C" IDirect3DSurface8* WINAPI Wrapper_D3DDevice_GetDepthStencilSurface2() {
	IDirect3DSurface8* surf;
	HRESULT result = _applicationSystem->D3DDevice->GetDepthStencilSurface(&surf);
	return surf;
}
extern "C" IDirect3DSurface8* WINAPI Wrapper_D3DDevice_GetPalette2(DWORD Stage) {
	return D3DDevice_GetPalette2(Stage);
}
extern "C" void WINAPI Wrapper_D3DDevice_SetTexture(D3DTEXTURESTAGESTATETYPE Stage, IDirect3DTexture8* pTexture) {
	_applicationSystem->D3DDevice->SetTexture(Stage, ConvertToInterface(pTexture));
}
extern "C" void WINAPI Wrapper_D3DDevice_SetOverscanColor(D3DCOLOR Color) {
	D3DDevice_SetOverscanColor(Color);
}
extern "C" void WINAPI Wrapper_D3DDevice_SelectVertexShaderDirect(D3DVERTEXATTRIBUTEFORMAT* pVAF, DWORD Address) {
	D3DDevice_SelectVertexShaderDirect(pVAF, Address);
}

extern "C" HRESULT WINAPI Wrapper_D3DDevice_CreateVertexShader(CONST DWORD* pDeclaration, CONST DWORD* pFunction, DWORD* pHandle, DWORD Usage) {
	HRESULT result = _applicationSystem->D3DDevice->CreateVertexShader(ConvertShaderDecl(pDeclaration), pFunction, pHandle, 0);
	return result;
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
	_applicationSystem->D3DDevice->Clear(Count, pRects, ConvertClearFlags(Flags), Color, Z, Stencil);
}
extern "C" void WINAPI Wrapper_D3DDevice_DrawVerticesUP(D3DPRIMITIVETYPE PrimitiveType, UINT VertexCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride) {
	_applicationSystem->D3DDevice->DrawPrimitiveUP(ConvertPrimitiveType(PrimitiveType), VertexCount-2, pVertexStreamZeroData, VertexStreamZeroStride);
}
extern "C" void WINAPI Wrapper_D3DDevice_DrawVertices(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT VertexCount) {
	//_applicationSystem->D3DDevice->DrawPrimitive(ConvertPrimitiveType(PrimitiveType), StartVertex, VertexCount - 2);
}
extern "C" void WINAPI Wrapper_D3DDevice_Begin(D3DPRIMITIVETYPE PrimitiveType) {
	_applicationSystem->D3DDevice->BeginScene();
}

extern "C" void WINAPI Wrapper_D3DDevice_End() {
	_applicationSystem->D3DDevice->EndScene();
}

extern "C" DWORD WINAPI Wrapper_D3DDevice_Swap(DWORD Flags) {
	HandleWinApiUpdates();
	DWORD result = _applicationSystem->D3DDevice->Present(NULL, NULL, NULL, NULL);
	
	Sleep(16);
	return result;
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

extern "C" ULONG WINAPI Wrapper_D3DResource_Release(IDirect3DResource8* pThis) {
	UnregisterTexture((IDirect3DTexture8*)pThis);
	return pThis->Release();
}
extern "C" void WINAPI Wrapper_D3DResource_Register(IDirect3DResource8* pThis, void* pBase) {
	D3DResource_Register(pThis, pBase);
}
extern "C" void WINAPI Wrapper_D3DSurface_LockRect(IDirect3DSurface8* pThis, D3DLOCKED_RECT* pLockedRect, CONST RECT* pRect, DWORD Flags) {
	pThis->LockRect(pLockedRect, pRect, ConvertLockFlags(Flags));
}

extern "C" IDirect3DSurface8* WINAPI Wrapper_D3DTexture_GetSurfaceLevel2(IDirect3DTexture8* pThis, UINT Level) {
	IDirect3DTexture8* texInterface = ConvertToInterface(pThis);
	IDirect3DSurface8* surface;
	HRESULT surfResult = texInterface->GetSurfaceLevel(Level, &surface);
	return surface;
}
extern "C" HRESULT WINAPI Wrapper_D3DTexture_LockRect(IDirect3DTexture8* pThis, UINT Level, D3DLOCKED_RECT* pLockedRect, CONST RECT* pRect, DWORD Flags) {
	IDirect3DTexture8* texInterface = ConvertToInterface(pThis);
	return texInterface->LockRect(Level, pLockedRect, pRect, Flags);
}
extern "C" void* WINAPI Wrapper_D3D_AllocContiguousMemory(DWORD Size, DWORD Alignment) {
	return D3D_AllocContiguousMemory(Size, Alignment);
}

extern "C" HRESULT  __stdcall Wrapper_D3DXCreateTexture(IDirect3DDevice8* pThis,UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture8** ppTexture) {
	HRESULT result = _applicationSystem->D3DDevice->CreateTexture(Width, Height, Levels, Usage, ConvertD3DFormat(Format), D3DPOOL_MANAGED, ppTexture);
	RegisterTexture(*ppTexture);
	return result;
}

//xapi wrappers

extern "C" void __stdcall Wrapper_USBD_Init(DWORD dwPreallocTypeCount, void* PreallocTypes) { //XInitDevices
	return;
}

extern "C" XBOXAPI HANDLE __stdcall Wrapper_XInputOpen(IN PXPP_DEVICE_TYPE DeviceType, IN DWORD dwPort, IN DWORD dwSlot, IN PXINPUT_POLLING_PARAMETERS pPollingParameters OPTIONAL) {
	if (dwPort == 0 && dwSlot == 0) {
		_applicationSystem->input = (void*)1;
		return _applicationSystem->input;
	}
	return INVALID_HANDLE_VALUE;
}

extern "C" XBOXAPI VOID __stdcall Wrapper_XInputClose(IN HANDLE hDevice) {
	return;
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XInputGetState(IN HANDLE hDevice, OUT PXINPUT_STATE pState) {
	if (hDevice == _applicationSystem->input) {
		return XInputGetState(0, pState);
	}
	return 0;
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XInputSetState(IN HANDLE hDevice, IN OUT XINPUT_VIBRATION* pFeedback) {
	return 0; //Vibrations are not supported
	return XInputSetState(0, pFeedback);
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XGetDevices(IN PXPP_DEVICE_TYPE DeviceType) {
	return (1 << 0); // XDEVICE_PORT0_MASK
}

extern "C" XBOXAPI BOOL __stdcall Wrapper_XGetDeviceChanges(IN PXPP_DEVICE_TYPE DeviceType, OUT PDWORD pdwInsertions, OUT PDWORD pdwRemovals) {
	return FALSE; //Do not support dynamic device changes
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XGetLanguage(VOID) {
	return XGetLanguage();
}

extern "C" XBOXAPI HANDLE __stdcall Wrapper_XGetSectionHandleA(IN LPCSTR pSectionName) {
	return XGetSectionHandleA(pSectionName);
}

extern "C" XBOXAPI PVOID __stdcall Wrapper_XLoadSectionByHandle(IN HANDLE hSection) {
	return XLoadSectionByHandle(hSection);
}

extern "C" XBOXAPI BOOL __stdcall Wrapper_XFreeSectionByHandle(HANDLE hSection) {
	return XFreeSectionByHandle(hSection);
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XLaunchNewImageA(IN LPCSTR lpImagePath, IN PLAUNCH_DATA pLaunchData) {
	return XLaunchNewImageA(lpImagePath, pLaunchData);
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XGetLaunchInfo(OUT PDWORD pdwLaunchDataType, OUT PLAUNCH_DATA pLaunchData) {
	return XGetLaunchInfo(pdwLaunchDataType, pLaunchData);
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XGetDiskSectorSizeA(IN LPCSTR lpRootPathName) {
	return XGetDiskSectorSizeA(lpRootPathName);
}

extern "C" XBOXAPI HANDLE __stdcall Wrapper_XCalculateSignatureBegin(IN DWORD dwFlags) {
	return XCalculateSignatureBegin(dwFlags);
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XCalculateSignatureUpdate(IN HANDLE hCalcSig, IN const BYTE* pbData, IN ULONG cbData) {
	return XCalculateSignatureUpdate(hCalcSig, pbData, cbData);
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XCalculateSignatureEnd(IN HANDLE hCalcSig, OUT PVOID pSignature) {
	return XCalculateSignatureEnd(hCalcSig, pSignature);
}

extern "C" XBOXAPI BOOL __stdcall Wrapper_XSetFileCacheSize(IN SIZE_T dwCacheSize) {
	return SetSystemFileCacheSize(dwCacheSize, dwCacheSize, 0);
}

extern "C" XBOXAPI LPVOID __stdcall Wrapper_XPhysicalAlloc(IN SIZE_T dwSize, IN ULONG_PTR ulPhysicalAddress, IN ULONG_PTR ulAlignment, IN DWORD flProtect) {

	return XPhysicalAlloc(dwSize, ulPhysicalAddress, ulAlignment, flProtect);
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XGetVideoFlags(VOID) {
	return XGetVideoFlags();
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XGetVideoStandard(VOID) {
	return XGetVideoStandard();
}

extern "C" XBOXAPI DWORD __stdcall Wrapper_XCreateSaveGame(IN LPCSTR lpRootPathName, IN LPCWSTR lpSaveGameName, IN DWORD dwCreationDisposition, IN DWORD dwCreateFlags, OUT LPSTR lpPathBuffer, IN UINT uSize) {
	return XCreateSaveGame(lpRootPathName, lpSaveGameName, dwCreationDisposition, dwCreateFlags, lpPathBuffer, uSize);
}

extern "C" XBOXAPI HANDLE __stdcall Wrapper_XFindFirstSaveGame(IN LPCSTR lpRootPathName, OUT PXGAME_FIND_DATA pFindGameData) {
	return XFindFirstSaveGame(lpRootPathName, pFindGameData);
}

extern "C" XBOXAPI BOOL __stdcall Wrapper_XFindNextSaveGame(IN HANDLE hFindGame, OUT PXGAME_FIND_DATA pFindGameData) {
	return XFindNextSaveGame(hFindGame, pFindGameData);
}

extern "C" XBOXAPI BOOL __stdcall Wrapper_XFindClose(IN HANDLE hFind) {
	return XFindClose(hFind);
}

extern "C" LPVOID __stdcall Wrapper_XMemAlloc(SIZE_T dwSize, DWORD dwAllocAttributes) {
	return XMemAlloc(dwSize, dwAllocAttributes);
}

extern "C" VOID __stdcall Wrapper_XMemFree(PVOID pAddress, DWORD dwAllocAttributes) {
	XMemFree(pAddress, dwAllocAttributes);
}

extern "C" ULONG __stdcall Wrapper_XGBuffer_AddRef(XGBuffer* pThis) {
	return XGBuffer_AddRef(pThis);
}

extern "C" ULONG __stdcall Wrapper_XGBuffer_Release(XGBuffer* pThis) {
	return XGBuffer_Release(pThis);
}

extern "C" LPVOID __stdcall Wrapper_XGBuffer_GetBufferPointer(XGBuffer* pThis) {
	return XGBuffer_GetBufferPointer(pThis);
}

extern "C" DWORD __stdcall Wrapper_XGBuffer_GetBufferSize(XGBuffer* pThis) {
	return XGBuffer_GetBufferSize(pThis);
}

extern "C" DWORD __stdcall Wrapper_XGSetSurfaceHeader(UINT Width, UINT Height, D3DFORMAT Format, IDirect3DSurface8* pSurface, UINT Data, UINT Pitch) {
	return XGSetSurfaceHeader(Width, Height, Format, pSurface, Data, Pitch);
}

extern "C" DWORD __stdcall Wrapper_XGSetTextureHeader(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, D3DTextureBase* pTexture, UINT Data, UINT Pitch) {
	return XGSetTextureHeader(Width, Height, Levels, Usage, Format, Pool, pTexture, Data, Pitch);
}

extern "C" void __stdcall Wrapper_XGSetVertexBufferHeader(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer8* ppVertexBuffer, UINT Data) {
	XGSetVertexBufferHeader(Length, Usage, FVF, Pool, ppVertexBuffer, Data);
}

extern "C" HRESULT __stdcall Wrapper_XGAssembleShader(LPCSTR pSourceFileName, LPCVOID pSrcData, UINT SrcDataLen, DWORD Flags, LPXGBUFFER* pConstants, LPXGBUFFER* pCompiledShader, LPXGBUFFER* pErrorLog, LPXGBUFFER* pListing, SASM_ResolverCallback pResolver, LPVOID pResolverUserData, LPDWORD pShaderType) {
	const char* listing = (const char*)pSrcData;
	const char* converted = ConvertShaderListing(listing);
	HRESULT result = D3DXAssembleShader(converted, strlen(converted), Flags, pConstants, pCompiledShader, pErrorLog);
	return result;
}

extern "C" HRESULT __stdcall Wrapper_XGSpliceVertexShaders(DWORD* pNewShader, DWORD* pcbNewShaderBufferSize, DWORD* pNewInstructionCount, const DWORD* const* ppShaderArray, DWORD NumShaders, BOOL bOptimizeResults) {
	return XGSpliceVertexShaders(pNewShader, pcbNewShaderBufferSize, pNewInstructionCount, ppShaderArray, NumShaders, bOptimizeResults);
}

extern "C" void __stdcall Wrapper_XGSwizzleRect(LPCVOID pSource, DWORD Pitch, LPCRECT pRect, LPVOID pDest, DWORD Width, DWORD Height, const LPPOINT pPoint, DWORD BytesPerPixel) {
	D3DTextureBase* texture = _applicationSystem->lastTexture;
	IDirect3DTexture8* texInterface = GetTextureInterface(_applicationSystem->lastTexture);
	D3DSURFACE_DESC desc;
	ZeroMemory(&desc, sizeof(desc));
	texInterface->GetLevelDesc(0, &desc);
	IDirect3DTexture8* tmpTexture;
	_applicationSystem->D3DDevice->CreateTexture(desc.Width, desc.Height,1,0,desc.Format, D3DPOOL_SYSTEMMEM, &tmpTexture);
	D3DLOCKED_RECT locked;
	ZeroMemory(&locked, sizeof(locked));
	tmpTexture->LockRect(0, &locked, NULL, 0);
	memcpy(locked.pBits, pSource, texture->size);
	tmpTexture->UnlockRect(0);
	HRESULT result = _applicationSystem->D3DDevice->UpdateTexture(tmpTexture, texInterface);
	tmpTexture->Release();
}

extern "C" void  __stdcall Wrapper_XAudioCreatePcmFormat(WORD nChannels, DWORD nSamplesPerSec, WORD wBitsPerSample, LPWAVEFORMATEX pwfx) {
	XAudioCreatePcmFormat(nChannels, nSamplesPerSec, wBitsPerSample, pwfx);
}

extern "C" HRESULT  __stdcall Wrapper_XAudioDownloadEffectsImage(LPCSTR pszImageName, LPCDSEFFECTIMAGELOC pImageLoc, DWORD dwFlags, LPDSEFFECTIMAGEDESC* ppImageDesc) {
	return XAudioDownloadEffectsImage(pszImageName, pImageLoc, dwFlags, ppImageDesc);
}

extern "C" HRESULT  __stdcall Wrapper_XFileCreateMediaObjectAsync(HANDLE hFile, DWORD dwMaxPackets, XFileMediaObject** ppMediaObject) {
	return XFileCreateMediaObjectAsync(hFile, dwMaxPackets, ppMediaObject);
}

extern "C" void __stdcall Wrapper_XAudioCreateAdpcmFormat(WORD nChannels, DWORD nSamplesPerSec, LPXBOXADPCMWAVEFORMAT pwfx) {
	XAudioCreateAdpcmFormat(nChannels, nSamplesPerSec, pwfx);
}

extern "C" HRESULT __stdcall Wrapper_XMVDecoder_CreateDecoderForFile(DWORD Flags, LPCSTR szFileName, XMVDecoder** ppDecoder) {
	return XMVDecoder_CreateDecoderForFile(Flags, szFileName, ppDecoder);
}

extern "C" void __stdcall Wrapper_XMVDecoder_CloseDecoder(XMVDecoder* pDecoder) {
	XMVDecoder_CloseDecoder(pDecoder);
}

extern "C" void __stdcall Wrapper_XMVDecoder_GetVideoDescriptor(XMVDecoder* pDecoder, XMVVIDEO_DESC* pVideoDescriptor) {
	XMVDecoder_GetVideoDescriptor(pDecoder, pVideoDescriptor);
}

extern "C" HRESULT __stdcall Wrapper_XMVDecoder_GetNextFrame(XMVDecoder* pDecoder, IDirect3DSurface8* pSurface, XMVRESULT* pResult, DWORD* pTimeOfFrame) {
	return XMVDecoder_GetNextFrame(pDecoder, pSurface, pResult, pTimeOfFrame);
}

extern "C" HRESULT __stdcall Wrapper_XMVDecoder_EnableAudioStream(XMVDecoder* pDecoder, DWORD AudioStream, DWORD Flags, DSMIXBINS* pMixBins, IDirectSoundStream** ppStream) {
	return XMVDecoder_EnableAudioStream(pDecoder, AudioStream, Flags, pMixBins, ppStream);
}


//DSound

extern "C" HRESULT __stdcall Wrapper_DirectSoundCreate(LPGUID pguidDeviceId, LPDIRECTSOUND* ppDirectSound, LPUNKNOWN pUnkOuter) {
	HRESULT result = DirectSoundCreate(pguidDeviceId, ppDirectSound, pUnkOuter);
	_applicationSystem->DSDevice = *ppDirectSound;
	return result;
}

extern "C" HRESULT __stdcall Wrapper_DirectSoundCreateBuffer(LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer) {
	return _applicationSystem->DSDevice->CreateSoundBuffer(pdsbd, ppBuffer, NULL); //TODO caps
}

extern "C" HRESULT __stdcall Wrapper_DirectSoundCreateStream(LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream) {
	return DirectSoundCreateStream(pdssd, ppStream);
}

extern "C" ULONG __stdcall Wrapper_IDirectSound_AddRef(LPDIRECTSOUND pDirectSound) {
	return _applicationSystem->DSDevice->AddRef();
}

extern "C" ULONG __stdcall Wrapper_IDirectSound_Release(LPDIRECTSOUND pDirectSound) {
	return _applicationSystem->DSDevice->Release();
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_GetCaps(LPDIRECTSOUND pDirectSound, LPDSCAPS pdsc) {
	return _applicationSystem->DSDevice->GetCaps(pdsc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_CreateSoundBuffer(LPDIRECTSOUND pDirectSound, LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer, LPUNKNOWN pUnkOuter) {
	return _applicationSystem->DSDevice->CreateSoundBuffer(pdsbd, ppBuffer, pUnkOuter); //TODO caps
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_CreateSoundStream(LPDIRECTSOUND pDirectSound, LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream, LPUNKNOWN pUnkOuter) {
	return IDirectSound_CreateSoundStream(pDirectSound, pdssd, ppStream, pUnkOuter);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_GetSpeakerConfig(LPDIRECTSOUND pDirectSound, LPDWORD pdwSpeakerConfig) {
	return _applicationSystem->DSDevice->GetSpeakerConfig(pdwSpeakerConfig);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetCooperativeLevel(LPDIRECTSOUND pDirectSound, HWND hWnd, DWORD dwLevel) {
	return _applicationSystem->DSDevice->SetCooperativeLevel(hWnd, dwLevel);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_Compact(LPDIRECTSOUND pDirectSound) {
	return _applicationSystem->DSDevice->Compact();
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_DownloadEffectsImage(LPDIRECTSOUND pDirectSound, LPCVOID pvImageBuffer, DWORD dwImageSize, LPCDSEFFECTIMAGELOC pImageLoc, LPDSEFFECTIMAGEDESC* ppImageDesc) {
	return IDirectSound_DownloadEffectsImage(pDirectSound, pvImageBuffer, dwImageSize, pImageLoc, ppImageDesc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_GetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPVOID pvData, DWORD dwDataSize) {
	return IDirectSound_GetEffectData(pDirectSound, dwEffectIndex, dwOffset, pvData, dwDataSize);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPCVOID pvData, DWORD dwDataSize, DWORD dwApply) {
	return IDirectSound_SetEffectData(pDirectSound, dwEffectIndex, dwOffset, pvData, dwDataSize, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_CommitEffectData(LPDIRECTSOUND pDirectSound) {
	return IDirectSound_CommitEffectData(pDirectSound);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_EnableHeadphones(LPDIRECTSOUND pDirectSound, BOOL fEnabled) {
	return IDirectSound_EnableHeadphones(pDirectSound, fEnabled);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetMixBinHeadroom(LPDIRECTSOUND pDirectSound, DWORD dwMixBin, DWORD dwHeadroom) {
	return IDirectSound_SetMixBinHeadroom(pDirectSound, dwMixBin, dwHeadroom);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetAllParameters(LPDIRECTSOUND pDirectSound, LPCDS3DLISTENER pds3dl, DWORD dwApply) {
	return IDirectSound_SetAllParameters(pDirectSound, pds3dl, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetOrientation(LPDIRECTSOUND pDirectSound, FLOAT xFront, FLOAT yFront, FLOAT zFront, FLOAT xTop, FLOAT yTop, FLOAT zTop, DWORD dwApply) {
	return _applicationSystem->DSListener->SetOrientation(xFront, yFront, zFront, xTop, yTop, zTop, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetPosition(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return _applicationSystem->DSListener->SetPosition(x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetVelocity(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return _applicationSystem->DSListener->SetVelocity(x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetDistanceFactor(LPDIRECTSOUND pDirectSound, FLOAT flDistanceFactor, DWORD dwApply) {
	return _applicationSystem->DSListener->SetDistanceFactor(flDistanceFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetDopplerFactor(LPDIRECTSOUND pDirectSound, FLOAT flDopplerFactor, DWORD dwApply) {
	return _applicationSystem->DSListener->SetDopplerFactor(flDopplerFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetRolloffFactor(LPDIRECTSOUND pDirectSound, FLOAT flRolloffFactor, DWORD dwApply) {
	return _applicationSystem->DSListener->SetRolloffFactor(flRolloffFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SetI3DL2Listener(LPDIRECTSOUND pDirectSound, LPCDSI3DL2LISTENER pds3dl, DWORD dwApply) {
	DSBUFFERDESC desc;
	ZeroMemory(&desc, sizeof(desc));
	desc.dwSize = sizeof(desc);
	desc.dwFlags = DSBCAPS_PRIMARYBUFFER | DSBCAPS_CTRL3D;
	HRESULT result1 = _applicationSystem->DSDevice->CreateSoundBuffer(&desc, &_applicationSystem->DSPrimaryBuffer, NULL);
	HRESULT result2 = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DListener8, (LPVOID*) &_applicationSystem->DSListener);
	return S_OK;
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_CommitDeferredSettings(LPDIRECTSOUND pDirectSound) {
	return _applicationSystem->DSListener->CommitDeferredSettings();
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_GetTime(LPDIRECTSOUND pDirectSound, REFERENCE_TIME* prtCurrent) {
	return IDirectSound_GetTime(pDirectSound, prtCurrent); //IDirectMusicPerformance8
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_GetOutputLevels(LPDIRECTSOUND pDirectSound, LPDSOUTPUTLEVELS pOutputLevels, BOOL fResetPeakValues) {
	return IDirectSound_GetOutputLevels(pDirectSound, pOutputLevels, fResetPeakValues);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSound_SynchPlayback(LPDIRECTSOUND pDirectSound) {
	return IDirectSound_SynchPlayback(pDirectSound);
}

extern "C" ULONG __stdcall Wrapper_IDirectSoundBuffer_AddRef(LPDIRECTSOUNDBUFFER pBuffer) {
	return pBuffer->AddRef();
}

extern "C" ULONG __stdcall Wrapper_IDirectSoundBuffer_Release(LPDIRECTSOUNDBUFFER pBuffer) {
	return pBuffer->Release();
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetFormat(LPDIRECTSOUNDBUFFER pBuffer, LPCWAVEFORMATEX pwfxFormat) {
	return pBuffer->SetFormat(pwfxFormat);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetFrequency(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwFrequency) {
	return pBuffer->SetFrequency(dwFrequency);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lVolume) {
	return pBuffer->SetVolume(lVolume);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetPitch(LPDIRECTSOUNDBUFFER pBuffer, LONG lPitch) {
	return S_OK; //unsupported
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetLFO(LPDIRECTSOUNDBUFFER pBuffer, LPCDSLFODESC pLFODesc) {
	return IDirectSoundBuffer_SetLFO(pBuffer, pLFODesc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetEG(LPDIRECTSOUNDBUFFER pBuffer, LPCDSENVELOPEDESC pEnvelopeDesc) {
	return IDirectSoundBuffer_SetEG(pBuffer, pEnvelopeDesc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetFilter(LPDIRECTSOUNDBUFFER pBuffer, LPCDSFILTERDESC pFilterDesc) {
	return IDirectSoundBuffer_SetFilter(pBuffer, pFilterDesc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetHeadroom(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwHeadroom) {
	return IDirectSoundBuffer_SetHeadroom(pBuffer, dwHeadroom);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetOutputBuffer(LPDIRECTSOUNDBUFFER pBuffer, LPDIRECTSOUNDBUFFER pOutputBuffer) {
	return IDirectSoundBuffer_SetOutputBuffer(pBuffer, pOutputBuffer);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetMixBins(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins) {
	return IDirectSoundBuffer_SetMixBins(pBuffer, pMixBins);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetMixBinVolumes(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins) {
	return IDirectSoundBuffer_SetMixBinVolumes(pBuffer, pMixBins);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetAllParameters(LPDIRECTSOUNDBUFFER pBuffer, LPCDS3DBUFFER pds3db, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetAllParameters(pds3db, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetConeAngles(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetConeAngles(dwInsideConeAngle, dwOutsideConeAngle, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetConeOrientation(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetConeOrientation(x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetConeOutsideVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lConeOutsideVolume, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetConeOutsideVolume(lConeOutsideVolume, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetMaxDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMaxDistance, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetMaxDistance(flMaxDistance, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetMinDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMinDistance, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetMinDistance(flMinDistance, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetMode(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwMode, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetMode(dwMode, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetPosition(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetPosition(x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetVelocity(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	LPDIRECTSOUND3DBUFFER buffer3d;
	HRESULT result = _applicationSystem->DSPrimaryBuffer->QueryInterface(IID_IDirectSound3DBuffer, (LPVOID*)&buffer3d);
	return buffer3d->SetVelocity(x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetDistanceFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDistanceFactor, DWORD dwApply) {
	return IDirectSoundBuffer_SetDistanceFactor(pBuffer, flDistanceFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetDopplerFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDopplerFactor, DWORD dwApply) {
	return IDirectSoundBuffer_SetDopplerFactor(pBuffer, flDopplerFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetRolloffFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flRolloffFactor, DWORD dwApply) {
	return IDirectSoundBuffer_SetRolloffFactor(pBuffer, flRolloffFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetRolloffCurve(LPDIRECTSOUNDBUFFER pBuffer, const FLOAT* pflPoints, DWORD dwPointCount, DWORD dwApply) {
	return IDirectSoundBuffer_SetRolloffCurve(pBuffer, pflPoints, dwPointCount, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetI3DL2Source(LPDIRECTSOUNDBUFFER pBuffer, LPCDSI3DL2BUFFER pds3db, DWORD dwApply) {
	return IDirectSoundBuffer_SetI3DL2Source(pBuffer, pds3db, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_Play(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwReserved1, DWORD dwReserved2, DWORD dwFlags) {
	return pBuffer->Play(dwReserved1, dwReserved2, dwFlags);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_PlayEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return IDirectSoundBuffer_PlayEx(pBuffer, rtTimeStamp, dwFlags);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_Stop(LPDIRECTSOUNDBUFFER pBuffer) {
	return pBuffer->Stop();
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_StopEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return IDirectSoundBuffer_StopEx(pBuffer, rtTimeStamp, dwFlags);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_Pause(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPause) {
	return IDirectSoundBuffer_Pause(pBuffer, dwPause);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_PauseEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimestamp, DWORD dwPause) {
	return IDirectSoundBuffer_PauseEx(pBuffer, rtTimestamp, dwPause);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetPlayRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayStart, DWORD dwPlayLength) {
	return IDirectSoundBuffer_SetPlayRegion(pBuffer, dwPlayStart, dwPlayLength);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetLoopRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwLoopStart, DWORD dwLoopLength) {
	return IDirectSoundBuffer_SetLoopRegion(pBuffer, dwLoopStart, dwLoopLength);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_GetStatus(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwStatus) {
	return pBuffer->GetStatus(pdwStatus);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_GetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwPlayCursor, LPDWORD pdwWriteCursor) {
	return pBuffer->GetCurrentPosition(pdwPlayCursor, pdwWriteCursor);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayCursor) {
	return pBuffer->SetCurrentPosition(dwPlayCursor);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetBufferData(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvBufferData, DWORD dwBufferBytes) {
	return IDirectSoundBuffer_SetBufferData(pBuffer, pvBufferData, dwBufferBytes);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_Lock(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwOffset, DWORD dwBytes, LPVOID* ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID* ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags) {
	return pBuffer->Lock(dwOffset, dwBytes, ppvAudioPtr1, pdwAudioBytes1, ppvAudioPtr2, pdwAudioBytes2, dwFlags);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_Unlock(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvLock1, DWORD dwLockSize1, LPVOID pvLock2, DWORD dwLockSize2) {
	return pBuffer->Unlock(pvLock1, dwLockSize1, pvLock2, dwLockSize2);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_Restore(LPDIRECTSOUNDBUFFER pBuffer) {
	return pBuffer->Restore();
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_SetNotificationPositions(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwNotifyCount, LPCDSBPOSITIONNOTIFY paNotifies) {
	return IDirectSoundBuffer_SetNotificationPositions(pBuffer, dwNotifyCount, paNotifies);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundBuffer_GetVoiceProperties(LPDIRECTSOUNDBUFFER pBuffer, LPDSVOICEPROPS pVoiceProps) {
	return IDirectSoundBuffer_GetVoiceProperties(pBuffer, pVoiceProps);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetFormat(LPDIRECTSOUNDSTREAM pStream, LPCWAVEFORMATEX pwfxFormat) {
	return IDirectSoundStream_SetFormat(pStream, pwfxFormat);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetFrequency(LPDIRECTSOUNDSTREAM pStream, DWORD dwFrequency) {
	return IDirectSoundStream_SetFrequency(pStream, dwFrequency);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetVolume(LPDIRECTSOUNDSTREAM pStream, LONG lVolume) {
	return IDirectSoundStream_SetVolume(pStream, lVolume);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetPitch(LPDIRECTSOUNDSTREAM pStream, LONG lPitch) {
	return IDirectSoundStream_SetPitch(pStream, lPitch);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetLFO(LPDIRECTSOUNDSTREAM pStream, LPCDSLFODESC pLFODesc) {
	return IDirectSoundStream_SetLFO(pStream, pLFODesc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetEG(LPDIRECTSOUNDSTREAM pStream, LPCDSENVELOPEDESC pEnvelopeDesc) {
	return IDirectSoundStream_SetEG(pStream, pEnvelopeDesc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetFilter(LPDIRECTSOUNDSTREAM pStream, LPCDSFILTERDESC pFilterDesc) {
	return IDirectSoundStream_SetFilter(pStream, pFilterDesc);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetHeadroom(LPDIRECTSOUNDSTREAM pStream, DWORD dwHeadroom) {
	return IDirectSoundStream_SetHeadroom(pStream, dwHeadroom);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetOutputBuffer(LPDIRECTSOUNDSTREAM pStream, LPDIRECTSOUNDBUFFER pOutputBuffer) {
	return IDirectSoundStream_SetOutputBuffer(pStream, pOutputBuffer);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetMixBins(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins) {
	return IDirectSoundStream_SetMixBins(pStream, pMixBins);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetMixBinVolumes(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins) {
	return IDirectSoundStream_SetMixBinVolumes(pStream, pMixBins);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetAllParameters(LPDIRECTSOUNDSTREAM pStream, LPCDS3DBUFFER pds3db, DWORD dwApply) {
	return IDirectSoundStream_SetAllParameters(pStream, pds3db, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetConeAngles(LPDIRECTSOUNDSTREAM pStream, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply) {
	return IDirectSoundStream_SetConeAngles(pStream, dwInsideConeAngle, dwOutsideConeAngle, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetConeOrientation(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return IDirectSoundStream_SetConeOrientation(pStream, x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetConeOutsideVolume(LPDIRECTSOUNDSTREAM pStream, LONG lConeOutsideVolume, DWORD dwApply) {
	return IDirectSoundStream_SetConeOutsideVolume(pStream, lConeOutsideVolume, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetMaxDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMaxDistance, DWORD dwApply) {
	return IDirectSoundStream_SetMaxDistance(pStream, flMaxDistance, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetMinDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMinDistance, DWORD dwApply) {
	return IDirectSoundStream_SetMinDistance(pStream, flMinDistance, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetMode(LPDIRECTSOUNDSTREAM pStream, DWORD dwMode, DWORD dwApply) {
	return IDirectSoundStream_SetMode(pStream, dwMode, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetPosition(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return IDirectSoundStream_SetPosition(pStream, x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetVelocity(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return IDirectSoundStream_SetVelocity(pStream, x, y, z, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetDistanceFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDistanceFactor, DWORD dwApply) {
	return IDirectSoundStream_SetDistanceFactor(pStream, flDistanceFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetDopplerFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDopplerFactor, DWORD dwApply) {
	return IDirectSoundStream_SetDopplerFactor(pStream, flDopplerFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetRolloffFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flRolloffFactor, DWORD dwApply) {
	return IDirectSoundStream_SetRolloffFactor(pStream, flRolloffFactor, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetRolloffCurve(LPDIRECTSOUNDSTREAM pStream, const FLOAT* pflPoints, DWORD dwPointCount, DWORD dwApply) {
	return IDirectSoundStream_SetRolloffCurve(pStream, pflPoints, dwPointCount, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_SetI3DL2Source(LPDIRECTSOUNDSTREAM pStream, LPCDSI3DL2BUFFER pds3db, DWORD dwApply) {
	return IDirectSoundStream_SetI3DL2Source(pStream, pds3db, dwApply);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_Pause(LPDIRECTSOUNDSTREAM pStream, DWORD dwPause) {
	return IDirectSoundStream_Pause(pStream, dwPause);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_PauseEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimestamp, DWORD dwPause) {
	return IDirectSoundStream_PauseEx(pStream, rtTimestamp, dwPause);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_FlushEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return IDirectSoundStream_FlushEx(pStream, rtTimeStamp, dwFlags);
}

extern "C" HRESULT __stdcall Wrapper_IDirectSoundStream_GetVoiceProperties(LPDIRECTSOUNDSTREAM pStream, LPDSVOICEPROPS pVoiceProps) {
	return IDirectSoundStream_GetVoiceProperties(pStream, pVoiceProps);
}

extern "C" void __stdcall Wrapper_DirectSoundDoWork(void) {
	DirectSoundDoWork();
}

//WinAPI
extern "C" DWORD  __stdcall Wrapper_GetLastError() {
	return GetLastError();
}
extern "C" BOOL  __stdcall Wrapper_GetOverlappedResult(HANDLE hFile, LPOVERLAPPED lpOverlapped, LPDWORD lpNumberOfBytesTransferred, BOOL bWait) {
	return GetOverlappedResult(hFile, lpOverlapped, lpNumberOfBytesTransferred, bWait);
}
extern "C" void  __stdcall Wrapper_XapiBootToDash(int param1, int param2, int param3) {
	return;
}
extern "C" BOOL  __stdcall Wrapper_CloseHandle(HANDLE hObject) {
	return CloseHandle(hObject);
}
extern "C" HANDLE  __stdcall Wrapper_CreateThread(LPSECURITY_ATTRIBUTES lpThreadAttributes, SIZE_T dwStackSize, LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter, DWORD dwCreationFlags, LPDWORD lpThreadId) {
	return CreateThread(lpThreadAttributes, dwStackSize, lpStartAddress, lpParameter, dwCreationFlags, lpThreadId);
}
extern "C" BOOL  __stdcall Wrapper_GetDiskFreeSpaceExA(LPCSTR lpDirectoryName, PULARGE_INTEGER lpFreeBytesAvailableToCaller, PULARGE_INTEGER lpTotalNumberOfBytes, PULARGE_INTEGER lpTotalNumberOfFreeBytes) {
	return GetDiskFreeSpaceExA(lpDirectoryName, lpFreeBytesAvailableToCaller, lpTotalNumberOfBytes, lpTotalNumberOfFreeBytes);
}
extern "C" void __stdcall Wrapper_RtlSizeHeap(int arg1, int arg2, int arg3) {
	return;
}
extern "C" BOOL __stdcall Wrapper_ReadFile(HANDLE hFile, LPVOID lpBuffer, DWORD nNumberOfBytesToRead, LPDWORD lpNumberOfBytesRead, LPOVERLAPPED lpOverlapped) {
	return ReadFile(hFile, lpBuffer, nNumberOfBytesToRead, lpNumberOfBytesRead, lpOverlapped);
}
extern "C" BOOL  __stdcall Wrapper_WriteFile(HANDLE hFile, LPCVOID lpBuffer, DWORD nNumberOfBytesToWrite, LPDWORD lpNumberOfBytesWritten, LPOVERLAPPED lpOverlapped) {
	return WriteFile(hFile, lpBuffer, nNumberOfBytesToWrite, lpNumberOfBytesWritten, lpOverlapped);
}
extern "C" DWORD  __stdcall Wrapper_SetFilePointer(HANDLE hFile, LONG lDistanceToMove,  PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod) {
	return SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
}
extern "C" BOOL  __stdcall Wrapper_GetFileInformationByHandle(HANDLE hFile, LPBY_HANDLE_FILE_INFORMATION lpFileInformation) {
	return GetFileInformationByHandle(hFile, lpFileInformation);
}
extern "C" DWORD  __stdcall Wrapper_GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh) {
	DWORD fSize = GetFileSize(hFile, lpFileSizeHigh);
	return fSize;
}
extern "C" HANDLE  __stdcall Wrapper_CreateFileA(LPCSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile) {
	LogFunc(lpFileName);
	LPCSTR fixedPath = ConvertFilePath(lpFileName);
	HANDLE handle = CreateFileA(fixedPath, dwDesiredAccess, dwShareMode, lpSecurityAttributes, dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile);
	return handle;
}
extern "C" LPVOID  __stdcall Wrapper_VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect) {
	return VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);
}
extern "C" BOOL __stdcall  Wrapper_QueryPerformanceCounter(LARGE_INTEGER* lpCounter) {
	return QueryPerformanceCounter(lpCounter);
}
extern "C" BOOL  __stdcall Wrapper_QueryPerformanceFrequency(LARGE_INTEGER* lpFrequency) {
	return QueryPerformanceFrequency(lpFrequency);
}
extern "C" BOOL  __stdcall Wrapper_FileTimeToSystemTime(CONST FILETIME* lpFileTime, LPSYSTEMTIME lpSystemTime) {
	return FileTimeToSystemTime(lpFileTime, lpSystemTime);
}
extern "C" void  __stdcall Wrapper_GetLocalTime(LPSYSTEMTIME lpSystemTime) {
	GetLocalTime(lpSystemTime);
}

//libc
extern "C" LPWSTR __stdcall Wrapper_lstrcpyW(LPWSTR lpString1, LPWSTR lpString2) {
	return lstrcpyW(lpString1, lpString2);
}

extern "C" int __cdecl Wrapper_rand() {
	return rand();
}

extern "C" int __cdecl Wrapper__ftol2(float num) {
	return (int)num;
}
extern "C" int __cdecl Wrapper_tolower(int c) {
	return tolower(c);
}
extern "C" int __cdecl Wrapper_atexit(void(__cdecl*cb)(void)) {
	return atexit(cb);
}
extern "C" void __cdecl Wrapper_qsort(void* _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction) {
	qsort(_Base, _NumOfElements, _SizeOfElements, _CompareFunction);
}
extern "C" void __cdecl Wrapper_sprintf(char* const _Buffer, char const* const _Format, ...) {
	
}
extern "C" int __cdecl Wrapper__stricmp(const char* str1, const char* str2) {
	return _stricmp(str1, str2);
}
extern "C" char* __cdecl Wrapper_strncpy(char* dst, const char* src, size_t cnt) {
	return strncpy(dst, src, cnt);
}
extern "C" int __cdecl Wrapper__strnicmp(const char* str1, const char* str2, size_t cnt) {
	return _strnicmp(str1, str2, cnt);
}
extern "C" void* __cdecl Wrapper_memmove(void* dst, const void* src, size_t cnt) {
	return memmove(dst, src, cnt);
}
extern "C" int __cdecl Wrapper_toupper(int c) {
	return toupper(c);
}
extern "C" const char* __cdecl Wrapper_strstr(const char* str1, const char* str2) {
	return strstr(str1, str2);
}
extern "C" int __cdecl Wrapper_islower(int c) {
	return islower(c);
}
extern "C" long __cdecl Wrapper_atol(const char* str) {
	return atol(str);
}
extern "C" double __cdecl Wrapper_atof(const char* str) {
	return atof(str);
}

//

