#pragma once

#include "../Base/BaseObject.h"

#pragma region BoxObject
class BoxObject : public BaseObject{

public:
	BoxObject();
	BoxObject(float x, float y, int rad, unsigned int color);
	virtual ~BoxObject();
	virtual void Update() override;
	virtual void Draw() override;

};
#pragma endregion

#pragma region CircleObject
class CircleObject : public BaseObject{

public:
	CircleObject();
	CircleObject(float x, float y, int rad, unsigned int color);
	virtual ~CircleObject();
	virtual void Update() override;
	virtual void Draw() override;

};
#pragma endregion
