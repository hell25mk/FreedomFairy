#include "GamePad.h"
#include "DxLib.h"

enum ePadType{
	eType_Left,
	eType_Up,
	eType_Right,
	eType_Down,
	eType_Shot,
	eType_Bomb,
	eType_Slow,
};

GamePad::GamePad(){

	aryInputID[ePadType::eType_Down]  = 0;
	aryInputID[ePadType::eType_Left]  = 1;
	aryInputID[ePadType::eType_Right] = 2;
	aryInputID[ePadType::eType_Up]    = 3;
	aryInputID[ePadType::eType_Bomb]  = 4;
	aryInputID[ePadType::eType_Shot]  = 5;
	aryInputID[ePadType::eType_Slow]  = 11;

}

GamePad::~GamePad(){
}

bool GamePad::Update(){

	int inputState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	for(int i = 0; i < InputType_Num; i++){

		if(inputState & (1 << i)){
			padInputState[i]++;
		} else{
			padInputState[i] = 0;
		}

	}

	return true;
}

int GamePad::Input(ePadType eID) const{

	return padInputState[aryInputID[eID]];
}