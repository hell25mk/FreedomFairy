#include "Player.h"
#include "DxLib.h"
#include "../../Input/Controller.h"
#include "../../Main/Window.h"

const float Player::moveSpeed = 3.0f;

Player::Player(){
}

Player::Player(float x, float y):BaseObject(x, y){

	controller = new Controller();
	radius = 15;
	color = GetColor(255, 255, 255);

}

Player::~Player(){

	delete controller;
	controller = NULL;

}

bool Player::Update(){

	controller->Update();

	Move();
	Shot();

	return true;
}

void Player::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}

void Player::Move(){

	//��L�[����
	if(controller->Input(PAD_INPUT_UP) && vec2.GetY() >= 0.0f){
		vec2.Add(0.0f, -moveSpeed);
	}

	//���L�[����
	if(controller->Input(PAD_INPUT_DOWN) && vec2.GetY() <= Window::GetInstance().GetWindowHeight()){
		vec2.Add(0.0f, moveSpeed);
	}

	//���L�[����
	if(controller->Input(PAD_INPUT_LEFT) && vec2.GetY() >= 0.0f){
		vec2.Add(-moveSpeed, 0.0f);
	}

	//�E�L�[����
	if(controller->Input(PAD_INPUT_RIGHT) && vec2.GetY() <= Window::GetInstance().GetWindowWidth()){
		vec2.Add(moveSpeed, 0.0f);
	}

}

void Player::Shot(){

	//Z�L�[����
	if(controller->Input(PAD_INPUT_1)){

	}

}