#pragma once

#include <array>

class Keyboard;
class GamePad;

enum eInputType{
	eType_Left,
	eType_Up,
	eType_Right,
	eType_Down,
	eType_Shot,
	eType_Bomb,
	eType_Slow,
};

class Controller{

public:
	Controller();
	~Controller();
	bool Update();
	int Input(eInputType eID) const;
	
private:
	Keyboard* gameKeyboard;
	GamePad* gamePad;

};