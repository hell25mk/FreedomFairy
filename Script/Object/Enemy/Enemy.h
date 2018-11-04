#pragma once

#include "../Base/BaseObject.h"

class BaseCollider;
class HitPoint;
class Score;

class Enemy : public BaseObject{

public:
	Enemy();
	Enemy(float x, float y, float speed);
	virtual ~Enemy();
	virtual bool Update() override;
	virtual void Draw() const override;
	void HitAction();

private:
	BaseCollider* collider;
	HitPoint* hp;
	float moveVector;
	Score* score;

};

