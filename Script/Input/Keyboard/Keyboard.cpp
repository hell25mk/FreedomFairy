#include "Keyboard.h"
#include "DxLib.h"

Keyboard::Keyboard(){

	for(int i = 0; i < Input::Key_Num; i++){

		aryPressCount[i] = 0;

	}

}

bool Keyboard::Update(){

	char nowKeyStatus[Input::Key_Num];
	GetHitKeyStateAll(nowKeyStatus);

	for(int i = 0; i < Input::Key_Num; i++){

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

int Keyboard::GetPressCount(int keyCode) const{

	if(!IsAvailableCode(keyCode)){
		return -1;
	}

	return aryPressCount[keyCode];
}

int Keyboard::GetReleasCount(int keyCode) const{

	if(!IsAvailableCode(keyCode)){
		return -1;
	}

	return aryReleasCount[keyCode];
}

bool Keyboard::IsAvailableCode(int keyCode) const{

	if(!(0 <= keyCode && keyCode < Input::Key_Num)){
		return false;
	}

	return true;
}