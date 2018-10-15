#include "Muzzle.h"
#include "../Bullet/Bullet.h"
#include "../Manager/ObjectManager.h"
#include "DxLib.h"

Muzzle::Muzzle(){
}

Muzzle::Muzzle(float x, float y):BaseObject(x, y){

	radius = 10;
	color = GetColor(255, 255, 255);

}

Muzzle::Muzzle(Vector2D<float> *vec){

	mvec2 = vec;

}

Muzzle::~Muzzle(){
}

bool Muzzle::Update(){



	return true;
}

void Muzzle::Draw(){

	DrawCircle(mvec2->GetDx(), mvec2->GetDy(), radius, color, true);

}

void Muzzle::Shot(){

	Bullet* bullet = new Bullet(mvec2->GetX(), mvec2->GetY(), -5.0f);
	ObjectManager::GetInstance().ListPush(bullet);

}