#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#include "xbox.h"

extern "C" int main(int argc, char** argv);
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {
	main(0,0);
};

extern "C" LPVOID WINAPI XMemAlloc(SIZE_T dwSize, DWORD dwAllocAttributes) { return malloc(dwSize); }
extern "C" VOID WINAPI XMemFree(PVOID pAddress, DWORD dwAllocAttributes) { free(pAddress); }

extern "C" void _fpmath() { }
extern "C" void __onexitinit() { }
extern "C" void _fptrap() { }
extern "C" void __initstdio() { }
extern "C" void __endstdio() { }
extern "C" void __cdecl terminate() { }

extern "C" void __stdcall RtlLeaveCriticalSectionAndRegion(int arg) { return; }
extern "C" void __stdcall MmQueryAddressProtect(int arg) { return; }
extern "C" void __stdcall MmClaimGpuInstanceMemory(int arg1, int arg2) { return; }
extern "C" void __stdcall KeStallExecutionProcessor(int arg) { return; }
extern "C" int __stdcall mainXapiStartup(int arg) { return 0; }
extern "C" void __stdcall MmFreeContiguousMemory(int arg) { return; }
extern "C" void __stdcall XapiBootToDash(int arg1, int arg2, int arg3) { return; }
extern "C" void __stdcall MmSetAddressProtect(int arg1, int arg2, int arg3) { return; }
extern "C" void TtfdDbgPrint() { return; }
extern "C" void __stdcall USBD_Init(int arg1, int arg2) { return; }
extern "C" void __cdecl sprintf() { return; }

extern "C" DWORD D3D__DirtyFlags = 0;
extern "C" DWORD D3D__TextureState[4][32] = {};
extern "C" DWORD D3D__RenderState[166] = {};
extern "C" XPP_DEVICE_TYPE XDEVICE_TYPE_GAMEPAD_TABLE = {};
extern "C" const DWORD D3DDIRTYFROMRENDERSTATE[46] = {};

extern "C" void __stdcall RtlSizeHeap(int arg1, int arg2, int arg3) { return; }

//WINBASEAPI SIZE_T WINAPI HeapSize(IN HANDLE hHeap, IN DWORD dwFlags, IN LPCVOID lpMem) {
//	return 0;
//}

extern "C" XBOXAPI DWORD WINAPI XGetLanguage(VOID) {
	return XC_LANGUAGE_ENGLISH;
}
	
extern "C" XBOXAPI HANDLE WINAPI XGetSectionHandleA(IN LPCSTR pSectionName) {
	return INVALID_HANDLE_VALUE; //MOCK
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
	return ERROR_SUCCESS; //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XGetDiskSectorSizeA(IN LPCSTR lpRootPathName) {
	return 0;  //MOCK
}
extern "C" XBOXAPI HANDLE WINAPI XCalculateSignatureBegin(IN DWORD dwFlags) {
	return INVALID_HANDLE_VALUE; //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XCalculateSignatureUpdate(IN HANDLE hCalcSig, IN const BYTE *pbData, IN ULONG cbData) {
	return 0;  //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XCalculateSignatureEnd(IN HANDLE hCalcSig, OUT PVOID pSignature) {
	return 0;  //MOCK
}
extern "C" XBOXAPI BOOL WINAPI XSetFileCacheSize(IN SIZE_T dwCacheSize) {
	//return SetSystemFileCacheSize(dwCacheSize, dwCacheSize, 0);
	return FALSE; //MOCK
}
extern "C" XBOXAPI LPVOID WINAPI XPhysicalAlloc(IN SIZE_T dwSize, IN ULONG_PTR ulPhysicalAddress, IN ULONG_PTR ulAlignment, IN DWORD flProtect) {
	return (LPVOID)malloc(dwSize); //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XGetVideoFlags(VOID) {
	return XC_VIDEO_FLAGS_WIDESCREEN | XC_VIDEO_FLAGS_HDTV_1080i;
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

extern "C" HRESULT __stdcall XMVDecoder_CreateDecoderForFile(DWORD Flags, LPCSTR szFileName, XMVDecoder **ppDecoder) {
	return 0;
}

extern "C" void __stdcall XMVDecoder_CloseDecoder(XMVDecoder *pDecoder) {
	return; //MOCK
}

extern "C" void __stdcall XMVDecoder_GetVideoDescriptor(XMVDecoder *pDecoder, XMVVIDEO_DESC *pVideoDescriptor) {
	return; //MOCK
}

extern "C" HRESULT __stdcall XMVDecoder_GetNextFrame(XMVDecoder *pDecoder, IDirect3DSurface8 *pSurface, XMVRESULT *pResult, DWORD *pTimeOfFrame) {
	return S_OK; //MOCK
}

extern "C" HRESULT __stdcall XMVDecoder_EnableAudioStream(XMVDecoder *pDecoder, DWORD AudioStream, DWORD Flags, DSMIXBINS *pMixBins, IDirectSoundStream **ppStream) {
	return S_OK; //MOCK
}

extern "C" XBOXAPI HANDLE WINAPI XInputOpen(IN PXPP_DEVICE_TYPE DeviceType, IN DWORD dwPort, IN DWORD dwSlot, IN PXINPUT_POLLING_PARAMETERS pPollingParameters OPTIONAL) {
	return INVALID_HANDLE_VALUE; //MOCK
}
extern "C" XBOXAPI VOID WINAPI XInputClose(IN HANDLE hDevice) {
	return; //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XInputGetState(IN HANDLE hDevice, OUT PXINPUT_STATE  pState) {
	return 0; //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XInputSetState( IN HANDLE hDevice, IN OUT PXINPUT_FEEDBACK pFeedback ) {
	return 0; //MOCK
}
extern "C" XBOXAPI DWORD WINAPI XGetDevices(IN PXPP_DEVICE_TYPE DeviceType) {
	return 0; //MOCK
}
extern "C" XBOXAPI BOOL WINAPI XGetDeviceChanges(IN PXPP_DEVICE_TYPE DeviceType, OUT PDWORD pdwInsertions, OUT PDWORD pdwRemovals) {
	return FALSE; //MOCK
}

//IDirectSound
extern HRESULT __stdcall DirectSoundCreate(LPGUID pguidDeviceId, LPDIRECTSOUND* ppDirectSound, LPUNKNOWN pUnkOuter) {
	return S_OK; //MOCK
}
STDAPI DirectSoundCreateBuffer(LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer) {
	return S_OK; //MOCK
}
STDAPI DirectSoundCreateStream(LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream) {
	return S_OK; //MOCK
}

#undef IDirectSound_AddRef
#undef IDirectSound_Release
STDAPI_(ULONG) IDirectSound_AddRef(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
STDAPI_(ULONG) IDirectSound_Release(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
#undef IDirectSound_GetCaps
#undef IDirectSound_CreateSoundBuffer
#undef IDirectSound_GetSpeakerConfig
#undef IDirectSound_SetCooperativeLevel
#undef IDirectSound_Compact
STDAPI IDirectSound_GetCaps(LPDIRECTSOUND pDirectSound, LPDSCAPS pdsc) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_CreateSoundBuffer(LPDIRECTSOUND pDirectSound, LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer, LPUNKNOWN pUnkOuter) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_CreateSoundStream(LPDIRECTSOUND pDirectSound, LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream, LPUNKNOWN pUnkOuter) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_GetSpeakerConfig(LPDIRECTSOUND pDirectSound, LPDWORD pdwSpeakerConfig) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetCooperativeLevel(LPDIRECTSOUND pDirectSound, HWND hWnd, DWORD dwLevel) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_Compact(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_DownloadEffectsImage(LPDIRECTSOUND pDirectSound, LPCVOID pvImageBuffer, DWORD dwImageSize, LPCDSEFFECTIMAGELOC pImageLoc, LPDSEFFECTIMAGEDESC* ppImageDesc) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_GetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPVOID pvData, DWORD dwDataSize) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPCVOID pvData, DWORD dwDataSize, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_CommitEffectData(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_EnableHeadphones(LPDIRECTSOUND pDirectSound, BOOL fEnabled) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetMixBinHeadroom(LPDIRECTSOUND pDirectSound, DWORD dwMixBin, DWORD dwHeadroom) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetAllParameters(LPDIRECTSOUND pDirectSound, LPCDS3DLISTENER pds3dl, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetOrientation(LPDIRECTSOUND pDirectSound, FLOAT xFront, FLOAT yFront, FLOAT zFront, FLOAT xTop, FLOAT yTop, FLOAT zTop, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetPosition(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetVelocity(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetDistanceFactor(LPDIRECTSOUND pDirectSound, FLOAT flDistanceFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetDopplerFactor(LPDIRECTSOUND pDirectSound, FLOAT flDopplerFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetRolloffFactor(LPDIRECTSOUND pDirectSound, FLOAT flRolloffFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SetI3DL2Listener(LPDIRECTSOUND pDirectSound, LPCDSI3DL2LISTENER pds3dl, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_CommitDeferredSettings(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_GetTime(LPDIRECTSOUND pDirectSound, REFERENCE_TIME *prtCurrent) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_GetOutputLevels(LPDIRECTSOUND pDirectSound, LPDSOUTPUTLEVELS pOutputLevels, BOOL fResetPeakValues) {
	return S_OK; //MOCK
}
STDAPI IDirectSound_SynchPlayback(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}

//IDirectSoundBuffer

#undef IDirectSoundBuffer_AddRef
#undef IDirectSoundBuffer_Release
#undef IDirectSoundBuffer_SetFormat
#undef IDirectSoundBuffer_SetFrequency
#undef IDirectSoundBuffer_SetVolume
STDAPI_(ULONG) IDirectSoundBuffer_AddRef(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
STDAPI_(ULONG) IDirectSoundBuffer_Release(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetFormat(LPDIRECTSOUNDBUFFER pBuffer, LPCWAVEFORMATEX pwfxFormat) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetFrequency(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwFrequency) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lVolume) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetPitch(LPDIRECTSOUNDBUFFER pBuffer, LONG lPitch) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetLFO(LPDIRECTSOUNDBUFFER pBuffer, LPCDSLFODESC pLFODesc) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetEG(LPDIRECTSOUNDBUFFER pBuffer, LPCDSENVELOPEDESC pEnvelopeDesc) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetFilter(LPDIRECTSOUNDBUFFER pBuffer, LPCDSFILTERDESC pFilterDesc) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetHeadroom(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwHeadroom) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetOutputBuffer(LPDIRECTSOUNDBUFFER pBuffer, LPDIRECTSOUNDBUFFER pOutputBuffer) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetMixBins(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetMixBinVolumes(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetAllParameters(LPDIRECTSOUNDBUFFER pBuffer, LPCDS3DBUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetConeAngles(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetConeOrientation(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetConeOutsideVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lConeOutsideVolume, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetMaxDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMaxDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetMinDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMinDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetMode(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwMode, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetPosition(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetVelocity(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetDistanceFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDistanceFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetDopplerFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDopplerFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetRolloffFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flRolloffFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetRolloffCurve(LPDIRECTSOUNDBUFFER pBuffer, const FLOAT *pflPoints, DWORD dwPointCount, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetI3DL2Source(LPDIRECTSOUNDBUFFER pBuffer, LPCDSI3DL2BUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}

#undef IDirectSoundBuffer_Play
#undef IDirectSoundBuffer_Stop
STDAPI IDirectSoundBuffer_Play(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwReserved1, DWORD dwReserved2, DWORD dwFlags) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_PlayEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_Stop(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_StopEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_Pause(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPause) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_PauseEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimestamp, DWORD dwPause) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetPlayRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayStart, DWORD dwPlayLength) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetLoopRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwLoopStart, DWORD dwLoopLength) {
	return S_OK; //MOCK
}

#undef IDirectSoundBuffer_GetStatus
#undef IDirectSoundBuffer_GetCurrentPosition
#undef IDirectSoundBuffer_SetCurrentPosition
STDAPI IDirectSoundBuffer_GetStatus(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwStatus) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_GetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwPlayCursor, LPDWORD pdwWriteCursor) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayCursor) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetBufferData(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvBufferData, DWORD dwBufferBytes) {
	return S_OK; //MOCK
}
#undef IDirectSoundBuffer_Lock
#undef IDirectSoundBuffer_Unlock
#undef IDirectSoundBuffer_Restore
STDAPI IDirectSoundBuffer_Lock(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwOffset, DWORD dwBytes, LPVOID *ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID *ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_Unlock(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvLock1, DWORD dwLockSize1, LPVOID pvLock2, DWORD dwLockSize2) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_Restore(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_SetNotificationPositions(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwNotifyCount, LPCDSBPOSITIONNOTIFY paNotifies) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundBuffer_GetVoiceProperties(LPDIRECTSOUNDBUFFER pBuffer, LPDSVOICEPROPS pVoiceProps) {
	return S_OK; //MOCK
}

//IDirectSoundStream
STDAPI IDirectSoundStream_SetFormat(LPDIRECTSOUNDSTREAM pStream, LPCWAVEFORMATEX pwfxFormat) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetFrequency(LPDIRECTSOUNDSTREAM pStream, DWORD dwFrequency) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetVolume(LPDIRECTSOUNDSTREAM pStream, LONG lVolume) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetPitch(LPDIRECTSOUNDSTREAM pStream, LONG lPitch) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetLFO(LPDIRECTSOUNDSTREAM pStream, LPCDSLFODESC pLFODesc) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetEG(LPDIRECTSOUNDSTREAM pStream, LPCDSENVELOPEDESC pEnvelopeDesc) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetFilter(LPDIRECTSOUNDSTREAM pStream, LPCDSFILTERDESC pFilterDesc) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetHeadroom(LPDIRECTSOUNDSTREAM pStream, DWORD dwHeadroom) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetOutputBuffer(LPDIRECTSOUNDSTREAM pStream, LPDIRECTSOUNDBUFFER pOutputBuffer) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetMixBins(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetMixBinVolumes(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetAllParameters(LPDIRECTSOUNDSTREAM pStream, LPCDS3DBUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetConeAngles(LPDIRECTSOUNDSTREAM pStream, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetConeOrientation(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetConeOutsideVolume(LPDIRECTSOUNDSTREAM pStream, LONG lConeOutsideVolume, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetMaxDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMaxDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetMinDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMinDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetMode(LPDIRECTSOUNDSTREAM pStream, DWORD dwMode, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetPosition(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetVelocity(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetDistanceFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDistanceFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetDopplerFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDopplerFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetRolloffFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flRolloffFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetRolloffCurve(LPDIRECTSOUNDSTREAM pStream, const FLOAT *pflPoints, DWORD dwPointCount, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_SetI3DL2Source(LPDIRECTSOUNDSTREAM pStream, LPCDSI3DL2BUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_Pause(LPDIRECTSOUNDSTREAM pStream, DWORD dwPause) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_PauseEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimestamp, DWORD dwPause) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_FlushEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return S_OK; //MOCK
}
STDAPI IDirectSoundStream_GetVoiceProperties(LPDIRECTSOUNDSTREAM pStream, LPDSVOICEPROPS pVoiceProps) {
	return S_OK; //MOCK
}

STDAPI_(void) DirectSoundDoWork(void) {
	return;
}

//D3DDevice
extern "C" ULONG WINAPI D3DDevice_AddRef() {
	return 0; //MOCK
}
extern "C" ULONG WINAPI D3DDevice_Release() {
	return 0; //MOCK
}
extern "C" void WINAPI D3DDevice_GetDirect3D(IDirect3D8** ppD3D8) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetDeviceCaps(D3DCAPS8 *pCaps) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetDisplayMode(D3DDISPLAYMODE *pMode) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS *pParameters) {
	return; //MOCK
}
extern "C" HRESULT WINAPI D3DDevice_Reset(D3DPRESENT_PARAMETERS *pPresentationParameters) {
	return S_OK; //MOCK
}
extern "C" void WINAPI D3DDevice_GetRasterStatus(D3DRASTER_STATUS *pRasterStatus) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetFlickerFilter(DWORD Filter) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetSoftDisplayFilter(BOOL Enable) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetGammaRamp(DWORD Flags, CONST D3DGAMMARAMP *pRamp) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetGammaRamp(D3DGAMMARAMP *pRamp) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_CopyRects(IDirect3DSurface8* pSourceSurface, CONST RECT *pSourceRectsArray, UINT cRects, IDirect3DSurface8* pDestinationSurface, CONST POINT *pDestPointsArray) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetCopyRectsState(CONST D3DCOPYRECTSTATE *pCopyRectState, CONST D3DCOPYRECTROPSTATE *pCopyRectRopState) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetCopyRectsState(D3DCOPYRECTSTATE *pCopyRectState, D3DCOPYRECTROPSTATE *pCopyRectRopState) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderTarget(IDirect3DSurface8* pRenderTarget, IDirect3DSurface8* pNewZStencil) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_Clear(DWORD Count, CONST D3DRECT *pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX *pMatrix) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX *pMatrix) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_MultiplyTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX *pMatrix) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetViewport(CONST D3DVIEWPORT8 *pViewport) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetViewport(D3DVIEWPORT8 *pViewport) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetMaterial(CONST D3DMATERIAL8 *pMaterial) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetMaterial(D3DMATERIAL8 *pMaterial) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetBackMaterial(CONST D3DMATERIAL8 *pMaterial) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_GetBackMaterial(D3DMATERIAL8 *pMaterial) {
	return; //MOCK
}
extern "C" HRESULT WINAPI D3DDevice_SetLight(DWORD Index, CONST D3DLIGHT8 *pLight) {
	return S_OK; //MOCK
}
extern "C" void WINAPI D3DDevice_GetLight(DWORD Index, D3DLIGHT8 *pLight) {
	return; //MOCK
}
extern "C" HRESULT WINAPI D3DDevice_LightEnable(DWORD Index, BOOL Enable) {
	return S_OK; //MOCK
}
extern "C" void WINAPI D3DDevice_GetLightEnable(DWORD Index, BOOL *pEnable) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderStateNotInline(D3DRENDERSTATETYPE State, DWORD Value) {
	return; //MOCK
}
extern "C" HRESULT WINAPI D3DDevice_SetRenderState_ParameterCheck(D3DRENDERSTATETYPE State, DWORD Value) {
	return S_OK; //MOCK
}
extern "C" void D3DFASTCALL D3DDevice_SetRenderState_Simple(DWORD Method, DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_PSTextureModes(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_VertexBlend(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_FogColor(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_FillMode(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_BackFillMode(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_TwoSidedLighting(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_NormalizeNormals(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_ZEnable(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_StencilEnable(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_StencilFail(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_CullMode(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_FrontFace(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_TextureFactor(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_ZBias(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_LogicOp(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_EdgeAntiAlias(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_MultiSampleAntiAlias(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_MultiSampleMask(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_MultiSampleMode(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_MultiSampleRenderTargetMode(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_ShadowFunc(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_LineWidth(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_SampleAlpha(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_Dxt1NoiseEnable(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_YuvEnable(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_OcclusionCullEnable(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_StencilCullEnable(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_RopZCmpAlwaysRead(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_RopZRead(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetRenderState_DoNotCullUncompressed(DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetTextureStageStateNotInline(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) {
	return; //MOCK
}
extern "C" HRESULT WINAPI D3DDevice_SetTextureState_ParameterCheck(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) {
	return S_OK; //MOCK
}
extern "C" void WINAPI D3DDevice_SetTextureState_BumpEnv(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetTextureState_TexCoordIndex(DWORD Stage, DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetTextureState_BorderColor(DWORD Stage, DWORD Value) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetTextureState_ColorKeyColor(DWORD Stage, DWORD Value) {
	return; //MOCK
}

extern "C" void WINAPI D3DDevice_BlockUntilVerticalBlank() {
	return;
}

extern "C" IDirect3DSurface8* WINAPI D3DDevice_GetRenderTarget2() {
	return (IDirect3DSurface8*)0; //MOCK
}
extern "C" IDirect3DSurface8* WINAPI D3DDevice_GetDepthStencilSurface2() {
	return (IDirect3DSurface8*)0; //MOCK
}
extern "C" IDirect3DSurface8* WINAPI D3DDevice_GetPalette2(DWORD Stage) {
	return (IDirect3DSurface8*)0; //MOCK
}
extern "C" void WINAPI D3DDevice_SetTexture(DWORD Stage, IDirect3DBaseTexture8* pTexture) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetOverscanColor(D3DCOLOR Color) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SelectVertexShaderDirect(D3DVERTEXATTRIBUTEFORMAT *pVAF, DWORD Address) {
	return; //MOCK
}
extern "C" HRESULT WINAPI D3DDevice_CreateVertexShader(CONST DWORD *pDeclaration, CONST DWORD *pFunction, DWORD *pHandle, DWORD Usage) {
	return S_OK; //MOCK
}
extern "C" void WINAPI D3DDevice_SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer8* pStreamData, UINT Stride) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_LoadVertexShaderProgram(CONST DWORD *pFunction, DWORD Address) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetShaderConstantMode(D3DSHADERCONSTANTMODE Mode) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_DeleteVertexShader(DWORD Handle) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetVertexShader(DWORD Handle) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_SetVertexShaderInput(DWORD Handle, UINT StreamCount, CONST D3DSTREAM_INPUT* pStreamInputs) {
	return; //MOCK
}
extern "C" ULONG WINAPI D3DResource_Release(IDirect3DResource8* pThis) {
	return 0; //MOCK
}
extern "C" void WINAPI D3DResource_Register(IDirect3DResource8* pThis, void *pBase) {
	return; //MOCK
}
extern "C" void WINAPI D3DSurface_LockRect(IDirect3DSurface8* pThis, D3DLOCKED_RECT *pLockedRect,CONST RECT *pRect, DWORD Flags) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_DrawVerticesUP(D3DPRIMITIVETYPE PrimitiveType, UINT VertexCount, CONST void *pVertexStreamZeroData, UINT VertexStreamZeroStride) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_DrawVertices(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT VertexCount) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_Begin(D3DPRIMITIVETYPE PrimitiveType) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_End() {
	return; //MOCK
}
extern "C" UINT WINAPI Direct3D_GetAdapterModeCount(UINT Adapter) {
	return 0; //MOCK
}
extern "C" HRESULT WINAPI Direct3D_EnumAdapterModes(UINT Adapter, UINT Mode, D3DDISPLAYMODE *pMode) {
	return S_OK; //MOCK
}
extern "C" void WINAPI Direct3D_SetPushBufferSize(DWORD PushBufferSize, DWORD KickOffSize) {
	return; //MOCK
}
extern "C" HRESULT WINAPI Direct3D_CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, void *pUnused, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS *pPresentationParameters, IDirect3DDevice8** ppReturnedDeviceInterface) {
	return S_OK; //MOCK
}
extern "C" DWORD WINAPI D3DDevice_Swap(DWORD Flags) {
	return 0; //MOCK
}
extern "C" void WINAPI D3DDevice_SetPixelShader(DWORD Handle) {
	return; //MOCK
}
extern "C" IDirect3DSurface8* WINAPI D3DTexture_GetSurfaceLevel2(IDirect3DTexture8* pThis, UINT Level) {
	return (IDirect3DSurface8*)0; //MOCK
}
extern "C" void WINAPI D3DTexture_LockRect(IDirect3DTexture8*pThis, UINT Level, D3DLOCKED_RECT *pLockedRect, CONST RECT *pRect, DWORD Flags) {
	return; //MOCK
}
extern "C" void* WINAPI D3D_AllocContiguousMemory(DWORD Size, DWORD Alignment) {
	return (void*)0; //MOCK
}
extern "C" BOOL WINAPI D3DDevice_GetOverlayUpdateStatus() {
	return FALSE; //MOCK
}
extern "C" void WINAPI D3DDevice_UpdateOverlay(IDirect3DSurface8* pSurface, CONST RECT *SrcRect, CONST RECT *DstRect, BOOL EnableColorKey, D3DCOLOR ColorKey) {
	return; //MOCK
}
extern "C" void WINAPI D3DDevice_EnableOverlay(BOOL Enable) {
	return; //MOCK
}

extern "C" ULONG WINAPI XGBuffer_AddRef(XGBuffer *pThis) {
	return 0; //MOCK
}
extern "C" ULONG WINAPI XGBuffer_Release(XGBuffer *pThis) {
	return 0; //MOCK
}
extern "C" LPVOID WINAPI XGBuffer_GetBufferPointer(XGBuffer *pThis) {
	return (LPVOID)0; //MOCK
}
extern "C" DWORD WINAPI XGBuffer_GetBufferSize(XGBuffer *pThis) {
	return 0; //MOCK
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

extern "C" void D3DFASTCALL D3DDevice_SetVertexShaderConstant1Fast(INT Register, CONST void *pConstantData) {
	return; //MOCK
}
extern "C" void D3DFASTCALL D3DDevice_SetVertexShaderConstantNotInlineFast(INT Register, CONST void *pConstantData, DWORD ConstantCount) {
	return; //MOCK
}
extern "C" DWORD WINAPI XGSetSurfaceHeader(UINT Width, UINT Height, D3DFORMAT Format,IDirect3DSurface8* pSurface, UINT Data, UINT Pitch) {
	return 0; //MOCK
}
extern "C" DWORD WINAPI XGSetTextureHeader(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture8* pTexture, UINT Data, UINT Pitch) {
	return 0; //MOCK
}
extern "C" void WINAPI XGSetVertexBufferHeader(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer8 *ppVertexBuffer, UINT Data) {
	return; //MOCK
}

typedef HRESULT (*SASM_ResolverCallback)(LPVOID pResolverUserData, BOOL isSystemInclude, LPCSTR sourceFilePath, LPCSTR includeFileName, LPSTR resolvedFilePath, DWORD resolvedFilePathSize, LPXGBUFFER* ppResolvedFile);

extern "C" HRESULT WINAPI XGAssembleShader(LPCSTR pSourceFileName, LPCVOID pSrcData, UINT SrcDataLen,  DWORD Flags, LPXGBUFFER* pConstants, LPXGBUFFER* pCompiledShader, LPXGBUFFER* pErrorLog, LPXGBUFFER* pListing, SASM_ResolverCallback pResolver, LPVOID pResolverUserData, LPDWORD pShaderType) {
	return S_OK; //MOCK
}
extern "C" HRESULT WINAPI XGSpliceVertexShaders (DWORD* pNewShader, DWORD* pcbNewShaderBufferSize, DWORD* pNewInstructionCount, CONST DWORD* CONST* ppShaderArray, DWORD NumShaders, BOOL bOptimizeResults) {
	return S_OK; //MOCK
}
extern "C" void WINAPI XGSwizzleRect(LPCVOID pSource, DWORD Pitch, LPCRECT  pRect, LPVOID pDest, DWORD Width, DWORD Height, CONST LPPOINT pPoint, DWORD BytesPerPixel) {
	return; //MOCK
}
STDAPI_(void) XAudioCreatePcmFormat(WORD nChannels, DWORD nSamplesPerSec, WORD wBitsPerSample, LPWAVEFORMATEX pwfx) {
	return; //MOCK
}
STDAPI XAudioDownloadEffectsImage(LPCSTR pszImageName, LPCDSEFFECTIMAGELOC pImageLoc, DWORD dwFlags, LPDSEFFECTIMAGEDESC *ppImageDesc) {
	return 0; //MOCK
}
STDAPI XFileCreateMediaObjectAsync(HANDLE hFile, DWORD dwMaxPackets, XFileMediaObject **ppMediaObject) {
	return 0; //MOCK
}

namespace DirectSound {
	class CDirectSoundStream{
	public:
		long __stdcall SetMixBinVolumes(struct _DSMIXBINS const * arg);
	};
}

STDAPI_(void) XAudioCreateAdpcmFormat(WORD nChannels, DWORD nSamplesPerSec, LPXBOXADPCMWAVEFORMAT pwfx) {
	return; //MOCK
}
long __stdcall DirectSound::CDirectSoundStream::SetMixBinVolumes(struct _DSMIXBINS const * arg) {
	return 0; //MOCK
}