#pragma once

#include "../../Base/BaseObject.h"

class BaseEnemy : public BaseObject{

public:
	BaseEnemy(float x, float y);
	virtual ~BaseEnemy() = default;
	void Init();
	virtual bool Update() override;

protected:
	virtual void SetSize() = 0;

protected:
	float moveSpeed;
	float moveAngle;

	int counter;
	int width;
	int height;

};

