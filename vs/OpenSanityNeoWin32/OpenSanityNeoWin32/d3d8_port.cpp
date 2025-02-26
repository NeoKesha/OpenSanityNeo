#include "d3d8_port.h"
#include "xboxapi_port.h"

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
void WINAPI D3DDevice_SetRenderState_BackFillMode(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_TwoSidedLighting(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_FrontFace(DWORD Value) {
	return; //MOCK
}
void WINAPI D3DDevice_SetRenderState_LogicOp(DWORD Value) {
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

IDirect3DSurface8* WINAPI D3DDevice_GetPalette2(DWORD Stage) {
	return (IDirect3DSurface8*)0; //MOCK
}
void WINAPI D3DDevice_SetOverscanColor(D3DCOLOR Color) {
	return; //MOCK
}
void WINAPI D3DDevice_SelectVertexShaderDirect(D3DVERTEXATTRIBUTEFORMAT* pVAF, DWORD Address) {
	return; //MOCK
}
void WINAPI D3DDevice_LoadVertexShaderProgram(CONST DWORD* pFunction, DWORD Address) {
	return; //MOCK
}
void WINAPI D3DDevice_SetShaderConstantMode(D3DSHADERCONSTANTMODE Mode) {
	return; //MOCK
}
void WINAPI D3DDevice_SetVertexShaderInput(DWORD Handle, UINT StreamCount, CONST D3DSTREAM_INPUT* pStreamInputs) {
	return; //MOCK
}
void WINAPI D3DResource_Register(IDirect3DResource8* pThis, void* pBase) {
	return; //MOCK
}
void WINAPI D3DDevice_Begin(D3DPRIMITIVETYPE PrimitiveType) {
	return; //MOCK
}
void WINAPI D3DDevice_End() {
	return; //MOCK
}


void WINAPI Direct3D_SetPushBufferSize(DWORD PushBufferSize, DWORD KickOffSize) {
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

extern "C" void* WINAPI D3D_AllocContiguousMemory(DWORD Size, DWORD Alignment) {
	return XMemAlloc(Size, Alignment);
}

extern "C" void D3DFASTCALL D3DDevice_SetVertexShaderConstant1Fast(INT Register, CONST void* pConstantData) {
	return; //MOCK
}
extern "C" void D3DFASTCALL D3DDevice_SetVertexShaderConstantNotInlineFast(INT Register, CONST void* pConstantData, DWORD ConstantCount) {
	return; //MOCK
}