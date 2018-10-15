#include "Bullet.h"
#include "../../Main/Window.h"
#include "DxLib.h"

Bullet::Bullet(){
}

Bullet::Bullet(Vector2D<float>* vec, float speed){

	vec2.Set(vec->GetX(), vec->GetY());
	moveSpeed = speed;
	radius = 3;
	color = GetColor(255, 255, 255);

}

Bullet::~Bullet(){
}

bool Bullet::Update(){

	vec2.Add(0.0f, moveSpeed);

	if(vec2.GetY() <= 0){
		return false;
	}

	if(vec2.GetY() >= Window::GetInstance().GetWindowHeight()){
		return false;
	}

	if(vec2.GetX() <= 0){
		return false;
	}

	if(vec2.GetX() >= Window::GetInstance().GetWindowWidth()){
		return false;
	}

	return true;
}

void Bullet::Draw(){

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}