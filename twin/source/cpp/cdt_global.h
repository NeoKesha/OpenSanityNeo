#pragma once
#include <twin_base.h>
#include <twin_math.h>
struct CDTSupportStruct {
	unsigned char idx[24];
};

//Globals
extern "C" Vector4 CDT_VERT_ARRAY;
extern "C" int CDT_VERT_ARRAY_CNT;
extern "C" unsigned char CDT_POLY_VERTS[64];
extern "C" CDTSupportStruct CDT_POLYS[64];
extern "C" int CDT_POLYS_CNT;

extern "C" int __cdecl AddVertexToCdt(Vector4 *vector);
extern "C" void __cdecl AddCdtPolyCustom(unsigned char* idxArray, int polyLength);
extern "C" void __cdecl AddCdtPoly3(unsigned char idx1, unsigned char idx2, unsigned char idx3);
extern "C" void __cdecl AddCdtPoly4(unsigned char idx1, unsigned char idx2, unsigned char idx3, unsigned char idx4);