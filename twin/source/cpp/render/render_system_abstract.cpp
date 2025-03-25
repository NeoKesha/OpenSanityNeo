#include <XTL.h>
#include <stl.h>
#include "render_system_abstract.h"

RenderSystemAbstract::RenderSystemAbstract() {
	AssertNonImplemented
}

RenderSystemAbstract::~RenderSystemAbstract() {
	AssertNonImplemented
}

void RenderSystemAbstract::UnkMethod1() {
	AssertNonImplemented
	return;
}

void RenderSystemAbstract::UnkMethod2() {
	AssertNonImplemented
	return;
}

void RenderSystemAbstract::Render() {
	AssertNonImplemented
	return;
}

void RenderSystemAbstract::EmptyFunction3(int a) {
	return;
}

void RenderSystemAbstract::ResetGradient() {
	AssertNonImplemented
	return;
}

void RenderSystemAbstract::UnkMethod5() {
	return;
}

void RenderSystemAbstract::SetXY(Vector2* vec) {
	if (-1.0f < vec->x || vec->x == -1.0f) {
		if (vec->x <= 1.0f) {
			this->vec.x = vec->x;
		}
		else {
			this->vec.x = 1.0f;
		}
	}
	else {
		this->vec.x = -1.0f;
	}
	if (-1.0f < vec->y || vec->y == -1.0f) {
		if (vec->y <= 1.0f) {
			this->vec.y = vec->y;
		}
		else {
			this->vec.y = 1.0f;
		}
	}
	else {
		this->vec.y = -1.0f;
	}
	this->vec.y = vec->y;
	return;
}

void RenderSystemAbstract::EmptyFunction4(int a) {
	return;
}

