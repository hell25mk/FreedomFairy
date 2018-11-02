#include "GamePad.h"
#include "DxLib.h"

GamePad::GamePad(){

	aryInputID[Input::eInputType::Down]  = 0;
	aryInputID[Input::eInputType::Left]  = 1;
	aryInputID[Input::eInputType::Right] = 2;
	aryInputID[Input::eInputType::Up]    = 3;
	aryInputID[Input::eInputType::Shot]  = 4;
	aryInputID[Input::eInputType::Bomb]  = 5;
	aryInputID[Input::eInputType::Slow]  = 11;

	for(int i = 0; i < Input::Pad_Num; i++){

		padInputState[i] = 0;

	}

}

bool GamePad::Update(){

	int inputState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	for(int i = 0; i < Input::Pad_Num; i++){

		if(inputState & (1 << i)){
			padInputState[i]++;
		} else{
			padInputState[i] = 0;
		}

	}

	return true;
}

int GamePad::Get(Input::eInputType eID) const{

	return padInputState[aryInputID[eID]];
}