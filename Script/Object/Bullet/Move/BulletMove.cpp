#include "BulletMove.h"
#include "../../../Define/Define.h"
#include "../../../System/Error/ErrorMacro.h"
#include "../Base/BaseBullet.h"

BulletMove::BulletMove(){

	SetFunction();

}

void BulletMove::Move(BaseBullet* bullet){

	const unsigned int id = bullet->GetMovePatternID();

	if(movePattern.size() <= id){
		ERROR_REPORT("•s³‚ÈmoveID‚Å‚·");
	}

	(this->*movePattern[id])(bullet);

	float x, y;
	float angle = bullet->GetAngle(), speed = bullet->GetSpeed();

	x = cos(angle) * speed;
	y = sin(angle) * speed;
	bullet->GetVector().Add(x, y);

}

void BulletMove::SetFunction(){

	movePattern.push_back(&BulletMove::MovePattern00);
	movePattern.push_back(&BulletMove::MovePattern01);
	movePattern.push_back(&BulletMove::MovePattern02);

}