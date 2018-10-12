#include "Rigidbody.h"

const float gravityPower = 9.8f;

Rigidbody::Rigidbody(){

	isJump = false;
	jumpPower = 0.0f;

}

Rigidbody::Rigidbody(Vector2D<float> *vec){

	Rigidbody();
	if(vec != nullptr){
		vec2 = vec;
	}

}

Rigidbody::~Rigidbody(){
}

void Rigidbody::Update(){

	Gravity();

	if(isJump){
		Jump();
	}

}

void Rigidbody::Gravity(){

	if(vec2->y <= 480.0f){
		vec2->y += gravityPower;
	}

}

void Rigidbody::SetJumpPower(float jumpPower){

	this->jumpPower = jumpPower;
	isJump = true;

}

void Rigidbody::Jump(){

	vec2->y -= jumpPower;

	if(jumpPower <= 0.0f){
		isJump = false;
	}

}