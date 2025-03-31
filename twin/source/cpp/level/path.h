#pragma once
#include <twin_base.h>
#include <twin_math.h>
#include <stream/memory_stream.h>

class PathBase : TwinBase {
public:
	unsigned int pointCnt;
	Vector4* points;
	
	PathBase();
	PathBase(PathBase* other);
	virtual ~PathBase();
	virtual void Method1(Matrix4* mat);
	virtual void Read(MemoryStream* stream);
	virtual unsigned int GetBuilderIndex();
	virtual void Write(MemoryStream* stream);
	virtual bool Method5(void* unknown);
};


class Path : PathBase {
public:
	float* parameters;
	float* lastParameter;
	unsigned int unk1;
	unsigned int unk2;
	unsigned int unk3;
	Vector4 vec1;
	Vector4 vec2;
	float fl1;
	float fl2;
	int num;
	unsigned int unk4;
	
	Path();
	Path(Path* other);
	virtual ~Path();
	virtual void Read(MemoryStream* stream);
	virtual unsigned int GetBuilderIndex();
	virtual void Write(MemoryStream* stream);
	virtual bool Method5(void* unknown);
	
	int FindClosestPoint(Vector4* vec);
	float FUN_000de6a0(int idx, float k);
	float FUN_000ecee0(Vector4* vec);
	void FUN_000ecf20(unsigned int param_1, float param_2);
	bool FUN_000efff0(Vector4* vec, float k);
	bool FUN_000f17f0(Vector4* vec, void* param_2, int param_3); //void* VectorContainer;
	void FUN_000f1c60(Vector4* param_1, void* data); //void* VectorContainer;
	float FUN_000f1ce0(Vector4* vec, Vector4* out);
	int  FUN_000f25e0(unsigned int param31, int param_2, float* param_3, float* param_4, char param_5);
};