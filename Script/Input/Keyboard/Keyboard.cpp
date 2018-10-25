#include "Keyboard.h"
#include "DxLib.h"

Keyboard::Keyboard(){
}

Keyboard::~Keyboard(){
}

bool Keyboard::Update(){

	char nowKeyStatus[InputKey_Num];
	GetHitKeyStateAll(nowKeyStatus);

	for(int i = 0; i < InputKey_Num; i++){

		if(nowKeyStatus[i] != 0){
			if(aryReleasCount[i] > 0){
				aryReleasCount[i] = 0;
			}
			aryPressCount[i]++;
		} else{
			if(aryPressCount[i] > 0){
				aryPressCount[i] = 0;
			}
			aryReleasCount[i]++;
		}

	}

	return true;
}

int Keyboard::GetPressCount(int keyCode){

	if(!IsAvailableCode(keyCode)){
		return -1;
	}

	return aryPressCount[keyCode];
}

int Keyboard::GetReleasCount(int keyCode){

	if(!IsAvailableCode(keyCode)){
		return -1;
	}

	return aryReleasCount[keyCode];
}

bool Keyboard::IsAvailableCode(int keyCode){

	if(!(0 <= keyCode && keyCode < InputKey_Num)){
		return false;
	}

	return true;
}