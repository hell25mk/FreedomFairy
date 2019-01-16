#pragma once

#include "../../Base/BaseGameObject.h"
#include <memory>

class BaseCollider;

class Player : public BaseGameObject{

public:
	Player() = default;
	Player(float x, float y);
	Player(Vector2D<float>& vec);
	virtual ~Player() = default;
	virtual void Init() override;
	virtual void Destroy() override;
	virtual bool Update() override;
	virtual void Draw() const override;
	void Move();
	void Shot();

private:
	bool isDrawHitRange;
	int shotDelayCount;
	std::shared_ptr<BaseCollider> collider;

};

