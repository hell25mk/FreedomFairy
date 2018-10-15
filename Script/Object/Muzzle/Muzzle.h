#pragma once

#include "../Base/BaseObject.h"

class Muzzle : public BaseObject{

public:
	Muzzle();
	Muzzle(float x, float y);
	Muzzle(Vector2D<float> *vec);
	virtual ~Muzzle();
	virtual bool Update() override;
	virtual void Draw() override;
	void Shot();

private:
	Vector2D<float>* mvec2;

};

