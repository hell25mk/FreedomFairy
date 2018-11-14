#pragma once

#include "../../Base/BaseEnemy.h"

class NormalEnemy : public BaseEnemy{

public:
	NormalEnemy(float x, float y);
	virtual ~NormalEnemy() = default;
	virtual void Draw() const override;

protected:
	virtual void SetSize() override;

};