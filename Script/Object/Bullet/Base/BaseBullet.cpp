#include "BaseBullet.h"
#include "../../../Define/Define.h"

using Win = Define::Window;

BaseBullet::BaseBullet(float x,float y):BaseObject(x,y){

	moveSpeed = 0;
	moveAngle = 0;
	counter = 0;
	width = 0;
	height = 0;

}

void BaseBullet::Init(){

	SetSize();

}

bool BaseBullet::Update(){

	bulletMove.Move(this);
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
	if(x < Win::In_Px - width * 2){
		return false;
	}
	if(x > Win::Out_Width + width * 2){
		return false;
	}
	if(y < Win::In_Py - height * 2){
		return false;
	}
	if(y > Win::Out_Height + height * 2){
		return false;
	}

	return true;
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