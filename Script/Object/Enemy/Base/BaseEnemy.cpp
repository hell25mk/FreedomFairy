#include "BaseEnemy.h"
#include "../../../Define/Define.h"
#include <math.h>

using Win = Define::Window;

BaseEnemy::BaseEnemy(float x, float y):BaseObject(x,y){

	moveSpeed = 0;
	moveAngle = 0;
	counter = 0;
	width = 0;
	height = 0;

}

void BaseEnemy::Init(){

	SetSize();

}

bool BaseEnemy::Update(){

	enemyMove.Move(this);
	counter++;

	return  IsInside();
}

bool BaseEnemy::IsInside() const{

	//�ŏ�1�b�͔��薳��
	if(counter < 60){
		return true;
	}

	float x = vec2.GetX();
	float y = vec2.GetY();

	//�͈͂̊m�F
	if(x < Win::In_Px - width * 2){
		return false;
	}
	if(x > Win::In_Width + width * 2){
		return false;
	}
	if(y < Win::In_Py - height * 2){
		return false;
	}
	if(y > Win::In_Height + height * 2 ){
		return false;
	}

	return true;
}

#pragma region Accessor
float BaseEnemy::GetSpeed() const{

	return moveSpeed;
}

void BaseEnemy::SetSpeed(const float spd){

	moveSpeed = spd;

}

float BaseEnemy::GetAngle() const{

	return moveAngle;
}

void BaseEnemy::SetAngle(const float ang){

	moveAngle = ang;

}

int BaseEnemy::GetCount() const{

	return counter;
}

int BaseEnemy::GetMovePatternID() const{

	return movePatternID;
}
#pragma endregion
