#include "Enemy.h"
#include "DxLib.h"

Enemy::Enemy(){
}

Enemy::Enemy(float x, float y, float speed){

	vec2.Set(x, y);
	isAlive = true;
	moveVector = speed;
	objectTag = eTag_Enemy;

	radius = 20;
	color = GetColor(255, 0, 0);

}

Enemy::~Enemy(){


}

bool Enemy::Update(){

	vec2.Add(0.0f, moveVector);

	if(vec2.GetY() >= 480){
		return false;
	}

	return isAlive;
}

void Enemy::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}