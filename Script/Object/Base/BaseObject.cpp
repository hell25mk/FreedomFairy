#include "BaseObject.h"

BaseObject::BaseObject(){

	objectTag = 0;

}

BaseObject::BaseObject(float x, float y){

	this->vec2.Set(x, y);

}

BaseObject::BaseObject(float x, float y, int rad, unsigned int color){

	this->vec2.Set(x, y);
	this->radius = rad;
	this->color = color;

}

BaseObject::~BaseObject(){



}

Vector2D<float> BaseObject::GetVector(){

	return vec2;
}

int BaseObject::GetRadius(){

	return radius;
}

void BaseObject::SetObjectTag(int tag){

	objectTag = tag;

}

void BaseObject::SetAlive(bool alive){

	isAlive = alive;

}