#include "Enemy.h"
#include "DxLib.h"

Enemy::Enemy(){
}

Enemy::Enemy(float x, float y){

	vec2.Set(x, y);
	isAlive = true;
	radius = 25;
	color = GetColor(255, 0, 0);

}

Enemy::~Enemy(){
}

bool Enemy::Update(){



	return isAlive;
}

void Enemy::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy, radius, color, true);

}