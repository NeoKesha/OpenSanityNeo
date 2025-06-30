#include <XTL.h>
#include <stl.h>
#include "instance_transform.h"
#include <math.h>

InstanceTransform::InstanceTransform() {
	ZeroMemory(this, sizeof(InstanceTransform));
	this->transform.row4.w = 1.0f;
	this->transform.row3.z = 1.0f;
	this->transform.row2.y = 1.0f;
	this->transform.row1.x = 1.0f;
	
	this->position.x = 0.0f;
	this->position.y = 0.0f;
	this->position.z = 0.0f;
	this->position.w = 1.0f;
	
	this->rotation.x = 0.0f;
	this->rotation.y = 0.0f;
	this->rotation.z = 0.0f;
	this->rotation.w = 1.0f;
	
	this->a = this->a & 0xfffffff0;
}

InstanceTransform::InstanceTransform(InstanceTransform* other) {
	memcpy(this, other, sizeof(InstanceTransform));
}

void InstanceTransform::FillMatrix() {
	if ((this->a & 2) != 0) {
		float rotX = this->rotation.x;
		float rotY = this->rotation.y;
		float rotZ = this->rotation.z;
		float rotW = this->rotation.w;
		float normFactor = 1.0f / sqrt(rotX * rotX + rotY * rotY + rotZ * rotZ + rotW * rotW);
		this->rotation.x *= normFactor;
		this->rotation.y *= normFactor;
		this->rotation.z *= normFactor;
		this->rotation.w *= normFactor;
		
		this->transform.FromRotation(&this->rotation);
		
		this->a = this->a & 0xfffffffd;
	}
	if ((this->a & 1) != 0) {
		this->transform.row4.x = this->position.x;
		this->transform.row4.y = this->position.y;
		this->transform.row4.z = this->position.z;
		this->transform.row4.w = this->position.w;
		this->a = this->a & 0xfffffffe;
	}
}

bool InstanceTransform::Reset() {
	if ((this->a & 4) != 0) {
		this->position.x = this->transform.row4.x;
		this->position.y = this->transform.row4.y;
		this->position.z = this->transform.row4.z;
		this->position.w = this->transform.row4.w;
		this->a = this->a & 0xfffffffa;
	}

	//wtf even is this code?
	float posX = abs(this->position.x);
	if (posX <= epsilon) {
		float posY = abs(this->position.y);
		if (posY <= epsilon) {
			float posZ = abs(this->position.z);
			if (posZ <= epsilon) {
				float rotX = abs(this->rotation.x);
				if (rotX <= epsilon) {
					float rotY = abs(this->rotation.y);
					if (rotY <= epsilon) {
						float rotZ = abs(this->rotation.z);
						if (rotZ <= epsilon) {
							float rotW1 = abs(this->rotation.x - 1.0f);
							if (rotW1 > epsilon) {
								float rotW2 = abs(this->rotation.x + 1.0f);
								if (rotW2 > epsilon) {
									this->a = this->a & 0xfffffff3U | 3;
									this->position.x = 0.0f;
									this->position.y = 0.0f;
									this->position.z = 0.0f;
									this->position.w = 1.0f;
									this->rotation.x = 0.0f;
									this->rotation.y = 0.0f;
									this->rotation.z = 0.0f;
									this->rotation.w = 1.0f;
									return true;
								}
							}
							return false;
						}
					}
				}
			}
		}
	}
	
	this->a = this->a & 0xfffffff3U | 3;
	this->position.x = 0.0f;
	this->position.y = 0.0f;
	this->position.z = 0.0f;
	this->position.w = 1.0f;
	this->rotation.x = 0.0f;
	this->rotation.y = 0.0f;
	this->rotation.z = 0.0f;
	this->rotation.w = 1.0f;
	return true;
}

bool InstanceTransform::SetupPosition(Vector4* pos) {
	if ((this->a & 4) != 0) {
		this->position.x = this->transform.row4.x;
		this->position.y = this->transform.row4.y;
		this->position.z = this->transform.row4.z;
		this->position.w = this->transform.row4.w;
		this->a = this->a & 0xfffffffa;
	}
	if ((_isnan(pos->x) || _isnan(this->position.x)) != (pos->x == this->position.x)) {
		if ((_isnan(pos->y) || _isnan(this->position.y)) != (pos->y == this->position.y)) {
			if ((_isnan(pos->z) || _isnan(this->position.z)) != (pos->z == this->position.z)) {
				return false;
			}
		}
	}
	this->a = this->a & 0xfffffffbU | 1;
	this->position.x = pos->x;
	this->position.y = pos->y;
	this->position.z = pos->z;
	this->position.w = pos->w;
	return true;
}

void InstanceTransform::GetTransformRow2(Vector4* out) {
	this->FillMatrix();
	out->x = this->transform.row2.x;
	out->y = this->transform.row2.y;
	out->z = this->transform.row2.z;
	out->w = this->transform.row2.w;
}

void InstanceTransform::GetTransformRow3(Vector4* out) {
	this->FillMatrix();
	out->x = this->transform.row3.x;
	out->y = this->transform.row3.y;
	out->z = this->transform.row3.z;
	out->w = this->transform.row3.w;
}

void InstanceTransform::GetTransformRow4(Vector4* out) {
	this->FillMatrix();
	out->x = this->transform.row4.x;
	out->y = this->transform.row4.y;
	out->z = this->transform.row4.z;
	out->w = this->transform.row4.w;
}

void InstanceTransform::ExtractPosition() {
	if ((this->a & 4) != 0) {
		this->position.x = this->transform.row4.x;
		this->position.y = this->transform.row4.y;
		this->position.z = this->transform.row4.z;
		this->position.w = this->transform.row4.w;
		this->a = this->a & 0xfffffffa;
	}
}

void InstanceTransform::GetPosition(Vector4* out) {
	if ((this->a & 4) != 0) {
		this->position.x = this->transform.row4.x;
		this->position.y = this->transform.row4.y;
		this->position.z = this->transform.row4.z;
		this->position.w = this->transform.row4.w;
		this->a = this->a & 0xfffffffa;
	}
	out->x = this->position.x;
	out->y = this->position.y;
	out->z = this->position.z;
	out->w = this->position.w;
}

//Yay, we are mathematically in one place and logically in other place
bool InstanceTransform::SetPositionFromOther(InstanceTransform* other) {
	if ((this->a & 4) != 0) {
		this->position.x = this->transform.row4.x;
		this->position.y = this->transform.row4.y;
		this->position.z = this->transform.row4.z;
		this->position.w = this->transform.row4.w;
		this->a = this->a & 0xfffffffa;
	}
	if ((_isnan(other->transform.row4.x) || _isnan(this->position.x)) != (other->transform.row4.x == this->position.x)) {
		if ((_isnan(other->transform.row4.y) || _isnan(this->position.y)) != (other->transform.row4.y == this->position.y)) {
			if ((_isnan(other->transform.row4.z) || _isnan(this->position.z)) != (other->transform.row4.z == this->position.z)) {
				return false;
			}
		}
	}
	this->a = this->a & 0xfffffffbU | 1;
	this->position.x = other->transform.row4.x;
	this->position.y = other->transform.row4.y;
	this->position.z = other->transform.row4.z;
	this->position.w = other->transform.row4.w;
	return true;
}

bool InstanceTransform::AddPosition(Vector4* delta) {
	float dx = abs(delta->x);
	if (dx <= epsilon) {
		float dy = abs(delta->y);
		if (dy <= epsilon) {
			float dz = abs(delta->z);
			if (dz <= epsilon) {
				return false;
			}
		}
	}
	
	if ((this->a & 4) != 0) {
		this->position.x = this->transform.row4.x;
		this->position.y = this->transform.row4.y;
		this->position.z = this->transform.row4.z;
		this->position.w = this->transform.row4.w;
		this->a = this->a & 0xfffffffa;
	}
	
	this->a = this->a & 0xfffffffbU | 1;
	this->position.x += delta->x;
	this->position.y += delta->y;
	this->position.z += delta->z;
	return true;
}

void __stdcall InstanceTransform::FUN_000a6690(InstanceTransform* instTransform, Matrix4* mat, Vector4* vec, Vector4* out) {
	Vector3 tUp;
	tUp.x = instTransform->transform.row2.x;
	tUp.y = instTransform->transform.row2.y;
	tUp.z = instTransform->transform.row2.z;
	float length = sqrt(vec->x * vec->x + vec->y * vec->y + vec->z * vec->z);
	float lengthInverse = 1.0f / length;
	Vector4 result;
	mat->TransformOut(vec, &result);
	float b = tUp.y * result.z * lengthInverse - tUp.z * result.y * lengthInverse;
	float a = tUp.z * result.x * lengthInverse - tUp.x * result.z * lengthInverse;
	float c = tUp.x * result.y * lengthInverse - tUp.y * result.x * lengthInverse;
	out->w = 1.0f;
	out->x = (a * tUp.z - c * tUp.y) * length;
	out->y = (c * tUp.x - b * tUp.z) * length;
	out->z = (b * tUp.y - a * tUp.x) * length;
}