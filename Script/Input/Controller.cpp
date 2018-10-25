#include "Controller.h"
#include "../MyLibrary/MyLibrary.h"
#include "Keyboard/Keyboard.h"
#include "GamePad/GamePad.h"

const int Button_Num = 28;

Controller::Controller(){

	gameKeyboard = new Keyboard();
	gamePad = new GamePad();

}

Controller::~Controller(){

	SELF_DELETE(gamePad);
	SELF_DELETE(gameKeyboard);

}

bool Controller::Update(){

	gameKeyboard->Update();
	gamePad->Update();

	return true;
}

int Controller::Input(eInputType eID) const{

	return std::max(gamePad->Input((ePadType)eID),gameKeyboard->GetPressCount(eID));
}
