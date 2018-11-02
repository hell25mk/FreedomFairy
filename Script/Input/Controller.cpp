#include "Controller.h"
#include "../MyLibrary/MyLibrary.h"
#include "Keyboard/Keyboard.h"
#include "GamePad/GamePad.h"

#define MAX(left,right) (((left) > (right)) ? (left) : (right))

using type = Input::eInputType;

const int Button_Num = 28;

void Controller::Create(){

	aryInputID[type::Down]	= 0;
	aryInputID[type::Left]	= 1;
	aryInputID[type::Right]	= 2;
	aryInputID[type::Up]	= 3;
	aryInputID[type::Shot]	= 4;
	aryInputID[type::Bomb]	= 5;
	aryInputID[type::Slow]	= 11;

	gameKeyboard = std::make_shared<Keyboard>();
	gamePad = std::make_shared<GamePad>();

}

void Controller::Destroy(){
}

bool Controller::Update(){

	gameKeyboard->Update();
	gamePad->Update();

	Merge();

	return true;
}

int Controller::Get(Input::eInputType eID) const{

	return aryInputState[aryInputID[eID]];
}

void Controller::Merge(){

	aryInputState[aryInputID[type::Left]]	= MAX(gamePad->Get((type::Left)), gameKeyboard->GetPressCount(keycode::Code_Left));
	aryInputState[aryInputID[type::Up]]		= MAX(gamePad->Get((type::Up)), gameKeyboard->GetPressCount(keycode::Code_Up));
	aryInputState[aryInputID[type::Right]]	= MAX(gamePad->Get((type::Right)), gameKeyboard->GetPressCount(keycode::Code_Right));
	aryInputState[aryInputID[type::Down]]	= MAX(gamePad->Get((type::Down)), gameKeyboard->GetPressCount(keycode::Code_Down));

	aryInputState[aryInputID[type::Shot]]	= MAX(gamePad->Get((type::Shot)), gameKeyboard->GetPressCount(keycode::Code_Z));
	aryInputState[aryInputID[type::Shot]]	= MAX(gamePad->Get((type::Shot)), gameKeyboard->GetPressCount(keycode::Code_Z));
	aryInputState[aryInputID[type::Bomb]]	= MAX(gamePad->Get((type::Bomb)), gameKeyboard->GetPressCount(keycode::Code_X));
	aryInputState[aryInputID[type::Slow]]	= MAX(gamePad->Get((type::Slow)), gameKeyboard->GetPressCount(keycode::Code_LShift));

}