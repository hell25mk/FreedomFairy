#pragma once

#include "../Base/BaseObject.h"

class Enemy : public BaseObject{

public:
	Enemy();
	Enemy(float x, float y);
	virtual ~Enemy();
	virtual bool Update() override;
	virtual void Draw() override;

};

