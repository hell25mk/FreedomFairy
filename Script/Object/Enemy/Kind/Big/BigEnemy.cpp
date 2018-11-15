#include "BigEnemy.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"

BigEnemy::BigEnemy(float x, float y):BaseEnemy(x, y){

	moveSpeed = 2.0f;
	moveAngle = Define::Math::Math_Pai / 2 + Define::Math::Math_Pai / 5;
	movePatternID = 0;
	
	radius = 15;
}

void BigEnemy::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}

void BigEnemy::SetSize(){

	//GetGraphSize();
	width = 15;
	height = 15;

}