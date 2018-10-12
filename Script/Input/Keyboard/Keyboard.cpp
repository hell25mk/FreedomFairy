#include "Keyboard.h"
#include "DxLib.h"

const int Keyboard::KeyType_Num = 256;

void Keyboard::Create(){

	arrKeyFrame = new int[KeyType_Num];

}

void Keyboard::Destroy(){

	delete[] arrKeyFrame;

}

void Keyboard::Update(){

	char tmpKey[256];

	GetHitKeyStateAll(tmpKey);
	
	for(int i = 0; i < KeyType_Num; i++){

		if(tmpKey[i] != 0){
			arrKeyFrame[i]++;
		} else{
			arrKeyFrame[i] = 0;
		}

	}

}

int Keyboard::Input(int argKeyCode){

	return arrKeyFrame[argKeyCode];
}