#include "Controller.h"
#include "../MyLibrary/MyLibrary.h"
#include "Keyboard/Keyboard.h"
#include "GamePad/GamePad.h"

#define MAX(left,right) (((left) > (right)) ? (left) : (right))

using Type = Input::eInputType;

const int Button_Num = 28;

void Controller::Create(){

	aryInputID[Type::Down]	= 0;
	aryInputID[Type::Left]	= 1;
	aryInputID[Type::Right]	= 2;
	aryInputID[Type::Up]	= 3;
	aryInputID[Type::Shot]	= 4;
	aryInputID[Type::Bomb]	= 5;
	aryInputID[Type::Slow]	= 11;

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

	aryInputState[aryInputID[Type::Left]]	= MAX(gamePad->Get((Type::Left)), gameKeyboard->GetPressCount(keycode::Code_Left));
	aryInputState[aryInputID[Type::Up]]		= MAX(gamePad->Get((Type::Up)), gameKeyboard->GetPressCount(keycode::Code_Up));
	aryInputState[aryInputID[Type::Right]]	= MAX(gamePad->Get((Type::Right)), gameKeyboard->GetPressCount(keycode::Code_Right));
	aryInputState[aryInputID[Type::Down]]	= MAX(gamePad->Get((Type::Down)), gameKeyboard->GetPressCount(keycode::Code_Down));

	aryInputState[aryInputID[Type::Shot]]	= MAX(gamePad->Get((Type::Shot)), gameKeyboard->GetPressCount(keycode::Code_Z));
	aryInputState[aryInputID[Type::Shot]]	= MAX(gamePad->Get((Type::Shot)), gameKeyboard->GetPressCount(keycode::Code_Z));
	aryInputState[aryInputID[Type::Bomb]]	= MAX(gamePad->Get((Type::Bomb)), gameKeyboard->GetPressCount(keycode::Code_X));
	aryInputState[aryInputID[Type::Slow]]	= MAX(gamePad->Get((Type::Slow)), gameKeyboard->GetPressCount(keycode::Code_LShift));

}