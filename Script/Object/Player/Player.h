#pragma once

#include "../Base/BaseGameObject.h"

class BaseCollider;

class Player : public BaseGameObject{

public:
	Player() = default;
	Player(float x, float y);
	Player(Vector2D<float>& vec);
	virtual ~Player();
	virtual bool Update() override;
	virtual void Draw() const override;
	void Move();
	void Shot();

private:
	bool isDrawHitRange;

};

