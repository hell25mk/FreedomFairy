#include "Enemy.h"
#include "DxLib.h"
#include "../../Collider/Inheritance/StationeryCollider.h"

Enemy::Enemy(){
}

Enemy::Enemy(float x, float y, float speed):BaseObject(x, y){

	isAlive = true;
	moveVector = speed;

	radius = 20;
	color = GetColor(255, 0, 0);

	collider = new CircleCollider(vec2, radius, eTag_Enemy);

}

Enemy::~Enemy(){

	collider->SetAliveFlag(false);

}

bool Enemy::Update(){

	if(collider->GetHitFlag()){
		return false;
	}

	vec2.Add(0.0f, moveVector);

	if(vec2.GetY() >= 480){
		return false;
	}

	collider->SetVector(vec2);

	return isAlive;
}

void Enemy::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);
	collider->Draw();

}