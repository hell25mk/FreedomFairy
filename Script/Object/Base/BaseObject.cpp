#include "BaseObject.h"

BaseObject::BaseObject(){
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

void BaseObject::SetAlive(bool alive){

	isAlive = alive;

}