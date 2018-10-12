#include "Player.h"

Player::Player(){
}

Player::Player(float x, float y, int rad, unsigned int color):BoxObject(x, y, rad, color){
}

Player::~Player(){
}

void Player::Update(){



}

void Player::Draw(){

	BoxObject::Draw();

}