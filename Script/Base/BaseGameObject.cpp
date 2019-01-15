#include "BaseGameObject.h"

BaseGameObject::BaseGameObject()
	:moveSpeed(0), isAlive(true), width(0), height(0), imageHandle(0), imageDivHandle(nullptr){
}

BaseGameObject::BaseGameObject(float x, float y){

	vec2.Set(x, y);

}

BaseGameObject::BaseGameObject(Vector2D<float>& vec):vec2(vec){
}

Vector2D<float>& BaseGameObject::GetVector(){

	return vec2;
}

void BaseGameObject::SetAlive(bool alive){

	isAlive = alive;

}