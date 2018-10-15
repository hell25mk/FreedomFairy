#include "Player.h"
#include "DxLib.h"
#include "../../Input/Library/Controller.h"
#include "../../Input/Library/KeyCode.h"

const float Player::moveSpeed = 3.0f;

Player::Player(){
}

Player::Player(float x, float y, int rad, unsigned int color):BoxObject(x, y, rad, color){

	controller = new PlayerController();

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

	BoxObject::Draw();

}

void Player::Move(){

	//上キー入力
	if(controller->Input(PAD_INPUT_UP)){
		vec2.y -= moveSpeed;
	}

	//下キー入力
	if(controller->Input(PAD_INPUT_DOWN)){
		vec2.y += moveSpeed;
	}

	//左キー入力
	if(controller->Input(PAD_INPUT_LEFT)){
		vec2.x -= moveSpeed;
	}

	//右キー入力
	if(controller->Input(PAD_INPUT_RIGHT)){
		vec2.x += moveSpeed;
	}

}

void Player::Shot(){

	//Zキー入力
	if(controller->Input(PAD_INPUT_1)){

	}

}