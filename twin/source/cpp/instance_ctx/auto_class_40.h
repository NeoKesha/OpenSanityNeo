#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include <stream\memory_stream.h>

extern "C" void __cdecl FUN_0014e450(unsigned char idx1, unsigned char idx2, unsigned char idx3);

class AutoClass40 : public TwinBase {
public:

	AutoClass40();
	~AutoClass40();
	
	void FUN_0014b370(MemoryStream* stream);
	void FUN_00150ee0(Matrix4* matrix);
	void Set(Vector4* vec1, Vector4* vec2);

	//InstanceContext* ctx;
	unsigned short dataAmount[6];
	unsigned short blockOffset[5];
	unsigned short unk;
	unsigned int blobSize;
	unsigned char* blob;
};