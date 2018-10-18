#pragma once

#include "../Base/BaseObject.h"

class Bullet : public BaseObject{

public:
	Bullet();
	Bullet(Vector2D<float> vec, int rad, float speed);
	virtual ~Bullet();
	virtual bool Update() override;
	virtual void Draw() override;

private:
	float moveVector;

};

