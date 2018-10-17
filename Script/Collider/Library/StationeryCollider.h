#pragma once

#include "../Base/BaseCollider.h"

#pragma region CircleCollider
class CircleCollider : public BaseCollider{

public:
	CircleCollider();
	CircleCollider(Vector2D<float> &vec, int rad);
	CircleCollider(Vector2D<float> &vec, int rad, int tag);
	virtual ~CircleCollider();

};
#pragma endregion