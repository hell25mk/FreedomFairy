#pragma once

#include "../Base/BaseObject.h"

class Bullet : public BaseObject{

public:
	Bullet();
	Bullet(float x, float y);
	virtual ~Bullet();
	virtual bool Update() override;
	virtual void Draw() override;

private:
	float moveSpeed;

};

