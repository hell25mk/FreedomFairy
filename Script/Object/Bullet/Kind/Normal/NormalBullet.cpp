#include "NormalBullet.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"
#include "../../../../System/Image/Image.h"

NormalBullet::NormalBullet(float x,float y):BaseBullet(x,y){

	moveSpeed = 1.3f;
	moveAngle = Define::Math_Pai / 2 - Define::Math_Pai / 5;
	movePatternID = 0;

	SetSize();

}

void NormalBullet::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), (width + height) / 2, Define::ColorCode::Color_Red, true);

}

void NormalBullet::SetSize(){

	width = 5;
	height = 5;

}