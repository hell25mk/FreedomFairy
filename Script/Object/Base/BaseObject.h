#pragma once

#include "../../System/Vector2D.h"

class BaseObject{

public:
	BaseObject();
	BaseObject(float x, float y, int rad, unsigned int color);
	virtual ~BaseObject();
	virtual void Update() = 0;
	virtual void Draw() = 0;

protected:
	Vector2D<float> vec2;
	int radius;
	unsigned int color;

};

