#pragma once
#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#include "xbox.h"
#include "main.h"

#undef IDirectSound_AddRef
#undef IDirectSound_Release
#undef IDirectSound_GetCaps
#undef IDirectSound_CreateSoundBuffer
#undef IDirectSound_GetSpeakerConfig
#undef IDirectSound_SetCooperativeLevel
#undef IDirectSound_Compact
#undef IDirectSoundBuffer_AddRef
#undef IDirectSoundBuffer_Release
#undef IDirectSoundBuffer_SetFormat
#undef IDirectSoundBuffer_SetFrequency
#undef IDirectSoundBuffer_SetVolume
#undef IDirectSoundBuffer_Play
#undef IDirectSoundBuffer_Stop
#undef IDirectSoundBuffer_GetStatus
#undef IDirectSoundBuffer_GetCurrentPosition
#undef IDirectSoundBuffer_SetCurrentPosition
#undef IDirectSoundBuffer_Lock
#undef IDirectSoundBuffer_Unlock
#undef IDirectSoundBuffer_Restore
namespace DirectSound {
	class CDirectSoundStream {
	public:
		long __stdcall SetMixBinVolumes(struct _DSMIXBINS const* arg);
	};
}

HRESULT __stdcall DirectSoundCreate(LPGUID pguidDeviceId, LPDIRECTSOUND* ppDirectSound, LPUNKNOWN pUnkOuter);

extern "C" HRESULT __stdcall DirectSoundCreateBuffer(LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer);

extern "C" HRESULT __stdcall DirectSoundCreateStream(LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream);

extern "C" ULONG __stdcall IDirectSound_AddRef(LPDIRECTSOUND pDirectSound);

extern "C" ULONG __stdcall IDirectSound_Release(LPDIRECTSOUND pDirectSound);

extern "C" HRESULT __stdcall IDirectSound_GetCaps(LPDIRECTSOUND pDirectSound, LPDSCAPS pdsc);

extern "C" HRESULT __stdcall IDirectSound_CreateSoundBuffer(LPDIRECTSOUND pDirectSound, LPCDSBUFFERDESC pdsbd, LPDIRECTSOUNDBUFFER* ppBuffer, LPUNKNOWN pUnkOuter);

extern "C" HRESULT __stdcall IDirectSound_CreateSoundStream(LPDIRECTSOUND pDirectSound, LPCDSSTREAMDESC pdssd, LPDIRECTSOUNDSTREAM* ppStream, LPUNKNOWN pUnkOuter);

extern "C" HRESULT __stdcall IDirectSound_GetSpeakerConfig(LPDIRECTSOUND pDirectSound, LPDWORD pdwSpeakerConfig);

extern "C" HRESULT __stdcall IDirectSound_SetCooperativeLevel(LPDIRECTSOUND pDirectSound, HWND hWnd, DWORD dwLevel);

extern "C" HRESULT __stdcall IDirectSound_Compact(LPDIRECTSOUND pDirectSound);

extern "C" HRESULT __stdcall IDirectSound_DownloadEffectsImage(LPDIRECTSOUND pDirectSound, LPCVOID pvImageBuffer, DWORD dwImageSize, LPCDSEFFECTIMAGELOC pImageLoc, LPDSEFFECTIMAGEDESC* ppImageDesc);

extern "C" HRESULT __stdcall IDirectSound_GetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPVOID pvData, DWORD dwDataSize);

extern "C" HRESULT __stdcall IDirectSound_SetEffectData(LPDIRECTSOUND pDirectSound, DWORD dwEffectIndex, DWORD dwOffset, LPCVOID pvData, DWORD dwDataSize, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_CommitEffectData(LPDIRECTSOUND pDirectSound);

extern "C" HRESULT __stdcall IDirectSound_EnableHeadphones(LPDIRECTSOUND pDirectSound, BOOL fEnabled);

extern "C" HRESULT __stdcall IDirectSound_SetMixBinHeadroom(LPDIRECTSOUND pDirectSound, DWORD dwMixBin, DWORD dwHeadroom);

extern "C" HRESULT __stdcall IDirectSound_SetAllParameters(LPDIRECTSOUND pDirectSound, LPCDS3DLISTENER pds3dl, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_SetOrientation(LPDIRECTSOUND pDirectSound, FLOAT xFront, FLOAT yFront, FLOAT zFront, FLOAT xTop, FLOAT yTop, FLOAT zTop, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_SetPosition(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_SetVelocity(LPDIRECTSOUND pDirectSound, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_SetDistanceFactor(LPDIRECTSOUND pDirectSound, FLOAT flDistanceFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_SetDopplerFactor(LPDIRECTSOUND pDirectSound, FLOAT flDopplerFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_SetRolloffFactor(LPDIRECTSOUND pDirectSound, FLOAT flRolloffFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_SetI3DL2Listener(LPDIRECTSOUND pDirectSound, LPCDSI3DL2LISTENER pds3dl, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSound_CommitDeferredSettings(LPDIRECTSOUND pDirectSound);

extern "C" HRESULT __stdcall IDirectSound_GetTime(LPDIRECTSOUND pDirectSound, REFERENCE_TIME* prtCurrent);

extern "C" HRESULT __stdcall IDirectSound_GetOutputLevels(LPDIRECTSOUND pDirectSound, LPDSOUTPUTLEVELS pOutputLevels, BOOL fResetPeakValues);

extern "C" HRESULT __stdcall IDirectSound_SynchPlayback(LPDIRECTSOUND pDirectSound);

extern "C" ULONG __stdcall IDirectSoundBuffer_AddRef(LPDIRECTSOUNDBUFFER pBuffer);

extern "C" ULONG __stdcall IDirectSoundBuffer_Release(LPDIRECTSOUNDBUFFER pBuffer);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetFormat(LPDIRECTSOUNDBUFFER pBuffer, LPCWAVEFORMATEX pwfxFormat);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetFrequency(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwFrequency);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lVolume);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetPitch(LPDIRECTSOUNDBUFFER pBuffer, LONG lPitch);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetLFO(LPDIRECTSOUNDBUFFER pBuffer, LPCDSLFODESC pLFODesc);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetEG(LPDIRECTSOUNDBUFFER pBuffer, LPCDSENVELOPEDESC pEnvelopeDesc);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetFilter(LPDIRECTSOUNDBUFFER pBuffer, LPCDSFILTERDESC pFilterDesc);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetHeadroom(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwHeadroom);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetOutputBuffer(LPDIRECTSOUNDBUFFER pBuffer, LPDIRECTSOUNDBUFFER pOutputBuffer);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMixBins(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMixBinVolumes(LPDIRECTSOUNDBUFFER pBuffer, LPCDSMIXBINS pMixBins);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetAllParameters(LPDIRECTSOUNDBUFFER pBuffer, LPCDS3DBUFFER pds3db, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetConeAngles(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetConeOrientation(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetConeOutsideVolume(LPDIRECTSOUNDBUFFER pBuffer, LONG lConeOutsideVolume, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMaxDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMaxDistance, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMinDistance(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flMinDistance, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetMode(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwMode, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetPosition(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetVelocity(LPDIRECTSOUNDBUFFER pBuffer, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetDistanceFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDistanceFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetDopplerFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flDopplerFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetRolloffFactor(LPDIRECTSOUNDBUFFER pBuffer, FLOAT flRolloffFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetRolloffCurve(LPDIRECTSOUNDBUFFER pBuffer, const FLOAT* pflPoints, DWORD dwPointCount, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetI3DL2Source(LPDIRECTSOUNDBUFFER pBuffer, LPCDSI3DL2BUFFER pds3db, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundBuffer_Play(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwReserved1, DWORD dwReserved2, DWORD dwFlags);

extern "C" HRESULT __stdcall IDirectSoundBuffer_PlayEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags);

extern "C" HRESULT __stdcall IDirectSoundBuffer_Stop(LPDIRECTSOUNDBUFFER pBuffer);

extern "C" HRESULT __stdcall IDirectSoundBuffer_StopEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimeStamp, DWORD dwFlags);

extern "C" HRESULT __stdcall IDirectSoundBuffer_Pause(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPause);

extern "C" HRESULT __stdcall IDirectSoundBuffer_PauseEx(LPDIRECTSOUNDBUFFER pBuffer, REFERENCE_TIME rtTimestamp, DWORD dwPause);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetPlayRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayStart, DWORD dwPlayLength);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetLoopRegion(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwLoopStart, DWORD dwLoopLength);

extern "C" HRESULT __stdcall IDirectSoundBuffer_GetStatus(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwStatus);

extern "C" HRESULT __stdcall IDirectSoundBuffer_GetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, LPDWORD pdwPlayCursor, LPDWORD pdwWriteCursor);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetCurrentPosition(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwPlayCursor);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetBufferData(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvBufferData, DWORD dwBufferBytes);

extern "C" HRESULT __stdcall IDirectSoundBuffer_Lock(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwOffset, DWORD dwBytes, LPVOID* ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID* ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags);

extern "C" HRESULT __stdcall IDirectSoundBuffer_Unlock(LPDIRECTSOUNDBUFFER pBuffer, LPVOID pvLock1, DWORD dwLockSize1, LPVOID pvLock2, DWORD dwLockSize2);

extern "C" HRESULT __stdcall IDirectSoundBuffer_Restore(LPDIRECTSOUNDBUFFER pBuffer);

extern "C" HRESULT __stdcall IDirectSoundBuffer_SetNotificationPositions(LPDIRECTSOUNDBUFFER pBuffer, DWORD dwNotifyCount, LPCDSBPOSITIONNOTIFY paNotifies);

extern "C" HRESULT __stdcall IDirectSoundBuffer_GetVoiceProperties(LPDIRECTSOUNDBUFFER pBuffer, LPDSVOICEPROPS pVoiceProps);

extern "C" HRESULT __stdcall IDirectSoundStream_SetFormat(LPDIRECTSOUNDSTREAM pStream, LPCWAVEFORMATEX pwfxFormat);

extern "C" HRESULT __stdcall IDirectSoundStream_SetFrequency(LPDIRECTSOUNDSTREAM pStream, DWORD dwFrequency);

extern "C" HRESULT __stdcall IDirectSoundStream_SetVolume(LPDIRECTSOUNDSTREAM pStream, LONG lVolume);

extern "C" HRESULT __stdcall IDirectSoundStream_SetPitch(LPDIRECTSOUNDSTREAM pStream, LONG lPitch);

extern "C" HRESULT __stdcall IDirectSoundStream_SetLFO(LPDIRECTSOUNDSTREAM pStream, LPCDSLFODESC pLFODesc);

extern "C" HRESULT __stdcall IDirectSoundStream_SetEG(LPDIRECTSOUNDSTREAM pStream, LPCDSENVELOPEDESC pEnvelopeDesc);

extern "C" HRESULT __stdcall IDirectSoundStream_SetFilter(LPDIRECTSOUNDSTREAM pStream, LPCDSFILTERDESC pFilterDesc);

extern "C" HRESULT __stdcall IDirectSoundStream_SetHeadroom(LPDIRECTSOUNDSTREAM pStream, DWORD dwHeadroom);

extern "C" HRESULT __stdcall IDirectSoundStream_SetOutputBuffer(LPDIRECTSOUNDSTREAM pStream, LPDIRECTSOUNDBUFFER pOutputBuffer);

extern "C" HRESULT __stdcall IDirectSoundStream_SetMixBins(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins);

extern "C" HRESULT __stdcall IDirectSoundStream_SetMixBinVolumes(LPDIRECTSOUNDSTREAM pStream, LPCDSMIXBINS pMixBins);

extern "C" HRESULT __stdcall IDirectSoundStream_SetAllParameters(LPDIRECTSOUNDSTREAM pStream, LPCDS3DBUFFER pds3db, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetConeAngles(LPDIRECTSOUNDSTREAM pStream, DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetConeOrientation(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetConeOutsideVolume(LPDIRECTSOUNDSTREAM pStream, LONG lConeOutsideVolume, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetMaxDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMaxDistance, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetMinDistance(LPDIRECTSOUNDSTREAM pStream, FLOAT flMinDistance, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetMode(LPDIRECTSOUNDSTREAM pStream, DWORD dwMode, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetPosition(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetVelocity(LPDIRECTSOUNDSTREAM pStream, FLOAT x, FLOAT y, FLOAT z, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetDistanceFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDistanceFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetDopplerFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flDopplerFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetRolloffFactor(LPDIRECTSOUNDSTREAM pStream, FLOAT flRolloffFactor, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetRolloffCurve(LPDIRECTSOUNDSTREAM pStream, const FLOAT* pflPoints, DWORD dwPointCount, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_SetI3DL2Source(LPDIRECTSOUNDSTREAM pStream, LPCDSI3DL2BUFFER pds3db, DWORD dwApply);

extern "C" HRESULT __stdcall IDirectSoundStream_Pause(LPDIRECTSOUNDSTREAM pStream, DWORD dwPause);

extern "C" HRESULT __stdcall IDirectSoundStream_PauseEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimestamp, DWORD dwPause);

extern "C" HRESULT __stdcall IDirectSoundStream_FlushEx(LPDIRECTSOUNDSTREAM pStream, REFERENCE_TIME rtTimeStamp, DWORD dwFlags);

extern "C" HRESULT __stdcall IDirectSoundStream_GetVoiceProperties(LPDIRECTSOUNDSTREAM pStream, LPDSVOICEPROPS pVoiceProps);

extern "C" void __stdcall DirectSoundDoWork(void);
