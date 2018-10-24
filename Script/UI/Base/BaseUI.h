#pragma once

#include "../../System/Vector2D.h"

class BaseUI{

public:
	BaseUI();
	virtual ~BaseUI();
	virtual bool Update() = 0;
	virtual void Draw() = 0;

protected:
	Vector2D<int> vec2;
	int width;
	int height;

};

