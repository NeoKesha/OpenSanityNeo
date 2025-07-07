#include <XTL.h>
#include <stl.h>
#include "cdt_global.h"

int __cdecl AddVertexToCdt(Vector4 *vector) {
	Vector4* ptr = &CDT_VERT_ARRAY;
	for (int i = 0; i < CDT_VERT_ARRAY_CNT; ++i) {
		float dx = ptr->x - vector->x;
		float dy = ptr->y - vector->y;
		float dz = ptr->z - vector->z;
		if (sqrt(dx*dx + dy*dy + dz*dz) < 0.0001f) {
			return i;
		}
		++ptr;
	}
	
	int cnt = CDT_VERT_ARRAY_CNT;
	Vector4* last = &CDT_VERT_ARRAY + CDT_VERT_ARRAY_CNT;
	++CDT_VERT_ARRAY_CNT;
	last->x = vector->x;
	last->y = vector->y;
	last->z = vector->z;
	last->w = vector->w;
	return cnt;
}

void __cdecl AddCdtPolyCustom(unsigned char* idxArray, int polyLength) {
	for (int i = 0; i < polyLength; ++i) {
		for (int k = i + 1; k < polyLength; ++k) {
			if (idxArray[k] == idxArray[i]) return;
		}
	}
	
	CDT_POLY_VERTS[CDT_POLYS_CNT] = (unsigned char)polyLength;
	for (int i = 0; i < polyLength; ++i) {
		CDT_POLYS[CDT_POLYS_CNT].idx[i] = idxArray[i];
	}
	CDT_POLYS_CNT = CDT_POLYS_CNT + 1;
	
	return;
}

void __cdecl AddCdtPoly3(unsigned char idx1, unsigned char idx2, unsigned char idx3) {
	if (idx1 == idx2 || idx2 == idx3 || idx3 == idx1) { //NOTE: original code was using stack as an array and doing shit automatically WHY THE FUCK
		return;
	}
	
	CDT_POLY_VERTS[CDT_POLYS_CNT] = 3;
	CDT_POLYS[CDT_POLYS_CNT].idx[0] = idx1;
	CDT_POLYS[CDT_POLYS_CNT].idx[1] = idx2;
	CDT_POLYS[CDT_POLYS_CNT].idx[2] = idx3;
	CDT_POLYS_CNT = CDT_POLYS_CNT + 1;
	
	return;
}

void __cdecl AddCdtPoly4(unsigned char idx1, unsigned char idx2, unsigned char idx3, unsigned char idx4) {
	if (idx1 == idx2 || idx1 == idx3 || idx1 == idx4) { //NOTE: ok here it makes sense but still fuck you
		return;
	}
	if (idx2 == idx3 || idx2 == idx4) {
		return;
	}
	if (idx3 == idx4) {
		return;
	}
	
	CDT_POLY_VERTS[CDT_POLYS_CNT] = 4;
	CDT_POLYS[CDT_POLYS_CNT].idx[0] = idx1;
	CDT_POLYS[CDT_POLYS_CNT].idx[1] = idx2;
	CDT_POLYS[CDT_POLYS_CNT].idx[2] = idx3;
	CDT_POLYS[CDT_POLYS_CNT].idx[3] = idx4;
	CDT_POLYS_CNT = CDT_POLYS_CNT + 1;
	
	return;
}