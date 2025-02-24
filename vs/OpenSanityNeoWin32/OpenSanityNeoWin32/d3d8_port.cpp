#include "d3d8_port.h"

ULONG WINAPI D3DDevice_AddRef() {
	return 0; //MOCK
}
ULONG WINAPI D3DDevice_Release() {
	return 0; //MOCK
}
void WINAPI D3DDevice_GetDirect3D(IDirect3D8** ppD3D8) {
	return; //MOCK
}
void WINAPI D3DDevice_GetDeviceCaps(D3DCAPS8* pCaps) {
	return; //MOCK
}
void WINAPI D3DDevice_GetDisplayMode(D3DDISPLAYMODE* pMode) {
	return; //MOCK
}
void WINAPI D3DDevice_GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS* pParameters) {
	return; //MOCK
}
HRESULT WINAPI D3DDevice_Reset(D3DPRESENT_PARAMETERS* pPresentationParameters) {
	return S_OK; //MOCK
}
void WINAPI D3DDevice_GetRasterStatus(D3DRASTER_STATUS* pRasterStatus) {
	return; //MOCK
}
void WINAPI D3DDevice_SetFlickerFilter(DWORD Filter) {
	return; //MOCK
}
void WINAPI D3DDevice_SetSoftDisplayFilter(BOOL Enable) {
	return; //MOCK
}
void WINAPI D3DDevice_SetGammaRamp(DWORD Flags, CONST D3DGAMMARAMP* pRamp) {
	return; //MOCK
}
void WINAPI D3DDevice_GetGammaRamp(D3DGAMMARAMP* pRamp) {
	return; //MOCK
}
void WINAPI D3DDevice_CopyRects(IDirect3DSurface8* pSourceSurface, CONST RECT* pSourceRectsArray, UINT cRects, IDirect3DSurface8* pDestinationSurface, CONST POINT* pDestPointsArray) {
	return; //MOCK
}
void WINAPI D3DDevice_SetCopyRectsState(CONST D3DCOPYRECTSTATE* pCopyRectState, CONST D3DCOPYRECTROPSTATE* pCopyRectRopState) {
	return; //MOCK
}
void WINAPI D3DDevice_GetCopyRectsState(D3DCOPYRECTSTATE* pCopyRectState, D3DCOPYRECTROPSTATE* pCopyRectRopState) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderTarget(IDirect3DSurface8* pRenderTarget, IDirect3DSurface8* pNewZStencil) {
	return; //MOCK
}
void WINAPI D3DDevice_Clear(DWORD Count, CONST D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil) {
	return; //MOCK
}
void WINAPI D3DDevice_SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix) {
	return; //MOCK
}
void WINAPI D3DDevice_GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* pMatrix) {
	return; //MOCK
}
void WINAPI D3DDevice_MultiplyTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* pMatrix) {
	return; //MOCK
}
void WINAPI D3DDevice_SetViewport(CONST D3DVIEWPORT8* pViewport) {
	return; //MOCK
}
void WINAPI D3DDevice_GetViewport(D3DVIEWPORT8* pViewport) {
	return; //MOCK
}
void WINAPI D3DDevice_SetMaterial(CONST D3DMATERIAL8* pMaterial) {
	return; //MOCK
}
void WINAPI D3DDevice_GetMaterial(D3DMATERIAL8* pMaterial) {
	return; //MOCK
}
void WINAPI D3DDevice_SetBackMaterial(CONST D3DMATERIAL8* pMaterial) {
	return; //MOCK
}
void WINAPI D3DDevice_GetBackMaterial(D3DMATERIAL8* pMaterial) {
	return; //MOCK
}
HRESULT WINAPI D3DDevice_SetLight(DWORD Index, CONST D3DLIGHT8* pLight) {
	return S_OK; //MOCK
}
void WINAPI D3DDevice_GetLight(DWORD Index, D3DLIGHT8* pLight) {
	return; //MOCK
}
HRESULT WINAPI D3DDevice_LightEnable(DWORD Index, BOOL Enable) {
	return S_OK; //MOCK
}
void WINAPI D3DDevice_GetLightEnable(DWORD Index, BOOL* pEnable) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderStateNotInline(D3DRENDERSTATETYPE State, DWORD Value) {
	return; //MOCK
}
HRESULT WINAPI D3DDevice_SetRenderState_ParameterCheck(D3DRENDERSTATETYPE State, DWORD Value) {
	return S_OK; //MOCK
}
void D3DFASTCALL D3DDevice_SetRenderState_Simple(DWORD Method, DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_PSTextureModes(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_VertexBlend(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_FogColor(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_FillMode(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_BackFillMode(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_TwoSidedLighting(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_NormalizeNormals(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_ZEnable(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_StencilEnable(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_StencilFail(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_CullMode(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_FrontFace(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_TextureFactor(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_ZBias(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_LogicOp(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_EdgeAntiAlias(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_MultiSampleAntiAlias(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_MultiSampleMask(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_MultiSampleMode(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_MultiSampleRenderTargetMode(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_ShadowFunc(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_LineWidth(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_SampleAlpha(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_Dxt1NoiseEnable(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_YuvEnable(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_OcclusionCullEnable(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_StencilCullEnable(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_RopZCmpAlwaysRead(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_RopZRead(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_DoNotCullUncompressed(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetTextureStageStateNotInline(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) {
	return; //MOCK
}
HRESULT WINAPI D3DDevice_SetTextureState_ParameterCheck(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) {
	return S_OK; //MOCK
}
void WINAPI D3DDevice_SetTextureState_BumpEnv(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetTextureState_TexCoordIndex(DWORD Stage, DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetTextureState_BorderColor(DWORD Stage, DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetTextureState_ColorKeyColor(DWORD Stage, DWORD Value) {
	return; //MOCK
}

void WINAPI D3DDevice_BlockUntilVerticalBlank() {
	return;
}

IDirect3DSurface8* WINAPI D3DDevice_GetRenderTarget2() {
	return (IDirect3DSurface8*)0; //MOCK
}
IDirect3DSurface8* WINAPI D3DDevice_GetDepthStencilSurface2() {
	return (IDirect3DSurface8*)0; //MOCK
}
IDirect3DSurface8* WINAPI D3DDevice_GetPalette2(DWORD Stage) {
	return (IDirect3DSurface8*)0; //MOCK
}
void WINAPI D3DDevice_SetTexture(DWORD Stage, IDirect3DBaseTexture8* pTexture) {
	return; //MOCK
}
void WINAPI D3DDevice_SetOverscanColor(D3DCOLOR Color) {
	return; //MOCK
}
void WINAPI D3DDevice_SelectVertexShaderDirect(D3DVERTEXATTRIBUTEFORMAT* pVAF, DWORD Address) {
	return; //MOCK
}
HRESULT WINAPI D3DDevice_CreateVertexShader(CONST DWORD* pDeclaration, CONST DWORD* pFunction, DWORD* pHandle, DWORD Usage) {
	return S_OK; //MOCK
}
void WINAPI D3DDevice_SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer8* pStreamData, UINT Stride) {
	return; //MOCK
}
void WINAPI D3DDevice_LoadVertexShaderProgram(CONST DWORD* pFunction, DWORD Address) {
	return; //MOCK
}
void WINAPI D3DDevice_SetShaderConstantMode(D3DSHADERCONSTANTMODE Mode) {
	return; //MOCK
}
void WINAPI D3DDevice_DeleteVertexShader(DWORD Handle) {
	return; //MOCK
}
void WINAPI D3DDevice_SetVertexShader(DWORD Handle) {
	return; //MOCK
}
void WINAPI D3DDevice_SetVertexShaderInput(DWORD Handle, UINT StreamCount, CONST D3DSTREAM_INPUT* pStreamInputs) {
	return; //MOCK
}
ULONG WINAPI D3DResource_Release(IDirect3DResource8* pThis) {
	return 0; //MOCK
}
void WINAPI D3DResource_Register(IDirect3DResource8* pThis, void* pBase) {
	return; //MOCK
}
void WINAPI D3DSurface_LockRect(IDirect3DSurface8* pThis, D3DLOCKED_RECT* pLockedRect, CONST RECT* pRect, DWORD Flags) {
	return; //MOCK
}
void WINAPI D3DDevice_DrawVerticesUP(D3DPRIMITIVETYPE PrimitiveType, UINT VertexCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride) {
	return; //MOCK
}
void WINAPI D3DDevice_DrawVertices(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT VertexCount) {
	return; //MOCK
}
void WINAPI D3DDevice_Begin(D3DPRIMITIVETYPE PrimitiveType) {
	return; //MOCK
}
void WINAPI D3DDevice_End() {
	return; //MOCK
}
UINT WINAPI Direct3D_GetAdapterModeCount(UINT Adapter) {
	return 0; //MOCK
}
HRESULT WINAPI Direct3D_EnumAdapterModes(UINT Adapter, UINT Mode, D3DDISPLAYMODE* pMode) {
	return S_OK; //MOCK
}
void WINAPI Direct3D_SetPushBufferSize(DWORD PushBufferSize, DWORD KickOffSize) {
	return; //MOCK
}
HRESULT WINAPI Direct3D_CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, void* pUnused, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DDevice8** ppReturnedDeviceInterface) {
	//TODO: Smart convert

	pPresentationParameters->BackBufferWidth = 640;
	pPresentationParameters->BackBufferHeight = 480;
	pPresentationParameters->BackBufferFormat = D3DFORMAT::D3DFMT_X8R8G8B8;
	pPresentationParameters->BackBufferCount = 2;
	pPresentationParameters->EnableAutoDepthStencil = true;
	pPresentationParameters->AutoDepthStencilFormat = D3DFORMAT::D3DFMT_D24S8;
	pPresentationParameters->SwapEffect = D3DSWAPEFFECT::D3DSWAPEFFECT_DISCARD;
	pPresentationParameters->FullScreen_PresentationInterval = 0;
	pPresentationParameters->FullScreen_RefreshRateInHz = 0;
	pPresentationParameters->Flags = 0;
	pPresentationParameters->Windowed = true;

	HRESULT result = _applicationSystem->D3D8->CreateDevice(D3DADAPTER_DEFAULT, DeviceType, _applicationSystem->MainWindow, D3DCREATE_SOFTWARE_VERTEXPROCESSING, pPresentationParameters, ppReturnedDeviceInterface);
	_applicationSystem->D3DDevice = *ppReturnedDeviceInterface;
	return result;
}
extern "C" DWORD WINAPI D3DDevice_Swap(DWORD Flags) {
	return 0; //MOCK
}
extern "C" void WINAPI D3DDevice_SetPixelShader(DWORD Handle) {
	return; //MOCK
}

BOOL WINAPI D3DDevice_GetOverlayUpdateStatus() {
	return FALSE; //MOCK
}
extern "C" void WINAPI D3DDevice_UpdateOverlay(IDirect3DSurface8* pSurface, CONST RECT* SrcRect, CONST RECT* DstRect, BOOL EnableColorKey, D3DCOLOR ColorKey) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_EnableOverlay(BOOL Enable) {
	return; //MOCK
}
