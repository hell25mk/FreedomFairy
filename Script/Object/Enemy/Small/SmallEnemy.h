#pragma once

#include "../Base/BaseEnemy.h"

class SmallEnemy : public BaseEnemy{

public:
	SmallEnemy(float x,float y);
	virtual ~SmallEnemy() = default;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

};

