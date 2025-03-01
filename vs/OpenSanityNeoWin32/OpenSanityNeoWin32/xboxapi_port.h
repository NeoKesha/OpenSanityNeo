#pragma once
#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#include "xbox.h"
#include "main.h"

typedef HRESULT(*SASM_ResolverCallback)(LPVOID pResolverUserData, BOOL isSystemInclude, LPCSTR sourceFilePath, LPCSTR includeFileName, LPSTR resolvedFilePath, DWORD resolvedFilePathSize, LPXGBUFFER* ppResolvedFile);

extern "C" XBOXAPI HANDLE __stdcall XInputOpen(IN PXPP_DEVICE_TYPE DeviceType, IN DWORD dwPort, IN DWORD dwSlot, IN PXINPUT_POLLING_PARAMETERS pPollingParameters OPTIONAL);

extern "C" XBOXAPI VOID __stdcall XInputClose(IN HANDLE hDevice);

extern "C" XBOXAPI DWORD __stdcall XInputGetState(IN HANDLE hDevice, OUT PXINPUT_STATE pState);

extern "C" XBOXAPI DWORD __stdcall XInputSetState(IN HANDLE hDevice, IN OUT PXINPUT_FEEDBACK pFeedback);

extern "C" XBOXAPI DWORD __stdcall XGetDevices(IN PXPP_DEVICE_TYPE DeviceType);

extern "C" XBOXAPI BOOL __stdcall XGetDeviceChanges(IN PXPP_DEVICE_TYPE DeviceType, OUT PDWORD pdwInsertions, OUT PDWORD pdwRemovals);

extern "C" XBOXAPI DWORD __stdcall XGetLanguage(VOID);

extern "C" XBOXAPI HANDLE __stdcall XGetSectionHandleA(IN LPCSTR pSectionName);

extern "C" XBOXAPI PVOID __stdcall XLoadSectionByHandle(IN HANDLE hSection);

extern "C" XBOXAPI BOOL __stdcall XFreeSectionByHandle(HANDLE hSection);

extern "C" XBOXAPI DWORD __stdcall XLaunchNewImageA(IN LPCSTR lpImagePath, IN PLAUNCH_DATA pLaunchData);

extern "C" XBOXAPI DWORD __stdcall XGetLaunchInfo(OUT PDWORD pdwLaunchDataType, OUT PLAUNCH_DATA pLaunchData);

extern "C" XBOXAPI DWORD __stdcall XGetDiskSectorSizeA(IN LPCSTR lpRootPathName);

extern "C" XBOXAPI HANDLE __stdcall XCalculateSignatureBegin(IN DWORD dwFlags);

extern "C" XBOXAPI DWORD __stdcall XCalculateSignatureUpdate(IN HANDLE hCalcSig, IN const BYTE* pbData, IN ULONG cbData);

extern "C" XBOXAPI DWORD __stdcall XCalculateSignatureEnd(IN HANDLE hCalcSig, OUT PVOID pSignature);

extern "C" XBOXAPI LPVOID __stdcall XPhysicalAlloc(IN SIZE_T dwSize, IN ULONG_PTR ulPhysicalAddress, IN ULONG_PTR ulAlignment, IN DWORD flProtect);

extern "C" XBOXAPI DWORD __stdcall XGetVideoFlags(VOID);

extern "C" XBOXAPI DWORD __stdcall XGetVideoStandard(VOID);

extern "C" XBOXAPI DWORD __stdcall XCreateSaveGame(IN LPCSTR lpRootPathName, IN LPCWSTR lpSaveGameName, IN DWORD dwCreationDisposition, IN DWORD dwCreateFlags, OUT LPSTR lpPathBuffer, IN UINT uSize);

extern "C" XBOXAPI HANDLE __stdcall XFindFirstSaveGame(IN LPCSTR lpRootPathName, OUT PXGAME_FIND_DATA pFindGameData);

extern "C" XBOXAPI BOOL __stdcall XFindNextSaveGame(IN HANDLE hFindGame, OUT PXGAME_FIND_DATA pFindGameData);

extern "C" XBOXAPI BOOL __stdcall XFindClose(IN HANDLE hFind);

extern "C" LPVOID __stdcall XMemAlloc(SIZE_T dwSize, DWORD dwAllocAttributes);

extern "C" VOID __stdcall XMemFree(PVOID pAddress, DWORD dwAllocAttributes);

extern "C" ULONG __stdcall XGBuffer_AddRef(XGBuffer* pThis);

extern "C" ULONG __stdcall XGBuffer_Release(XGBuffer* pThis);

extern "C" LPVOID __stdcall XGBuffer_GetBufferPointer(XGBuffer* pThis);

extern "C" DWORD __stdcall XGBuffer_GetBufferSize(XGBuffer* pThis);

extern "C" DWORD __stdcall XGSetSurfaceHeader(UINT Width, UINT Height, D3DFORMAT Format, IDirect3DSurface8* pSurface, UINT Data, UINT Pitch);

extern "C" DWORD __stdcall XGSetTextureHeader(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, D3DTextureBase* pTexture, UINT Data, UINT Pitch);

extern "C" void __stdcall XGSetVertexBufferHeader(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer8* ppVertexBuffer, UINT Data);

extern "C" HRESULT __stdcall XGSpliceVertexShaders(DWORD* pNewShader, DWORD* pcbNewShaderBufferSize, DWORD* pNewInstructionCount, const DWORD* const* ppShaderArray, DWORD NumShaders, BOOL bOptimizeResults);

extern "C" void __stdcall XGSwizzleRect(LPCVOID pSource, DWORD Pitch, LPCRECT pRect, LPVOID pDest, DWORD Width, DWORD Height, const LPPOINT pPoint, DWORD BytesPerPixel);

extern "C" void XAudioCreatePcmFormat(WORD nChannels, DWORD nSamplesPerSec, WORD wBitsPerSample, LPWAVEFORMATEX pwfx);

extern "C" HRESULT XAudioDownloadEffectsImage(LPCSTR pszImageName, LPCDSEFFECTIMAGELOC pImageLoc, DWORD dwFlags, LPDSEFFECTIMAGEDESC* ppImageDesc);

extern "C" HRESULT XFileCreateMediaObjectAsync(HANDLE hFile, DWORD dwMaxPackets, XFileMediaObject** ppMediaObject);

extern "C" void XAudioCreateAdpcmFormat(WORD nChannels, DWORD nSamplesPerSec, LPXBOXADPCMWAVEFORMAT pwfx);

extern "C" HRESULT __stdcall XMVDecoder_CreateDecoderForFile(DWORD Flags, LPCSTR szFileName, XMVDecoder** ppDecoder);

extern "C" void __stdcall XMVDecoder_CloseDecoder(XMVDecoder* pDecoder);

extern "C" void __stdcall XMVDecoder_GetVideoDescriptor(XMVDecoder* pDecoder, XMVVIDEO_DESC* pVideoDescriptor);

extern "C" HRESULT __stdcall XMVDecoder_GetNextFrame(XMVDecoder* pDecoder, IDirect3DSurface8* pSurface, XMVRESULT* pResult, DWORD* pTimeOfFrame);

extern "C" HRESULT __stdcall XMVDecoder_EnableAudioStream(XMVDecoder* pDecoder, DWORD AudioStream, DWORD Flags, DSMIXBINS* pMixBins, IDirectSoundStream** ppStream);
