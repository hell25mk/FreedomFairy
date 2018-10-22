#include "BaseCollider.h"
#include "../Manager/ColliderManager.h"
#include "DxLib.h"

const int Color_Green = GetColor(0, 255, 0);

BaseCollider::BaseCollider(){

	

}
BaseCollider::BaseCollider(Vector2D<float> vec, int rad, int tag){

	isHit = false;
	isAlive = true;
	color = Color_Green;
	this->vec2 = vec;
	this->radius = rad;
	objectTag = tag;
	ColliderManager::GetInstance().ListPush(this, tag);

}

BaseCollider::~BaseCollider(){



}

bool BaseCollider::Update(){


	return true;
}

void BaseCollider::SetVector(Vector2D<float> vec){

	vec2 = vec;

}

Vector2D<float> BaseCollider::GetVector(){

	return vec2;
}

int BaseCollider::GetRadius(){

	return radius;
}

void BaseCollider::SetHitFlag(bool hit){

	isHit = hit;

}

bool BaseCollider::GetHitFlag(){

	return isHit;
}

void BaseCollider::SetAliveFlag(bool alive){

	isAlive = alive;

}

bool BaseCollider::GetAliveFlag(){

	return isAlive;
}