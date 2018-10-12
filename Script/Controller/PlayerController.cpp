#include "PlayerController.h"
#include "../Input/Keyboard.h"
#include "../Input/KeyCode.h"

PlayerController::PlayerController(){
}

PlayerController::~PlayerController(){
}

void PlayerController::Update(){

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Space) == 1){
		
	}

}

void PlayerController::Draw(){



}