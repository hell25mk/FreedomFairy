#include "Player.h"
#include "../../Input/Keyboard.h"
#include "../../Input/KeyCode.h"

Player::Player(){
}

Player::Player(float x, float y, int rad, unsigned int color):BoxObject(x, y, rad, color){
}

Player::~Player(){
}

void Player::Update(){

	Move();
	Shot();

}

void Player::Draw(){

	BoxObject::Draw();

}

void Player::Move(){

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Up) >= 1){
		vec2.y -= 1.5f;
	}

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Down) >= 1){
		vec2.y += 1.5f;
	}

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Left) >= 1){
		vec2.x -= 1.5f;
	}

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Right) >= 1){
		vec2.x += 1.5f;
	}

}

void Player::Shot(){

	if(Keyboard::GetInstance().Input(keycode::KeyCode_Z) >= 1){

	}

}