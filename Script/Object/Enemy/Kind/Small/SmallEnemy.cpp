#include "SmallEnemy.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"

namespace Color = Define::ColorCode;

SmallEnemy::SmallEnemy(float x,float y):BaseEnemy(x,y){

	moveSpeed = 2.0f;
	moveAngle = Define::Math_Pai / 2;
	movePatternID = 1;
	
	SetSize();

}

void SmallEnemy::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), (width + height) / 2, Color::Color_Red, true);

}

void SmallEnemy::SetSize(){

	//GetGraphSize();
	width = 5;
	height = 5;

}