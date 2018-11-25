#pragma once

#include "../Base/BaseGameObject.h"

class Controller;
class BaseCollider;
class HitPoint;

class Player : public BaseGameObject{

public:
	Player() = default;
	Player(float x, float y);
	virtual ~Player();
	virtual bool Update() override;
	virtual void Draw() const override;
	void Move();
	void Shot();
	void HitAction();

private:
	BaseCollider* collider;
	HitPoint* hp;
	bool isDrawHitRange;

};

