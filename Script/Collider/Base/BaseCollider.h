#pragma once

#include "../../System/Vector2D.h"

class BaseCollider{

public:
	BaseCollider() = default;
	BaseCollider(Vector2D<float> vec, int rad, int tag);
	virtual ~BaseCollider() = default;
	virtual bool Update();
	virtual void Draw() const = 0;

	void SetVector(const Vector2D<float> vec);
	Vector2D<float> GetVector() const;
	void SetHitFlag(const bool hit);
	bool GetHitFlag() const;
	void SetAliveFlag(const bool alive);
	bool GetAliveFlag() const;
	int GetRadius() const;

protected:
	bool isHit;
	bool isAlive;
	Vector2D<float> vec2;
	int radius;
	int objectTag;
	int color;

};