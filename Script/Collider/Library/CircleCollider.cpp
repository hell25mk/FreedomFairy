#include "StationeryCollider.h"

CircleCollider::CircleCollider(){



}

CircleCollider::~CircleCollider(){



}

CircleCollider::CircleCollider(Vector2D<float> &vec, int rad){

	this->vec2 = &vec;
	this->radius = rad;

}

CircleCollider::CircleCollider(Vector2D<float> &vec, int rad, int tag){

	this->vec2 = &vec;
	this->radius = rad;
	objectTag = tag;

}