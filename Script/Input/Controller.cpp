#include "Controller.h"
#include "DxLib.h"

const int Button_Num = 28;

Controller::Controller(){
}

Controller::~Controller(){
}

Controller::Controller(int actionTypeNum){
}

bool Controller::Update(){

	inputState = GetJoypadInputState(DX_INPUT_KEY_PAD1);

	return true;
}

int Controller::Input(int requestCode){

	return inputState & requestCode;
}
