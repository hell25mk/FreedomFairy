#pragma once

#include "../Base/BaseObject.h"

class Controller;
class BaseCollider;

class Player : public BaseObject{

public:
	Player();
	Player(float x, float y);
	virtual ~Player();
	virtual bool Update() override;
	virtual void Draw() override;
	void Move();
	void Shot();

private:
	Controller* controller;
	BaseCollider* collider;
	float moveVector;

};

