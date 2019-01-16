#include "Controller.h"
#include "../MyLibrary/MyLibrary.h"
#include "Keyboard/Keyboard.h"
#include "GamePad/GamePad.h"

template<typename Type>
constexpr Type Max(Type left, Type right){

	return (left > right) ? left : right;
}

using Type = Input::eInputType;

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

	aryInputState[aryInputID[Type::Left]]	= Max(gamePad->Get((Type::Left)),	gameKeyboard->GetPressCount(KeyCode::Code_Left));
	aryInputState[aryInputID[Type::Up]]		= Max(gamePad->Get((Type::Up)),		gameKeyboard->GetPressCount(KeyCode::Code_Up));
	aryInputState[aryInputID[Type::Right]]	= Max(gamePad->Get((Type::Right)),	gameKeyboard->GetPressCount(KeyCode::Code_Right));
	aryInputState[aryInputID[Type::Down]]	= Max(gamePad->Get((Type::Down)),	gameKeyboard->GetPressCount(KeyCode::Code_Down));

	aryInputState[aryInputID[Type::Shot]]	= Max(gamePad->Get((Type::Shot)),	gameKeyboard->GetPressCount(KeyCode::Code_Z));
	aryInputState[aryInputID[Type::Shot]]	= Max(gamePad->Get((Type::Shot)),	gameKeyboard->GetPressCount(KeyCode::Code_Z));
	aryInputState[aryInputID[Type::Bomb]]	= Max(gamePad->Get((Type::Bomb)),	gameKeyboard->GetPressCount(KeyCode::Code_X));
	aryInputState[aryInputID[Type::Slow]]	= Max(gamePad->Get((Type::Slow)),	gameKeyboard->GetPressCount(KeyCode::Code_LShift));

}