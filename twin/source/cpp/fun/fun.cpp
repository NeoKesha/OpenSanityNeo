#include <XTL.h>
#include <stl.h>
#include <time/global_clock.h>
#include <input/input_controller.h>
#include <stream/file_stream.h>
#include "fun.h"

#ifdef ENABLE_FUN

#ifdef FUNNY_001
void Reset() {
	D3D__TextureState[0][D3DTSS_ADDRESSU] = D3DTADDRESS_WRAP;
	D3D__TextureState[0][D3DTSS_ADDRESSV] = D3DTADDRESS_WRAP;
	D3D__TextureState[0][D3DTSS_MAGFILTER] = D3DTEXF_LINEAR;
	D3D__TextureState[0][D3DTSS_MINFILTER] = D3DTEXF_LINEAR;
	D3D__TextureState[0][D3DTSS_MIPFILTER] = D3DTEXF_NONE;
	D3D__TextureState[0][D3DTSS_ALPHAKILL] = D3DTALPHAKILL_ENABLE;
	D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
	D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_DIFFUSE;
	D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TEXTURE;
	D3D__TextureState[0][D3DTSS_ALPHAOP] = D3DTOP_MODULATE;
	D3D__TextureState[0][D3DTSS_ALPHAARG1] = D3DTA_DIFFUSE;
	D3D__TextureState[0][D3DTSS_ALPHAARG2] = D3DTA_TEXTURE;
	D3D__TextureState[0][D3DTSS_RESULTARG] = D3DTA_TEMP;
	
	D3D__RenderState[D3DRS_LIGHTING] = false;
	D3D__RenderState[D3DRS_SRCBLEND] = D3DBLEND_SRCALPHA;
	D3D__RenderState[D3DRS_DESTBLEND] = D3DBLEND_INVSRCALPHA;
	D3D__RenderState[D3DRS_ALPHATESTENABLE] = false;
	D3D__RenderState[D3DRS_ALPHAREF] = 0xff;
	D3D__RenderState[D3DRS_ALPHAFUNC] = D3DCMP_GREATEREQUAL;
	D3D__RenderState[D3DRS_STENCILFUNC] = D3DCMP_ALWAYS;
	D3D__RenderState[D3DRS_STENCILREF] = 0x40;
	D3D__RenderState[D3DRS_STENCILPASS] = D3DSTENCILOP_REPLACE;
	D3D__RenderState[D3DRS_ALPHABLENDENABLE] = false;
	
	D3D__RenderState[D3DRS_FILLMODE] = D3DFILL_SOLID;
}

void Init_Funny_001() {
	
}
void Update_Funny_001() {
static int frame = -360;
	static int stage = 0;
++frame;
	if (frame >= 180) {
		++stage;
		frame = 0;
	}

	float fogStart = 1.0f;
	float fogEnd = 2.0f;
	float alpha = 0.5f + 0.5f * sin(frame * 0.01f); // Smooth fade effect
	switch (stage) {
		case 0:
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_DIFFUSE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TEXTURE;
			break;
		case 1://Diffuse only
			Reset();
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_SELECTARG1;
			break;
		case 2://Texture only
			Reset();
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_SELECTARG2;
			break;
		case 3://Red tint
			Reset();
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TFACTOR;
			D3D__RenderState[D3DRS_TEXTUREFACTOR] = 0xFF0000;
			break;
		case 4://Green tint
			Reset();
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TFACTOR;
			D3D__RenderState[D3DRS_TEXTUREFACTOR] = 0x00FF00;
			break;
		case 5://Blue tint
			Reset();
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TFACTOR;
			D3D__RenderState[D3DRS_TEXTUREFACTOR] = 0x0000FF;
			break;
		case 6://Grayscale
			Reset();
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_DOTPRODUCT3;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_DIFFUSE;
			break;
		case 7://Shit tint
			Reset();
			D3D__RenderState[D3DRS_TEXTUREFACTOR] = D3DCOLOR_XRGB(112, 66, 20); // Brownish color
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_TEXTURE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TFACTOR;
			break;
		case 8: //Wireframe
			Reset();
			D3D__RenderState[D3DRS_FILLMODE] = D3DFILL_WIREFRAME;
			break;
		default:
			Reset();
			stage = 0;
			D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
			D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_DIFFUSE;
			D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TEXTURE;
			break;
	}
}

void Init_Funny_001() {
	
}
#endif

#ifdef FUNNY_002

IDirectSoundBuffer8* zawarudoBuffer = 0;
IDirectSoundBuffer8* tokiwaBuffer = 0;
IDirectSoundBuffer8* tickBuffer = 0;

const float targetTimeA1 = 1.0f;
const float targetTimeA2 = 0.5f;
const float targetTimeB1 = 1.0f;
const float targetTimeB2 = 0.0f;
const float timePerTick  = 1.0f / 60.0f;

bool timestop = false;
float change = 0.15f;
float timeParam = 1.0f;
float timestopTime = 0.0f;

void CreateBuffer(char* fname, IDirectSoundBuffer8** buffer) {
	IDirectSound8* dev = DS_DEVICE.device;
	
	WAVEFORMATEX waveFormat    = {0};
	waveFormat.wFormatTag      = WAVE_FORMAT_PCM;
	waveFormat.nChannels       = 1;
	waveFormat.nSamplesPerSec  = 22050;
	waveFormat.wBitsPerSample  = 16;
	waveFormat.nBlockAlign     = waveFormat.nChannels * waveFormat.wBitsPerSample / 8;
	waveFormat.nAvgBytesPerSec = waveFormat.nBlockAlign * waveFormat.nSamplesPerSec;
	DSBUFFERDESC bufferDesc   = {0};
	bufferDesc.dwBufferBytes  = 0;
	bufferDesc.lpwfxFormat    = &waveFormat;
	
	FileStream stream;
	stream.OpenFile(fname, 1, 0);
	if (stream.errno == 0) {
		stream.SeekForward(44);
		size_t bufferLength = stream.GetLength() - 44;
		char* sndBuffer = new char[bufferLength];
		stream.Read(sndBuffer, bufferLength, 0);
		stream.CloseFile();
		
		dev->CreateSoundBuffer(&bufferDesc, buffer, 0);
		(*buffer)->SetBufferData(sndBuffer, bufferLength);
	}
}

void Init_Funny_002() {
	CreateBuffer("funAssets\\zawarudo.wav", &zawarudoBuffer);
	CreateBuffer("funAssets\\tokiwa.wav", &tokiwaBuffer);
	CreateBuffer("funAssets\\tick.wav", &tickBuffer);
}

void Update_Funny_002() {
	static int frame = 0;
	
	
	byte white = INPUT_CONTROLLER->inputSourceList[0]->state.Gamepad.bAnalogButtons[XINPUT_GAMEPAD_WHITE];
	byte prev_white = INPUT_CONTROLLER->inputSourceList[0]->prevState.Gamepad.bAnalogButtons[XINPUT_GAMEPAD_WHITE];
	if (white == 255 && prev_white == 0 && timestopTime == 0.0f && !timestop) {
		if (zawarudoBuffer != 0) zawarudoBuffer->Play(0,0, DSBPLAY_FROMSTART);
		timestop = true;
		//timestop = !timestop;
	}
	
	if (timestop) {
		D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_SUBTRACT;
		D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_TFACTOR;
		D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TEXTURE;
		D3D__RenderState[D3DRS_TEXTUREFACTOR] = 0xFFFFFFFF;
		if (timeParam > 0.0f) timeParam -= change;
		if (timeParam < 0.0f) timeParam = 0.0f;
		
		int timestopTimePrev = (int)timestopTime;
		timestopTime += timePerTick;
		int timestopTimeCurrent = (int)timestopTime;
		if (timestopTimePrev != timestopTimeCurrent && timestopTime >= 4.0f && timestopTime < 10.0f) {
			if (tickBuffer != 0) tickBuffer->Play(0,0, DSBPLAY_FROMSTART);
		}
		if (timestopTime >= 11.0f) {
			timestopTime = -10.0f;
			timestop = false;
			if (tokiwaBuffer != 0) tokiwaBuffer->Play(0,0, DSBPLAY_FROMSTART);
		}
	} else {
		D3D__TextureState[0][D3DTSS_COLOROP] = D3DTOP_MODULATE;
		D3D__TextureState[0][D3DTSS_COLORARG1] = D3DTA_DIFFUSE;
		D3D__TextureState[0][D3DTSS_COLORARG2] = D3DTA_TEXTURE;
		if (timeParam < 1.0f) timeParam += change;
		if (timeParam > 0.0f) timeParam = 1.0f;
		
		if (timestopTime < 0.0f) {
			timestopTime += timePerTick;
			if (timestopTime > 0.0f) {
				timestopTime = 0.0f;
			}
		}
	}

	CLOCK_TIME_1 = 1.0f; //Camera
	CLOCK_TIME_2 = targetTimeB1 * timeParam + targetTimeB2 * (1.0f - timeParam); 
	CLOCK_TIME_3 = targetTimeA1 * timeParam + targetTimeA2 * (1.0f - timeParam); //Crash
	CLOCK_TIME_4 = targetTimeB1 * timeParam + targetTimeB2 * (1.0f - timeParam); 
	CLOCK_TIME_5 = targetTimeB1 * timeParam + targetTimeB2 * (1.0f - timeParam); 
	CLOCK_TIME_6 = targetTimeB1 * timeParam + targetTimeB2 * (1.0f - timeParam); 
	CLOCK_TIME_7 = targetTimeB1 * timeParam + targetTimeB2 * (1.0f - timeParam); 
	CLOCK_TIME_8 = targetTimeB1 * timeParam + targetTimeB2 * (1.0f - timeParam); 
	
	++frame;
}

#endif

void InitFun() {
	static bool inited = false;
	if (inited) return;
	#ifdef FUNNY_001
		Init_Funny_001();
	#endif
	
	#ifdef FUNNY_002
		Init_Funny_002();
	#endif
	
	inited = true;
}

void UpdateFun() {
	#ifdef FUNNY_001
		Update_Funny_001();
	#endif
	
	#ifdef FUNNY_002
		Update_Funny_002();
	#endif
}

#endif