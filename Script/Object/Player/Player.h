#pragma once

#include "../Library/StationeryObject.h"

enum EnumPlayerAction : int;

class Keyboard;
class BaseController;

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
	Keyboard* keyboard;
	BaseController* controller;
	bool* actionType;

};

