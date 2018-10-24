#pragma once

#include "../../System/Vector2D.h"

enum ObjectTags{
	eTag_Player,
	eTag_Enemy,
};

class BaseObject{

public:
	BaseObject();
	BaseObject(float x, float y);
	BaseObject(float x, float y, int rad, unsigned int color);
	virtual ~BaseObject();
	virtual bool Update() = 0;
	virtual void Draw() = 0;

	void ListRegistration(BaseObject* obj);
	Vector2D<float> GetVector();
	int GetRadius();
	void SetAlive(bool alive);

protected:
	Vector2D<float> vec2;
	bool isAlive;
	int radius;
	unsigned int color;

};

