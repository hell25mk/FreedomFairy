#include "Player.h"
#include "DxLib.h"
#include "../../Input/Controller.h"

const float Player::moveSpeed = 3.0f;

Player::Player(){
}

Player::Player(float x, float y):BaseObject(x, y){

	controller = new Controller();
	radius = 5;
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
	if(controller->Input(PAD_INPUT_UP)){
		vec2.y -= moveSpeed;
	}

	//���L�[����
	if(controller->Input(PAD_INPUT_DOWN)){
		vec2.y += moveSpeed;
	}

	//���L�[����
	if(controller->Input(PAD_INPUT_LEFT)){
		vec2.x -= moveSpeed;
	}

	//�E�L�[����
	if(controller->Input(PAD_INPUT_RIGHT)){
		vec2.x += moveSpeed;
	}

}

void Player::Shot(){

	//Z�L�[����
	if(controller->Input(PAD_INPUT_1)){

	}

}