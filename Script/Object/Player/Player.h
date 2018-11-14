#pragma once

#include "../Base/BaseObject.h"

class Controller;
class BaseCollider;
class HitPoint;

class Player : public BaseObject{

public:
	Player();
	virtual ~Player();
	virtual bool Update() override;
	virtual void Draw() const override;
	void Move();
	void Shot();
	void HitAction();

private:
	BaseCollider* collider;
	HitPoint* hp;
	float moveSpeed;
	bool isDrawHitRange;

};

