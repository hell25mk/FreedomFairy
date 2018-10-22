#pragma once

#include "../Base/BaseObject.h"

class BaseCollider;

class Enemy : public BaseObject{

public:
	Enemy();
	Enemy(float x, float y, float speed);
	virtual ~Enemy();
	virtual bool Update() override;
	virtual void Draw() override;

private:
	BaseCollider* collider;
	float moveVector;

};

