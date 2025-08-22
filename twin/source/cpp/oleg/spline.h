#pragma once
#include <twin_base.h>
#include <twin_math.h>

class SplineAbstract : public TwinBase {
public:
	SplineAbstract();
	virtual ~SplineAbstract();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag) = 0;
	virtual void Transform(Matrix4* matrix);
	virtual void UnkMethod(int param);
	virtual void Reset();
	
	float length;
	float position;
	float argument;
	int repeats;
	SplineAbstract* next;
};

class SplineA : public SplineAbstract {
public:
	SplineA();
	~SplineA();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
	
	int arrayLength;
	Vector2* spline;
};

class SplineB : public SplineAbstract {
public:
	SplineB();
	~SplineB();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
	virtual void Reset();
	
	int a;
	int b;
	//UnkFamily20Base unkStruct[0x4C];
	unsigned char unkStruct[0x4C];
};

class SplineC : public SplineAbstract {
public:
	SplineC();
	~SplineC();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
};

class SplineD : public SplineAbstract {
public:
	SplineD();
	~SplineD();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
};

class SplineE : public SplineAbstract {
public:
	SplineE();
	~SplineE();
	virtual SplineAbstract* Step(float step, int param_2, int param_3, bool flag);
	virtual void Transform(Matrix4* matrix);
};

class CollectionUnknownElement : public TwinBase {
public:
	float x;
	float y;
	float z;
	short a;
	short b;
};

class CollectionUnknown : public TwinBase {
public:
	CollectionUnknown();
	virtual ~CollectionUnknown();
	
	void AddIndex(int index);
	void FUN_000c3ac0();
	
	short count;
	short expansion;
	short capacity;
	short lastIndex;
	short* indexArray;
	CollectionUnknownElement* collection;
};