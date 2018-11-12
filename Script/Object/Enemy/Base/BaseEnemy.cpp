#include "BaseEnemy.h"
#include "../../../Define/Define.h"
#include <math.h>

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

	counter++;

	float x = (float)cos(moveAngle) * moveSpeed;
	float y = (float)sin(moveAngle) * moveSpeed;

	vec2.Add(x, y);

	return  true;
}