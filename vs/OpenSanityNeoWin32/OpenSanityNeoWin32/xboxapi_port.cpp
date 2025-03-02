#include "xboxapi_port.h"
#include "convert.h"

extern "C" XBOXAPI DWORD WINAPI XGetLanguage(VOID) {
	return XC_LANGUAGE_ENGLISH;
}

extern "C" XBOXAPI HANDLE WINAPI XGetSectionHandleA(IN LPCSTR pSectionName) {
	HANDLE ftest = CreateFileA(pSectionName, GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, NULL);
	return ftest;
}
extern "C" XBOXAPI PVOID WINAPI XLoadSectionByHandle(IN HANDLE hSection) {
	return (PVOID)0; //MOCK
}
extern "C" XBOXAPI BOOL WINAPI XFreeSectionByHandle(HANDLE hSection) {
	return TRUE; //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XLaunchNewImageA(IN LPCSTR lpImagePath, IN PLAUNCH_DATA pLaunchData) {
	return 0;
}
extern "C" XBOXAPI DWORD WINAPI XGetLaunchInfo(OUT PDWORD pdwLaunchDataType, OUT PLAUNCH_DATA pLaunchData) {
	*pdwLaunchDataType = LDT_FROM_DEBUGGER_CMDLINE;
	LD_FROM_DEBUGGER_CMDLINE* data = (LD_FROM_DEBUGGER_CMDLINE*)pLaunchData;
	strcpy_s(data->szCmdLine, 1, "\0");
	return ERROR_SUCCESS;
}
extern "C" XBOXAPI DWORD WINAPI XGetDiskSectorSizeA(IN LPCSTR lpRootPathName) {
	char* fixedPath = ConvertFilePath(lpRootPathName);
	HANDLE hFile = CreateFileA(fixedPath, GENERIC_READ, FILE_SHARE_READ, 0, OPEN_EXISTING, FILE_FLAG_BACKUP_SEMANTICS, 0);
	DWORD sz = GetFileSize(hFile, 0);
	return sz;
}
extern "C" XBOXAPI HANDLE WINAPI XCalculateSignatureBegin(IN DWORD dwFlags) {
	return INVALID_HANDLE_VALUE; //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XCalculateSignatureUpdate(IN HANDLE hCalcSig, IN const BYTE* pbData, IN ULONG cbData) {
	return 0;  //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XCalculateSignatureEnd(IN HANDLE hCalcSig, OUT PVOID pSignature) {
	return 0;  //MOCK
}
extern "C" XBOXAPI LPVOID WINAPI XPhysicalAlloc(IN SIZE_T dwSize, IN ULONG_PTR ulPhysicalAddress, IN ULONG_PTR ulAlignment, IN DWORD flProtect) {
	return malloc(dwSize);
}
extern "C" XBOXAPI DWORD WINAPI XGetVideoFlags(VOID) {
	return XC_VIDEO_FLAGS_HDTV_480p;
}
extern "C" XBOXAPI DWORD WINAPI XGetVideoStandard(VOID) {
	return XC_VIDEO_STANDARD_PAL_I;
}
extern "C" XBOXAPI DWORD WINAPI XCreateSaveGame(IN LPCSTR lpRootPathName, IN LPCWSTR lpSaveGameName, IN DWORD dwCreationDisposition, IN DWORD dwCreateFlags, OUT LPSTR lpPathBuffer, IN UINT uSize) {
	return 0;  //MOCK
}
extern "C" XBOXAPI HANDLE WINAPI XFindFirstSaveGame(IN LPCSTR lpRootPathName, OUT PXGAME_FIND_DATA pFindGameData) {
	return INVALID_HANDLE_VALUE; //MOCK
}
extern "C" XBOXAPI BOOL WINAPI XFindNextSaveGame(IN HANDLE hFindGame, OUT PXGAME_FIND_DATA pFindGameData) {
	return FALSE; //MOCK
}
extern "C" XBOXAPI BOOL WINAPI XFindClose(IN HANDLE hFind) {
	return FALSE; //MOCK
}
extern "C" LPVOID WINAPI XMemAlloc(SIZE_T dwSize, DWORD dwAllocAttributes) { 
	return malloc(dwSize); 
}
extern "C" VOID WINAPI XMemFree(PVOID pAddress, DWORD dwAllocAttributes) { 
	if (pAddress == 0) {
		int a = 0;
	}
	free(pAddress); 
}


extern "C" ULONG WINAPI XGBuffer_AddRef(XGBuffer* pThis) {
	return ((ID3DXBuffer*)pThis)->AddRef();
}
extern "C" ULONG WINAPI XGBuffer_Release(XGBuffer* pThis) {
	return ((ID3DXBuffer*)pThis)->Release();
}
extern "C" LPVOID WINAPI XGBuffer_GetBufferPointer(XGBuffer* pThis) {
	return ((ID3DXBuffer*)pThis)->GetBufferPointer();
}
extern "C" DWORD WINAPI XGBuffer_GetBufferSize(XGBuffer* pThis) {
	return ((ID3DXBuffer*)pThis)->GetBufferSize();
}


ULONG WINAPI XGBuffer::AddRef() {
	return XGBuffer_AddRef(this);
}
ULONG WINAPI XGBuffer::Release() {
	return XGBuffer_Release(this);
}
LPVOID WINAPI XGBuffer::GetBufferPointer() {
	return XGBuffer_GetBufferPointer(this);
}
DWORD  WINAPI XGBuffer::GetBufferSize() {
	return XGBuffer_GetBufferSize(this);
}

extern "C" DWORD WINAPI XGSetSurfaceHeader(UINT Width, UINT Height, D3DFORMAT Format, IDirect3DSurface8* pSurface, UINT Data, UINT Pitch) {
	return 0; //MOCK
}

extern "C" DWORD WINAPI XGSetTextureHeader(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, D3DTextureBase* pTexture, UINT Data, UINT Pitch) {
	IDirect3DTexture8* tmp;
	_applicationSystem->D3DDevice->CreateTexture(Width, Height, Levels, Usage, ConvertD3DFormat(Format), Pool, &tmp);
	HackTextureReflection* obs = (HackTextureReflection*)tmp;
	pTexture->resource.data = obs->dataPtr;
	pTexture->resource.common = obs->baseptr;
	pTexture->resource.lock = 0;
	pTexture->format = obs->format;
	pTexture->size = obs->byteLength;

	RegisterTexture(tmp);

	_applicationSystem->lastTexture = pTexture;
	_applicationSystem->textureTaken = FALSE;
	return pTexture->size; //WTF
}
extern "C" void WINAPI XGSetVertexBufferHeader(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer8* ppVertexBuffer, UINT Data) {
	return; //MOCK
}
extern "C" HRESULT WINAPI XGSpliceVertexShaders(DWORD* pNewShader, DWORD* pcbNewShaderBufferSize, DWORD* pNewInstructionCount, CONST DWORD* CONST* ppShaderArray, DWORD NumShaders, BOOL bOptimizeResults) {
	return S_OK; //MOCK
}
extern "C" void WINAPI XGSwizzleRect(LPCVOID pSource, DWORD Pitch, LPCRECT  pRect, LPVOID pDest, DWORD Width, DWORD Height, CONST LPPOINT pPoint, DWORD BytesPerPixel) {
	//TODO REAL UNSWIZZLE!
	memcpy(pDest, pSource, Width * Height * BytesPerPixel);
	return; //MOCK
}
extern "C" void XAudioCreatePcmFormat(WORD nChannels, DWORD nSamplesPerSec, WORD wBitsPerSample, LPWAVEFORMATEX pwfx) {
	return; //MOCK
}
extern "C" HRESULT XAudioDownloadEffectsImage(LPCSTR pszImageName, LPCDSEFFECTIMAGELOC pImageLoc, DWORD dwFlags, LPDSEFFECTIMAGEDESC* ppImageDesc) {
	return 0; //MOCK
}
extern "C" HRESULT XFileCreateMediaObjectAsync(HANDLE hFile, DWORD dwMaxPackets, XFileMediaObject** ppMediaObject) {
	return 0; //MOCK
}

extern "C" void XAudioCreateAdpcmFormat(WORD nChannels, DWORD nSamplesPerSec, LPXBOXADPCMWAVEFORMAT pwfx) {
	return; //MOCK
}

extern "C" HRESULT __stdcall XMVDecoder_CreateDecoderForFile(DWORD Flags, LPCSTR szFileName, XMVDecoder** ppDecoder) {
	return 0;
}

extern "C" void __stdcall XMVDecoder_CloseDecoder(XMVDecoder* pDecoder) {
	return; //MOCK
}

extern "C" void __stdcall XMVDecoder_GetVideoDescriptor(XMVDecoder* pDecoder, XMVVIDEO_DESC* pVideoDescriptor) {
	return; //MOCK
}

extern "C" HRESULT __stdcall XMVDecoder_GetNextFrame(XMVDecoder* pDecoder, IDirect3DSurface8* pSurface, XMVRESULT* pResult, DWORD* pTimeOfFrame) {
	return S_OK; //MOCK
}

extern "C" HRESULT __stdcall XMVDecoder_EnableAudioStream(XMVDecoder* pDecoder, DWORD AudioStream, DWORD Flags, DSMIXBINS* pMixBins, IDirectSoundStream** ppStream) {
	return S_OK; //MOCK
}