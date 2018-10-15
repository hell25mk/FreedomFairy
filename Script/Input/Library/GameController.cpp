#include "Controller.h"
#include "DxLib.h"

const int GameController::KeyType_Num = 256;

GameController::GameController(){

	arrKeyFrame = new int[KeyType_Num];

}

GameController::~GameController(){

	delete[] arrKeyFrame;

}

bool GameController::Update(){

	char tmpKey[256];

	GetHitKeyStateAll(tmpKey);

	for(int i = 0; i < KeyType_Num; i++){

		if(tmpKey[i] != 0){
			arrKeyFrame[i]++;
		} else{
			arrKeyFrame[i] = 0;
		}

	}

	return true;
}

int GameController::Input(int argKeyCode){

	return arrKeyFrame[argKeyCode];
}