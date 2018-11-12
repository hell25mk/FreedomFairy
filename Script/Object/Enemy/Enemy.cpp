#include "Enemy.h"
#include "DxLib.h"
#include "../../Define/Define.h"
#include <math.h>
#include "../../Collider/Inheritance/StationeryCollider.h"
#include "../../System/Score/Score.h"
#include "../../System/HitPoint/HitPoint.h"

Enemy::Enemy(){
}

Enemy::Enemy(float x, float y):BaseObject(x, y){

	isAlive = true;
	moveSpeed = 2.0f;
	moveAngle = Define::Math::Math_Pai / 2;

	radius = 20;
	color = GetColor(255, 0, 0);

	collider = new CircleCollider(vec2, radius, eTag_Enemy);
	hp = new HitPoint(5);
	score = new Score(100);

}

Enemy::~Enemy(){

	delete score;
	delete hp;
	collider->SetAliveFlag(false);

}

bool Enemy::Update(){

	if(collider->GetHitFlag()){
		HitAction();
	}

	float x, y;

	x = (float)cos(moveAngle) * moveSpeed;
	y = (float)sin(moveAngle) * moveSpeed;
	
	vec2.Add(x, y);

	if(vec2.GetY() >= 520){
		return false;
	}

	collider->SetVector(vec2);

	return isAlive;
}

void Enemy::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);
	//collider->Draw();

}

void Enemy::HitAction(){

	hp->Sub(1);

	switch(hp->Get()){
		case 3:
			color = GetColor(0, 255, 0);
			break;
		case 1:
			color = GetColor(0, 0, 255);
			break;
		default:
			break;
	};
	
	if(hp->Get() == 0){
		score->Release();
		isAlive = false;
	}

	collider->SetHitFlag(false);

}