#pragma once

#include "../../Base/BaseObject.h"
#include "../../System/Vector2D.h"

class BaseCollider : public BaseObject{

public:
	BaseCollider();
	virtual ~BaseCollider() = default;
	virtual bool Update();
	virtual void Draw() const = 0;

	void SetVector(const Vector2D<float> vec);
	void SetVector(Vector2D<float>* const vec);
	Vector2D<float> GetVector() const;
	void SetRadius(const int rad);
	int GetRadius() const;
	void SetHitFlag(const bool hit);
	bool GetHitFlag() const;
	void SetAliveFlag(const bool alive);
	bool GetAliveFlag() const;
	void SetObjectTag(const int tag);
	int GetObjectTag() const;
	void SetIsDraw(const bool flg);
	bool GetIsDraw() const;

protected:
	bool isHit;
	bool isAlive;
	Vector2D<float>* vec2;
	int radius;
	int objectTag;
	int color;
	bool isDraw;

};