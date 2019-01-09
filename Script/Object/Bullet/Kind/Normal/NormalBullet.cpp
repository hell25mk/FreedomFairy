#include "NormalBullet.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"
#include "../../../../System/Image/Image.h"

NormalBullet::NormalBullet(const float x, const float y, const float spd, const float ang):BaseBullet(x, y){

	moveSpeed = spd;
	moveAngle = ang;
	movePatternID = 2;

	SetSize();

}

void NormalBullet::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), (width + height) / 2, Define::ColorCode::Color_Red, true);

}

void NormalBullet::SetSize(){

	width = 5;
	height = 5;

}