#pragma once

#include "../../System/Vector2D.h"

class BaseCollider{

public:
	BaseCollider();
	BaseCollider(Vector2D<float> vec, int rad, int tag);
	virtual ~BaseCollider();
	virtual bool Update();
	virtual void Draw() = 0;

	void SetVector(Vector2D<float> vec);
	Vector2D<float> GetVector();
	void SetAlive(bool alive);
	int GetRadius();
	bool GetHitFlag();

protected:
	bool isHit;
	Vector2D<float> vec2;
	int radius;
	int objectTag;
	int color;

};