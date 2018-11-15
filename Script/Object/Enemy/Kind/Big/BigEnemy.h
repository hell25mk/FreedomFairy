#pragma once

#include "../../Base/BaseEnemy.h"

class BigEnemy : public BaseEnemy{

public:
	BigEnemy(float x, float y);
	virtual ~BigEnemy() = default;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

};

