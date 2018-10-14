#include "Player.h"
#include "../../Input/Library/Controller.h"
#include "../../Input/Library/KeyCode.h"

enum EnumPlayerAction{
	eMove_Up,
	eMove_Down,
	eMove_Left,
	eMove_Right,

	eAttack_Shot,

	eActionNum,
};

Player::Player(){
}

Player::Player(float x, float y, int rad, unsigned int color):BoxObject(x, y, rad, color){

	actionType = new bool[eActionNum];

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

	if(actionType[eMove_Up]){
		vec2.y -= 1.5f;
	}

	if(actionType[eMove_Down]){
		vec2.y += 1.5f;
	}

	if(actionType[eMove_Left]){
		vec2.x -= 1.5f;
	}

	if(actionType[eMove_Right]){
		vec2.x += 1.5f;
	}

}

void Player::Shot(){

	if(actionType[eAttack_Shot]){

	}

}