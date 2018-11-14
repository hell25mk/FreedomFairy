#include "NormalEnemy.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"

NormalEnemy::NormalEnemy(float x, float y):BaseEnemy(x, y){

	moveSpeed = 2.0f;
	moveAngle = Define::Math::Math_Pai / 2 - Define::Math::Math_Pai / 5;
	movePatternID = 2;
	
	radius = 10;
}

void NormalEnemy::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), radius, color, true);

}

void NormalEnemy::SetSize(){

	//GetGraphSize();
	width = 10;
	height = 10;

}