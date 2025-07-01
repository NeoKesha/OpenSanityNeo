#include <XTL.h>
#include <stl.h>
#include "auto_class_40.h" 
//Model Collission Data akshually

AutoClass40::AutoClass40() { 
	ZeroMemory(this, sizeof(this));
}

AutoClass40::~AutoClass40() {
	_FreeMemory(blob);
}
	
void AutoClass40::FUN_0014b370(MemoryStream* stream) {
	stream->Read((char*)this, 0x16, 1); //read two first arrays
	stream->ReadUInt((char*)&(this->blobSize));
	this->blob = (unsigned char*)_AllocateMemory(this->blobSize);
	stream->Read((char*)this->blob, this->blobSize, 1);
	
	float* ptr = (float *)(this->blob + 0xc);
	for (int i = 0; i < this->dataAmount[0]; ++i) {
		*ptr = 1.0f;
		++ptr;
	}
}

void AutoClass40::FUN_00150ee0(Matrix4* matrix) {
	
}

void AutoClass40::Set(Vector4* vec1, Vector4* vec2) {
	
}