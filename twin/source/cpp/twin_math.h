#pragma once

class Vector2 {
public:
	float x;
	float y;
};

class Vector4{
public:
	float x;
	float y;
	float z;
	float w;
};

class Matrix4 {
public:
	Vector4 row1;
	Vector4 row2;
	Vector4 row3;
	Vector4 row4;
};