#include "Player.h"
#include "DxLib.h"
#include "../../Input/Controller.h"
#include "../Muzzle/Muzzle.h"
#include "../../Main/Window.h"

const float Player::moveSpeed = 3.0f;

Player::Player(){
}

Player::Player(float x, float y):BaseObject(x, y){

	controller = new Controller();
	muzzle = new Muzzle(&vec2);

	radius = 15;
	color = GetColor(255, 255, 255);

}

Player::~Player(){

	delete muzzle;
	muzzle = nullptr;
	delete controller;
	controller = nullptr;

}

bool Player::Update(){

	controller->Update();

	Move();
	Shot();

	muzzle->Update();

	return true;
}

void Player::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}

void Player::Move(){

	//上キー入力
	if(controller->Input(PAD_INPUT_UP) && vec2.GetY() >= 0.0f){
		vec2.Add(0.0f, -moveSpeed);
	}

	//下キー入力
	if(controller->Input(PAD_INPUT_DOWN) && vec2.GetY() <= Window::GetInstance().GetWindowHeight()){
		vec2.Add(0.0f, moveSpeed);
	}

	//左キー入力
	if(controller->Input(PAD_INPUT_LEFT) && vec2.GetX() >= 0.0f){
		vec2.Add(-moveSpeed, 0.0f);
	}

	//右キー入力
	if(controller->Input(PAD_INPUT_RIGHT) && vec2.GetX() <= Window::GetInstance().GetWindowWidth()){
		vec2.Add(moveSpeed, 0.0f);
	}

}

void Player::Shot(){

	//Zキー入力
	if(controller->Input(PAD_INPUT_1)){
		muzzle->Shot();
	}

}