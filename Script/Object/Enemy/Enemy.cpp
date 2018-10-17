#include "Enemy.h"
#include "DxLib.h"

Enemy::Enemy(){
}

Enemy::Enemy(float x, float y, float speed){

	vec2.Set(x, y);
	isAlive = true;
	moveSpeed = speed;

	radius = 20;
	color = GetColor(255, 0, 0);

}

Enemy::~Enemy(){
}

bool Enemy::Update(){

	vec2.Add(0.0f, moveSpeed);

	if(vec2.GetY() >= 480){
		return false;
	}

	return isAlive;
}

void Enemy::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}