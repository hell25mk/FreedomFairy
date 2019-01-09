#include "BaseCollider.h"
#include "../Manager/ColliderManager.h"
#include "../../Define/Define.h"

BaseCollider::BaseCollider(Vector2D<float> vec, int rad, int tag){

	isHit = false;
	isAlive = true;
	color = Define::ColorCode::Color_Green;
	this->vec2 = vec;
	this->radius = rad;
	objectTag = tag;
	ColliderManager::Instance().ListPush(this, tag);

}

bool BaseCollider::Update(){

	return true;
}

void BaseCollider::SetVector(const Vector2D<float> vec){

	vec2 = vec;

}

Vector2D<float> BaseCollider::GetVector() const{

	return vec2;
}

int BaseCollider::GetRadius() const{

	return radius;
}

void BaseCollider::SetHitFlag(const bool hit){

	isHit = hit;

}

bool BaseCollider::GetHitFlag() const{

	return isHit;
}

void BaseCollider::SetAliveFlag(const bool alive){

	isAlive = alive;

}

bool BaseCollider::GetAliveFlag() const{

	return isAlive;
}