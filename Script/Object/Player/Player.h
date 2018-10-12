#pragma once

#include "../Library/StationeryObject.h"

class Controller;

class Player : public BoxObject{

public:
	Player();
	Player(float x, float y, int rad, unsigned int color);
	virtual ~Player();
	virtual void Update() override;
	virtual void Draw() override;
	void Move();
	void Shot();

private:
	Controller* controller;

};

