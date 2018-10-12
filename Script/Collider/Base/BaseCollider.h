#pragma once

#include "../../System/Vector2D.h"

class BaseCollider{

public:
	BaseCollider();
	BaseCollider(Vector2D<float> vec, int rad);
	virtual ~BaseCollider();

protected:
	Vector2D<float> vec2;
	int radius;

};