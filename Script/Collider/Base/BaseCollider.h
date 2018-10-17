#pragma once

#include "../../System/Vector2D.h"

class BaseCollider{

public:
	BaseCollider();
	BaseCollider(Vector2D<float> &vec, int rad);
	BaseCollider(Vector2D<float> &vec, int rad, int tag);
	virtual ~BaseCollider();
	Vector2D<float>* GetVector();
	int GetRadius();

protected:
	Vector2D<float> *vec2;
	int radius;
	int objectTag;

};