#pragma once

#include "../../System/Vector2D.h"

enum ObjectTags{
	eTag_Player,
	eTag_Enemy,
};

class BaseObject{

public:
	BaseObject() = default;
	BaseObject(float x, float y);
	BaseObject(float x, float y, int rad, unsigned int color);
	virtual ~BaseObject() = default;
	virtual bool Update() = 0;
	virtual void Draw() const = 0;

	Vector2D<float> GetVector();
	int GetRadius();
	void SetAlive(bool alive);

protected:
	Vector2D<float> vec2;
	bool isAlive;
	int radius;
	unsigned int color;

};

