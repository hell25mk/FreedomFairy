#include "BaseBullet.h"
#include "../../../Define/Define.h"

namespace Game = Define::GameSize;

BaseBullet::BaseBullet(float x,float y):BaseGameObject(x,y){

	Init();

}

BaseBullet::BaseBullet(Vector2D<float> vec):BaseGameObject(vec){

	Init();

}

void BaseBullet::Init(){

	moveAngle = 0;
	counter = 0;
	width = 0;
	height = 0;

}

bool BaseBullet::Update(){

	bulletMove.Move(this);
	//Move();
	counter++;

	return IsInside();
}

bool BaseBullet::IsInside() const{

	//ç≈èâ1ïbÇÕîªíËñ≥Çµ
	if(counter < 60){
		return true;
	}

	float x = vec2.GetX();
	float y = vec2.GetY();

	//îÕàÕÇÃämîF
	if(x < Game::In_Px - width * 2){
		return false;
	}
	if(x > Game::Out_Width + width * 2){
		return false;
	}
	if(y < Game::In_Py - height * 2){
		return false;
	}
	if(y > Game::Out_Height + height * 2){
		return false;
	}

	return true;
}

void BaseBullet::Move(){

	bulletMove.Move(this);
	/*float x, y;

	x = cos(moveAngle) * moveSpeed;
	y = sin(moveAngle) * moveSpeed;
	vec2.Add(x, y);*/

}

#pragma region Accessor
float BaseBullet::GetSpeed() const{

	return moveSpeed;
}

void BaseBullet::SetSpeed(const float spd){

	moveSpeed = spd;

}

float BaseBullet::GetAngle() const{

	return moveAngle;
}

void BaseBullet::SetAngle(const float ang){

	moveAngle = ang;

}

int BaseBullet::GetCount() const{

	return counter;
}

int BaseBullet::GetMovePatternID() const{

	return movePatternID;
}
#pragma endregion