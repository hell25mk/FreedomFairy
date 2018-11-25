#include "BigEnemy.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"

namespace Color = Define::ColorCode;

BigEnemy::BigEnemy(float x, float y):BaseEnemy(x, y){

	moveSpeed = 2.0f;
	moveAngle = Define::Math_Pai / 2 + Define::Math_Pai / 5;
	movePatternID = 0;
	
	SetSize();

}

void BigEnemy::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), (width + height) / 2, Color::Color_Red, true);

}

void BigEnemy::SetSize(){

	//GetGraphSize();
	width = 15;
	height = 15;

}