#pragma once

#include "../Base/BaseController.h"

#pragma region GameController
class GameController : public BaseController{

public:
	GameController();
	virtual ~GameController();
	virtual void Update() override;
	virtual int Input(int argKeyCode) override;

private:
	static const int KeyType_Num;

private:
	int *arrKeyFrame;

};
#pragma endregion

#pragma region PlayerController
class PlayerController : public BaseController{

public:
	PlayerController();
	PlayerController(int actionTypeNum);
	virtual ~PlayerController();
	virtual void Update() override;
	virtual int Input(int requestCode);
	
private:
	int inputState;

};
#pragma endregion