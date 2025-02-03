#include <Windows.h>
#include <d3d8.h>
#include <dsound.h>
#pragma once
#define XBOXAPI
typedef struct _XPP_DEVICE_TYPE
{
    ULONG Reserved[3];
} XPP_DEVICE_TYPE, * PXPP_DEVICE_TYPE;

#define XC_LANGUAGE_ENGLISH 1

#define MAX_LAUNCH_DATA_SIZE 3072

typedef struct _LAUNCH_DATA
{
    BYTE Data[MAX_LAUNCH_DATA_SIZE];
} LAUNCH_DATA, * PLAUNCH_DATA;

#define XC_VIDEO_FLAGS_WIDESCREEN   0x00000001
#define XC_VIDEO_FLAGS_HDTV_720p    0x00000002
#define XC_VIDEO_FLAGS_HDTV_1080i   0x00000004
#define XC_VIDEO_FLAGS_HDTV_480p    0x00000008
#define XC_VIDEO_FLAGS_LETTERBOX    0x00000010
#define XC_VIDEO_FLAGS_PAL_60Hz     0x00000040

#define XC_VIDEO_STANDARD_NTSC_M    1
#define XC_VIDEO_STANDARD_NTSC_J    2
#define XC_VIDEO_STANDARD_PAL_I     3

#define MAX_GAMENAME     128
typedef struct _XGAME_FIND_DATA {
    WIN32_FIND_DATAA wfd;
    CHAR szSaveGameDirectory[MAX_PATH];
    WCHAR szSaveGameName[MAX_GAMENAME];
} XGAME_FIND_DATA, * PXGAME_FIND_DATA;

typedef struct XMVDecoder XMVDecoder;
struct XMVDecoder
{

    void      CloseDecoder();

    //void      GetVideoDescriptor(XMVVIDEO_DESC* pVideoDescriptor);
    //void      GetAudioDescriptor(DWORD AudioStream, XMVAUDIO_DESC* pAudioDescriptor);

    //HRESULT   EnableAudioStream(DWORD AudioStream, DWORD Flags, DSMIXBINS* pMixBins, IDirectSoundStream** ppStream);
    void      DisableAudioStream(DWORD AudioStream);
    //void      GetAudioStream(DWORD AudioStream, IDirectSoundStream** ppStream);
    DWORD     GetSynchronizationStream();
    void      SetSynchronizationStream(DWORD AudioStream);

    void      Reset();

    HRESULT   Play(DWORD Flags, RECT* pRect);
    void      TerminateLoop();
    void      TerminatePlayback();
    void      TerminateImmediately();

    //HRESULT   GetNextFrame(IDirect3DSurface8* pSurface, XMVRESULT* pResult, DWORD* pTimeOfFrame);

    DWORD     GetTimeFromStart();
};

typedef struct _XMVVIDEO_DESC
{
    DWORD Width;
    DWORD Height;
    DWORD FramesPerSecond;
    DWORD AudioStreamCount;
} XMVVIDEO_DESC;

typedef enum _XMVRESULT
{
    XMV_NOFRAME,
    XMV_NEWFRAME,
    XMV_ENDOFFILE,
    XMV_FAIL,

    XMV_FORCELONG = 0xFFFFFFFF
}
XMVRESULT;

typedef struct XGBuffer XGBuffer;
typedef XGBuffer* LPXGBUFFER, * PXGBUFFER;

struct XGBuffer
{
    DWORD  refCount;            // The ref count.
    LPVOID pData;               // The data
    DWORD  size;                // The size of the buffer

    // IUnknown
    ULONG WINAPI AddRef();
    ULONG WINAPI Release();

    // IXGBuffer methods
    LPVOID WINAPI GetBufferPointer();
    DWORD  WINAPI GetBufferSize();
};
#define D3DFASTCALL __fastcall

typedef struct XFileMediaObject XFileMediaObject;
typedef XFileMediaObject* LPXFILEMEDIAOBJECT;

typedef struct IDirectSound IDirectSound;
typedef IDirectSound* LPDIRECTSOUND;

typedef struct _DSMIXBINVOLUMEPAIR
{
    DWORD           dwMixBin;               // MixBin identifier
    LONG            lVolume;                // MixBin volume
} DSMIXBINVOLUMEPAIR, * LPDSMIXBINVOLUMEPAIR;

typedef const DSMIXBINVOLUMEPAIR* LPCDSMIXBINVOLUMEPAIR;

typedef struct _DSMIXBINS
{
    DWORD                   dwMixBinCount;          // Count of mixbins to assign the voice to or mixbins to set volume on
    LPCDSMIXBINVOLUMEPAIR   lpMixBinVolumePairs;    // MixBin identifier/volume pairs
} DSMIXBINS, * LPDSMIXBINS;

typedef struct _XINPUT_POLLING_PARAMETERS
{
    BYTE       fAutoPoll : 1;
    BYTE       fInterruptOut : 1;
    BYTE       ReservedMBZ1 : 6;
    BYTE       bInputInterval;
    BYTE       bOutputInterval;
    BYTE       ReservedMBZ2;
} XINPUT_POLLING_PARAMETERS, * PXINPUT_POLLING_PARAMETERS;

typedef struct _XINPUT_GAMEPAD
{
    WORD    wButtons;
    BYTE    bAnalogButtons[8];
    SHORT   sThumbLX;
    SHORT   sThumbLY;
    SHORT   sThumbRX;
    SHORT   sThumbRY;
} XINPUT_GAMEPAD, * PXINPUT_GAMEPAD;

typedef struct _XINPUT_STATE
{
    DWORD dwPacketNumber;
    union
    {
        XINPUT_GAMEPAD Gamepad;
#ifdef DEBUG_MOUSE
        XINPUT_MOUSE   DebugMouse;
#endif //DEBUG_MOUSE
    };
} XINPUT_STATE, * PXINPUT_STATE;

#define XINPUT_FEEDBACK_HEADER_INTERNAL_SIZE 58
typedef struct _XINPUT_FEEDBACK_HEADER
{
    DWORD           dwStatus;
    HANDLE OPTIONAL hEvent;
    BYTE            Reserved[XINPUT_FEEDBACK_HEADER_INTERNAL_SIZE];
} XINPUT_FEEDBACK_HEADER, * PXINPUT_FEEDBACK_HEADER;

typedef struct _XINPUT_RUMBLE
{
    WORD   wLeftMotorSpeed;
    WORD   wRightMotorSpeed;
} XINPUT_RUMBLE, * PXINPUT_RUMBLE;

typedef struct _XINPUT_FEEDBACK
{
    XINPUT_FEEDBACK_HEADER Header;
    union
    {
        XINPUT_RUMBLE Rumble;
    };
} XINPUT_FEEDBACK, * PXINPUT_FEEDBACK;

#define DSMIXBIN_ASSIGNMENT_MAX     8

typedef struct _DSVOICEPROPS
{
    DWORD               dwMixBinCount;                              // Active mixbin count
    DSMIXBINVOLUMEPAIR  MixBinVolumePairs[DSMIXBIN_ASSIGNMENT_MAX]; // Mixbin/volume pairs
    LONG                lPitch;                                     // Voice pitch
    LONG                l3DDistanceVolume;                          // 3D distance attenuation
    LONG                l3DConeVolume;                              // 3D cone volume
    LONG                l3DDopplerPitch;                            // 3D Doppler pitch
    LONG                lI3DL2DirectVolume;                         // I3DL2 direct path volume
    LONG                lI3DL2RoomVolume;                           // I3DL2 reflected path volume
} DSVOICEPROPS, * LPDSVOICEPROPS;

typedef struct IDirectSoundStream IDirectSoundStream;
typedef IDirectSoundStream* LPDIRECTSOUNDSTREAM;

typedef VOID(CALLBACK* LPFNXMEDIAOBJECTCALLBACK)(LPVOID pStreamContext, LPVOID pPacketContext, DWORD dwStatus);
typedef LPFNXMEDIAOBJECTCALLBACK PFNXMEDIAOBJECTCALLBACK;

typedef const DSMIXBINS* LPCDSMIXBINS;

typedef struct _DSSTREAMDESC
{
    DWORD                       dwFlags;                // DSSTREAMCAPS flags
    DWORD                       dwMaxAttachedPackets;   // Maximum count of packets that will be simultaneously submitted to the stream
    LPWAVEFORMATEX              lpwfxFormat;            // Stream format
    LPFNXMEDIAOBJECTCALLBACK    lpfnCallback;           // Packet completion callback routine
    LPVOID                      lpvContext;             // Packet completion callback routine context
    LPCDSMIXBINS                lpMixBins;              // Output mixbin identifier/volume pairs
} DSSTREAMDESC, * LPDSSTREAMDESC;

typedef const DSSTREAMDESC* LPCDSSTREAMDESC;

typedef struct _DSEFFECTMAP
{
    LPVOID          lpvCodeSegment;         // Starting address of the DSP code segment
    DWORD           dwCodeSize;             // Code segment size, in DWORDs
    LPVOID          lpvStateSegment;        // Starting address of the effect state segment
    DWORD           dwStateSize;            // Effect state segment size, in DWORDs
    LPVOID          lpvYMemorySegment;      // Starting address of the DSP Y-memory segment
    DWORD           dwYMemorySize;          // Y-memory segment size, in DWORDs            
    LPVOID          lpvScratchSegment;      // Starting address of the scratch memory segment
    DWORD           dwScratchSize;          // Scratch segment size, in DWORDs
} DSEFFECTMAP, * LPDSEFFECTMAP;

typedef struct _DSEFFECTIMAGEDESC
{
    DWORD           dwEffectCount;          // Count of effects in the image
    DWORD           dwTotalScratchSize;     // total FX delay line scratch used
    DSEFFECTMAP     aEffectMaps[1];         // Variable-length array of effect maps
} DSEFFECTIMAGEDESC, * LPDSEFFECTIMAGEDESC;

typedef const DSEFFECTIMAGEDESC* LPCDSEFFECTIMAGEDESC;

typedef struct _DSEFFECTIMAGELOC
{
    DWORD           dwI3DL2ReverbIndex;     // I3DL2 reverb effect index
    DWORD           dwCrosstalkIndex;       // Crosstalk cancellation effect index
} DSEFFECTIMAGELOC, * LPDSEFFECTIMAGELOC;

typedef const DSEFFECTIMAGELOC* LPCDSEFFECTIMAGELOC;

typedef struct _DSI3DL2LISTENER
{
    LONG            lRoom;                  // [-10000, 0] default: -10000 mB
    LONG            lRoomHF;                // [-10000, 0] default: 0 mB
    FLOAT           flRoomRolloffFactor;    // [0.0, 10.0] default: 0.0
    FLOAT           flDecayTime;            // [0.1, 20.0] default: 1.0 s
    FLOAT           flDecayHFRatio;         // [0.1, 2.0] default: 0.5
    LONG            lReflections;           // [-10000, 1000] default: -10000 mB
    FLOAT           flReflectionsDelay;     // [0.0, 0.3] default: 0.02 s
    LONG            lReverb;                // [-10000, 2000] default: -10000 mB
    FLOAT           flReverbDelay;          // [0.0, 0.1] default: 0.04 s
    FLOAT           flDiffusion;            // [0.0, 100.0] default: 100.0 %
    FLOAT           flDensity;              // [0.0, 100.0] default: 100.0 %
    FLOAT           flHFReference;          // [20.0, 20000.0] default: 5000.0 Hz
} DSI3DL2LISTENER, * LPDSI3DL2LISTENER;

typedef const DSI3DL2LISTENER* LPCDSI3DL2LISTENER;

typedef struct _DSOUTPUTLEVELS
{
    DWORD   dwAnalogLeftTotalPeak;          // analog peak
    DWORD   dwAnalogRightTotalPeak;
    DWORD   dwAnalogLeftTotalRMS;           // analog RMS
    DWORD   dwAnalogRightTotalRMS;
    DWORD   dwDigitalFrontLeftPeak;         // digital peak levels
    DWORD   dwDigitalFrontCenterPeak;
    DWORD   dwDigitalFrontRightPeak;
    DWORD   dwDigitalBackLeftPeak;
    DWORD   dwDigitalBackRightPeak;
    DWORD   dwDigitalLowFrequencyPeak;
    DWORD   dwDigitalFrontLeftRMS;          // digital RMS levels
    DWORD   dwDigitalFrontCenterRMS;
    DWORD   dwDigitalFrontRightRMS;
    DWORD   dwDigitalBackLeftRMS;
    DWORD   dwDigitalBackRightRMS;
    DWORD   dwDigitalLowFrequencyRMS;
} DSOUTPUTLEVELS, * PDSOUTPUTLEVELS, * LPDSOUTPUTLEVELS;

typedef struct _DSLFODESC
{
    DWORD           dwLFO;                  // LFO to set data on
    DWORD           dwDelay;                // Initial delay before LFO is applied, in 32-sample blocks
    DWORD           dwDelta;                // Delta added to LFO each frame
    LONG            lPitchModulation;       // Pitch modulation
    LONG            lFilterCutOffRange;     // Frequency cutoff range (multi-function LFO only)
    LONG            lAmplitudeModulation;   // Amplitude modulation (multi-function LFO only)
} DSLFODESC, * LPDSLFODESC;

typedef const DSLFODESC* LPCDSLFODESC;

typedef struct _DSENVELOPEDESC
{
    DWORD           dwEG;                   // Envelope generator to set data on
    DWORD           dwMode;                 // Envelope mode
    DWORD           dwDelay;                // Count of 512-sample blocks to delay before attack
    DWORD           dwAttack;               // Attack segment length, in 512-sample blocks
    DWORD           dwHold;                 // Count of 512-sample blocks to hold after attack
    DWORD           dwDecay;                // Decay segment length, in 512-sample blocks
    DWORD           dwRelease;              // Release segment length, in 512-sample blocks
    DWORD           dwSustain;              // Sustain level
    LONG            lPitchScale;            // Pitch scale (multi-function envelope only)
    LONG            lFilterCutOff;          // Filter cut-off (multi-function envelope only)
} DSENVELOPEDESC, * LPDSENVELOPEDESC;

typedef const DSENVELOPEDESC* LPCDSENVELOPEDESC;

typedef struct _DSFILTERDESC
{
    DWORD           dwMode;                 // Filter mode
    DWORD           dwQCoefficient;         // Q-coefficient (PEQ only)
    DWORD           adwCoefficients[4];     // Filter coefficients
} DSFILTERDESC, * LPDSFILTERDESC;

typedef const DSFILTERDESC* LPCDSFILTERDESC;

typedef struct _DSI3DL2OBSTRUCTION
{
    LONG            lHFLevel;               // [-10000, 0] default: 0 mB
    FLOAT           flLFRatio;              // [0.0, 1.0] default: 0.0
} DSI3DL2OBSTRUCTION, * LPDSI3DL2OBSTRUCTION;

typedef const DSI3DL2OBSTRUCTION* LPCDSI3DL2OBSTRUCTION;

typedef struct _DSI3DL2OCCLUSION
{
    LONG            lHFLevel;               // [-10000, 0] default: 0 mB
    FLOAT           flLFRatio;              // [0.0, 1.0] default: 0.25
} DSI3DL2OCCLUSION, * LPDSI3DL2OCCLUSION;

typedef const DSI3DL2OCCLUSION* LPCDSI3DL2OCCLUSION;

typedef struct _DSI3DL2BUFFER
{
    LONG                lDirect;            // [-10000, 1000] default: 0 mB
    LONG                lDirectHF;          // [-10000, 0] default: 0 mB
    LONG                lRoom;              // [-10000, 1000] default: 0 mB
    LONG                lRoomHF;            // [-10000, 0] default: 0 mB
    FLOAT               flRoomRolloffFactor;// [0.0, 10.0] default: 0.0
    DSI3DL2OBSTRUCTION  Obstruction;        // Source obstruction parameters
    DSI3DL2OCCLUSION    Occlusion;          // Source occlusion parameters
} DSI3DL2BUFFER, * LPDSI3DL2BUFFER;

typedef const DSI3DL2BUFFER* LPCDSI3DL2BUFFER;

/* CopyRectsState Operation values */
typedef enum _D3DCOPYRECTOPERATION
{
    D3DCOPYRECT_SRCCOPY_AND = 0,
    D3DCOPYRECT_ROP_AND = 1,
    D3DCOPYRECT_BLEND_AND = 2,
    D3DCOPYRECT_SRCCOPY = 3,
    D3DCOPYRECT_SRCCOPY_PREMULT = 4,
    D3DCOPYRECT_BLEND_PREMULT = 5,
    D3DCOPYRECT_FORCE_DWORD = 0x7fffffff, /* force 32-bit size enum */
} D3DCOPYRECTOPERATION;

/* CopyRectsState Color Format values */
typedef enum _D3DCOPYRECTCOLORFORMAT
{
    D3DCOPYRECT_COLOR_FORMAT_DEFAULT = 0,
    D3DCOPYRECT_COLOR_FORMAT_Y8 = 1,
    D3DCOPYRECT_COLOR_FORMAT_X1R5G5B5_Z1R5G5B5 = 2,
    D3DCOPYRECT_COLOR_FORMAT_X1R5G5B5_O1R5G5B5 = 3,
    D3DCOPYRECT_COLOR_FORMAT_R5G6B5 = 4,
    D3DCOPYRECT_COLOR_FORMAT_Y16 = 5,
    D3DCOPYRECT_COLOR_FORMAT_X8R8G8B8_Z8R8G8B8 = 6,
    D3DCOPYRECT_COLOR_FORMAT_X8R8G8B8_O8R8G8B8 = 7,
    D3DCOPYRECT_COLOR_FORMAT_X1A7R8G8B8_Z1A7R8G8B8 = 8,
    D3DCOPYRECT_COLOR_FORMAT_X1A7R8G8B8_O1A7R8G8B8 = 9,
    D3DCOPYRECT_COLOR_FORMAT_A8R8G8B8 = 10,
    D3DCOPYRECT_COLOR_FORMAT_Y32 = 11,
    D3DCOPYRECT_COLOR_FORMAT_FORCE_DWORD = 0x7fffffff, /* force 32-bit size enum */
} D3DCOPYRECTCOLORFORMAT;

typedef struct _D3DCOPYRECTSTATE                // Xbox extension
{
    D3DCOPYRECTCOLORFORMAT ColorFormat;
    D3DCOPYRECTOPERATION Operation;

    BOOL ColorKeyEnable;
    DWORD ColorKeyValue;

    // D3DCOPYRECT_BLEND_AND alpha value
    // The VALUE_FRACTION bits (30:21) contain the 10 bit unsigned fraction of the alpha value.
    // The VALUE bits (31:31) contain the 1 bit signed integer of the alpha value.
    DWORD BlendAlpha;

    // D3DCOPYRECT_*_PREMULT alpha value
    // Contains an alpha value for all four channels.
    DWORD PremultAlpha;

    // Clipping Rect
    DWORD ClippingPoint;    // y_x S16_S16
    DWORD ClippingSize;     // height_width U16_U16

} D3DCOPYRECTSTATE;

typedef struct _D3DCOPYRECTROPSTATE             // Xbox extension
{
    DWORD Rop;              // Ternary raster operation.
    //   DSTINVERT:0x55, SRCCOPY:0xCC,
    //   SRCPAINT:0xEE, SRCINVERT:0x66,
    //   ...

    DWORD Shape;            // 0:8X_8Y, 1:64X_1Y, 2:1X_64Y
    DWORD PatternSelect;    // 1:monochrome, 2:color

    DWORD MonoColor0;       // Color to use when bit is "0"
    DWORD MonoColor1;       // Color to use when bit is "1"

    DWORD MonoPattern0;     // 8x8 = 64 bit pattern
    DWORD MonoPattern1;     //

    CONST DWORD* ColorPattern;  // Color Pattern used if PatternSelect == color
    // 32-bit: Array of 64 DWORDS
    // 16-bit: Array of 32 DWORDS

} D3DCOPYRECTROPSTATE;

// Some Vertex Shader APIs take allow the vertex format to be specified with
// a structure rather than a handle to a vertex shader object.  The following
// structure defines how vertex attributes are read from one or more streams.

typedef struct _D3DVERTEXSHADERINPUT
{
    DWORD StreamIndex;      // which stream
    DWORD Offset;           // Byte offset from the start of the stream.
    DWORD Format;           // format of this attribute (D3DVSDT_*)
    BYTE  TessType;         // 0=none, 1=normal, 2=autotex
    BYTE  TessSource;       // source register for normal/uv autocalc
} D3DVERTEXSHADERINPUT;

// Up to 16 different inputs are supported by the vertex shader hardware.
// Each of the 16 entries in the following structure defines which
// stream that value comes from, what byte offset corresponds to an
// attribute, and the format of the attribute.

typedef struct _D3DVERTEXATTRIBUTEFORMAT
{
    D3DVERTEXSHADERINPUT Input[16];
} D3DVERTEXATTRIBUTEFORMAT;

typedef DWORD D3DSHADERCONSTANTMODE;            // Xbox extension

#define D3DSCM_96CONSTANTS                  0
#define D3DSCM_192CONSTANTS                 1
#define D3DSCM_192CONSTANTSANDFIXEDPIPELINE 2
#define D3DSCM_NORESERVEDCONSTANTS          0x10    // Flag

typedef struct xbox_adpcmwaveformat_tag
{
    WAVEFORMATEX    wfx;                    // WAVEFORMATEX data
    WORD            wSamplesPerBlock;       // Count of samples per encoded block.  Must be 64.
} XBOXADPCMWAVEFORMAT, * PXBOXADPCMWAVEFORMAT, * LPXBOXADPCMWAVEFORMAT;

/* SetVertexInput struct */
typedef struct _D3DSTREAM_INPUT                 // Xbox extension
{
    IDirect3DVertexBuffer8* VertexBuffer;
    UINT                Stride;
    UINT                Offset;
} D3DSTREAM_INPUT;
