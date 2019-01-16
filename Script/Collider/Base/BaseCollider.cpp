#include "BaseCollider.h"
#include "../../Define/Define.h"

BaseCollider::BaseCollider()
	:isHit(false),isAlive(true),color(Define::ColorCode::Color_Green){
}

bool BaseCollider::Update(){

	return true;
}

void BaseCollider::SetVector(const Vector2D<float> vec){

	*vec2 = vec;

}

void BaseCollider::SetVector(Vector2D<float>* const vec){

	vec2 = vec;

}

Vector2D<float> BaseCollider::GetVector() const{

	return *vec2;
}

void BaseCollider::SetRadius(const int rad){

	radius = rad;

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

void BaseCollider::SetObjectTag(const int tag){

	objectTag = tag;

}

int BaseCollider::GetObjectTag() const{

	return objectTag;
}

void BaseCollider::SetIsDraw(const bool flg){

	isDraw = flg;

}

bool BaseCollider::GetIsDraw() const{

	return isDraw;
}