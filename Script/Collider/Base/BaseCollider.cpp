#include "BaseCollider.h"
#include "../Manager/ColliderManager.h"

BaseCollider::BaseCollider(){

}

BaseCollider::BaseCollider(Vector2D<float> &vec, int rad){

	this->vec2 = &vec;
	this->radius = rad;

}

BaseCollider::BaseCollider(Vector2D<float> &vec, int rad, int tag){

	this->vec2 = &vec;
	this->radius = rad;
	objectTag = tag;
	ColliderManager::GetInstance().ListPush(this, tag);

}

BaseCollider::~BaseCollider(){



}

Vector2D<float>* BaseCollider::GetVector(){

	return vec2;
}

int BaseCollider::GetRadius(){

	return radius;
}