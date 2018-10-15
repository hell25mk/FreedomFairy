#include "Controller.h"
#include "DxLib.h"

const int Button_Num = 28;

PlayerController::PlayerController(){
}

PlayerController::~PlayerController(){
}

PlayerController::PlayerController(int actionTypeNum){
}

void PlayerController::Update(){

	inputState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

}

int PlayerController::Input(int requestCode){

	return inputState & requestCode;
}
