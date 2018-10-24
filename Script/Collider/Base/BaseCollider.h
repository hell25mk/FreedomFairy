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

	void SetHitFlag(bool hit);
	bool GetHitFlag();
	void SetAliveFlag(bool alive);
	bool GetAliveFlag();
	int GetRadius();

protected:
	bool isHit;
	bool isAlive;
	Vector2D<float> vec2;
	int radius;
	int objectTag;
	int color;

};