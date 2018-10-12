#include "PlayerController.h"
#include "../Input/Keyboard.h"
#include "../Input/KeyCode.h"

PlayerController::PlayerController(){
}

PlayerController::~PlayerController(){
}

int PlayerController::Update(){

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Space) == 1){
		
	}

	return 0;
}

void PlayerController::Draw(){



}