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
};