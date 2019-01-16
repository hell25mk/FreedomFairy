#pragma once

#include "../Base/BaseCollider.h"

#pragma region CircleCollider
class CircleCollider : public BaseCollider{

public:
	CircleCollider();
	virtual ~CircleCollider() = default;
	virtual bool Update() override;
	virtual void Draw() const override;

};
#pragma endregion