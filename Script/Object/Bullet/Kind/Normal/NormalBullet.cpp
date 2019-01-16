#include "NormalBullet.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"
#include "../../../../System/Image/Image.h"
#include "../../../../Collider/Factory/ColliderFactory.h"
#include "../../../../Collider/Inheritance/StationeryCollider.h"

NormalBullet::NormalBullet(const float x, const float y, const float spd, const float ang, const int tag):BaseBullet(x, y){

	moveSpeed = spd;
	moveAngle = ang;
	movePatternID = 2;

	SetSize();

	collider = ColliderFactory::Instance().CreateCircleCollider(&vec2, width, tag, false);

}

void NormalBullet::Destroy(){

	collider->SetAliveFlag(false);

}

void NormalBullet::Draw() const{

	DrawCircle(vec2.GetDx(), vec2.GetDy(), (width + height) / 2, Define::ColorCode::Color_Red, true);
	//collider->Draw();

}

void NormalBullet::SetSize(){

	width = 5;
	height = 5;

}