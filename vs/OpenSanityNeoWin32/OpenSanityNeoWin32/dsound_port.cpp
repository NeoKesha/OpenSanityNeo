#include "dsound_port.h"

//IDirectSound
extern HRESULT __stdcall DirectSoundCreate(LPGUID pguidDeviceId, LPDIRECTSOUND* ppDirectSound, LPUNKNOWN pUnkOuter) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall DirectSoundCreateBuffer(LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall DirectSoundCreateStream(LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream) {
	return S_OK; //MOCK
}

extern "C" ULONG __stdcall IDirectSound_AddRef(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
extern "C" ULONG __stdcall IDirectSound_Release(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}

extern "C" HRESULT __stdcall IDirectSound_GetCaps(LPDIRECTSOUND pDirectSound, LPDSCAPS pdsc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_CreateSoundBuffer(LPDIRECTSOUND pDirectSound, LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer, LPUNKNOWN pUnkOuter) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_CreateSoundStream(LPDIRECTSOUND pDirectSound, LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream, LPUNKNOWN pUnkOuter) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_GetSpeakerConfig(LPDIRECTSOUND pDirectSound, LPDWORD pdwSpeakerConfig) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetCooperativeLevel(LPDIRECTSOUND pDirectSound, HWND hWnd, DWORD dwLevel) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_Compact(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_DownloadEffectsImage(LPDIRECTSOUND pDirectSound, LPCVOID pvImageBuffer, DWORD dwImageSize, LPCDSEFFECTIMAGELOC pImageLoc, LPDSEFFECTIMAGEDESC* ppImageDesc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_GetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPVOID pvData, DWORD dwDataSize) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPCVOID pvData, DWORD dwDataSize, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_CommitEffectData(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_EnableHeadphones(LPDIRECTSOUND pDirectSound, BOOL fEnabled) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetMixBinHeadroom(LPDIRECTSOUND pDirectSound, DWORD dwMixBin, DWORD dwHeadroom) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetAllParameters(LPDIRECTSOUND pDirectSound, LPCDS3DLISTENER pds3dl, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetOrientation(LPDIRECTSOUND pDirectSound, FLOAT xFront, FLOAT yFront, FLOAT zFront, FLOAT xTop, FLOAT yTop, FLOAT zTop, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetPosition(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetVelocity(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetDistanceFactor(LPDIRECTSOUND pDirectSound, FLOAT flDistanceFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetDopplerFactor(LPDIRECTSOUND pDirectSound, FLOAT flDopplerFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetRolloffFactor(LPDIRECTSOUND pDirectSound, FLOAT flRolloffFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SetI3DL2Listener(LPDIRECTSOUND pDirectSound, LPCDSI3DL2LISTENER pds3dl, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_CommitDeferredSettings(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_GetTime(LPDIRECTSOUND pDirectSound, REFERENCE_TIME* prtCurrent) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_GetOutputLevels(LPDIRECTSOUND pDirectSound, LPDSOUTPUTLEVELS pOutputLevels, BOOL fResetPeakValues) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSound_SynchPlayback(LPDIRECTSOUND pDirectSound) {
	return S_OK; //MOCK
}

//IDirectSoundBuffer


extern "C" ULONG __stdcall IDirectSoundBuffer_AddRef(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
extern "C" ULONG __stdcall IDirectSoundBuffer_Release(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetFormat(LPDIRECTSOUNDBUFFER pBuffer, LPCWAVEFORMATEX pwfxFormat) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetFrequency(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwFrequency) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lVolume) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetPitch(LPDIRECTSOUNDBUFFER pBuffer, LONG lPitch) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetLFO(LPDIRECTSOUNDBUFFER pBuffer, LPCDSLFODESC pLFODesc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetEG(LPDIRECTSOUNDBUFFER pBuffer, LPCDSENVELOPEDESC pEnvelopeDesc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetFilter(LPDIRECTSOUNDBUFFER pBuffer, LPCDSFILTERDESC pFilterDesc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetHeadroom(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwHeadroom) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetOutputBuffer(LPDIRECTSOUNDBUFFER pBuffer, LPDIRECTSOUNDBUFFER pOutputBuffer) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMixBins(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMixBinVolumes(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetAllParameters(LPDIRECTSOUNDBUFFER pBuffer, LPCDS3DBUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetConeAngles(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetConeOrientation(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetConeOutsideVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lConeOutsideVolume, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMaxDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMaxDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMinDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMinDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMode(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwMode, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetPosition(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetVelocity(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetDistanceFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDistanceFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetDopplerFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDopplerFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetRolloffFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flRolloffFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetRolloffCurve(LPDIRECTSOUNDBUFFER pBuffer, const FLOAT* pflPoints, DWORD dwPointCount, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetI3DL2Source(LPDIRECTSOUNDBUFFER pBuffer, LPCDSI3DL2BUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}


extern "C" HRESULT __stdcall IDirectSoundBuffer_Play(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwReserved1, DWORD dwReserved2, DWORD dwFlags) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_PlayEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_Stop(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_StopEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_Pause(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPause) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_PauseEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimestamp, DWORD dwPause) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetPlayRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayStart, DWORD dwPlayLength) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetLoopRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwLoopStart, DWORD dwLoopLength) {
	return S_OK; //MOCK
}


extern "C" HRESULT __stdcall IDirectSoundBuffer_GetStatus(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwStatus) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_GetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwPlayCursor, LPDWORD pdwWriteCursor) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayCursor) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetBufferData(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvBufferData, DWORD dwBufferBytes) {
	return S_OK; //MOCK
}

extern "C" HRESULT __stdcall IDirectSoundBuffer_Lock(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwOffset, DWORD dwBytes, LPVOID* ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID* ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_Unlock(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvLock1, DWORD dwLockSize1, LPVOID pvLock2, DWORD dwLockSize2) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_Restore(LPDIRECTSOUNDBUFFER pBuffer) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_SetNotificationPositions(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwNotifyCount, LPCDSBPOSITIONNOTIFY paNotifies) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundBuffer_GetVoiceProperties(LPDIRECTSOUNDBUFFER pBuffer, LPDSVOICEPROPS pVoiceProps) {
	return S_OK; //MOCK
}

//IDirectSoundStream
extern "C" HRESULT __stdcall IDirectSoundStream_SetFormat(LPDIRECTSOUNDSTREAM pStream, LPCWAVEFORMATEX pwfxFormat) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetFrequency(LPDIRECTSOUNDSTREAM pStream, DWORD dwFrequency) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetVolume(LPDIRECTSOUNDSTREAM pStream, LONG lVolume) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetPitch(LPDIRECTSOUNDSTREAM pStream, LONG lPitch) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetLFO(LPDIRECTSOUNDSTREAM pStream, LPCDSLFODESC pLFODesc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetEG(LPDIRECTSOUNDSTREAM pStream, LPCDSENVELOPEDESC pEnvelopeDesc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetFilter(LPDIRECTSOUNDSTREAM pStream, LPCDSFILTERDESC pFilterDesc) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetHeadroom(LPDIRECTSOUNDSTREAM pStream, DWORD dwHeadroom) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetOutputBuffer(LPDIRECTSOUNDSTREAM pStream, LPDIRECTSOUNDBUFFER pOutputBuffer) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetMixBins(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetMixBinVolumes(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetAllParameters(LPDIRECTSOUNDSTREAM pStream, LPCDS3DBUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetConeAngles(LPDIRECTSOUNDSTREAM pStream, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetConeOrientation(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetConeOutsideVolume(LPDIRECTSOUNDSTREAM pStream, LONG lConeOutsideVolume, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetMaxDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMaxDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetMinDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMinDistance, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetMode(LPDIRECTSOUNDSTREAM pStream, DWORD dwMode, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetPosition(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetVelocity(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetDistanceFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDistanceFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetDopplerFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDopplerFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetRolloffFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flRolloffFactor, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetRolloffCurve(LPDIRECTSOUNDSTREAM pStream, const FLOAT* pflPoints, DWORD dwPointCount, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_SetI3DL2Source(LPDIRECTSOUNDSTREAM pStream, LPCDSI3DL2BUFFER pds3db, DWORD dwApply) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_Pause(LPDIRECTSOUNDSTREAM pStream, DWORD dwPause) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_PauseEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimestamp, DWORD dwPause) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_FlushEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimeStamp, DWORD dwFlags) {
	return S_OK; //MOCK
}
extern "C" HRESULT __stdcall IDirectSoundStream_GetVoiceProperties(LPDIRECTSOUNDSTREAM pStream, LPDSVOICEPROPS pVoiceProps) {
	return S_OK; //MOCK
}

extern "C" void __stdcall DirectSoundDoWork(void) {
	return;
}

long __stdcall DirectSound::CDirectSoundStream::SetMixBinVolumes(struct _DSMIXBINS const* arg) {
	return 0; //MOCK
}