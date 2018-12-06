#include "BaseGameObject.h"

BaseGameObject::BaseGameObject(float x, float y){

	vec2.Set(x, y);
	Init();

}

BaseGameObject::BaseGameObject(Vector2D<float>& vec){

	vec2 = vec;
	Init();

}

void BaseGameObject::Init(){

	moveSpeed = 0.0f;
	isAlive = true;
	width = 0;
	height = 0;

	imageHandle = 0;
	imageDivHandle = nullptr;

}

Vector2D<float>& BaseGameObject::GetVector(){

	return vec2;
}

void BaseGameObject::SetAlive(bool alive){

	isAlive = alive;

}