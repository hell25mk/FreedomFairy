#include "BaseObject.h"

BaseObject::BaseObject(float x, float y){

	this->vec2.Set(x, y);

}

BaseObject::BaseObject(float x, float y, int rad, unsigned int color){

	this->vec2.Set(x, y);
	this->radius = rad;
	this->color = color;

}

Vector2D<float>& BaseObject::GetVector(){

	return vec2;
}

int BaseObject::GetRadius(){

	return radius;
}

void BaseObject::SetAlive(bool alive){

	isAlive = alive;

}