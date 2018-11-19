#include "EnemyMove.h"
#include "../../../Define/Define.h"
#include "../../../System/Error/ErrorMacro.h"
#include "../Base/BaseEnemy.h"
#include <math.h>

EnemyMove::EnemyMove(){

	SetFunction();

}

void EnemyMove::Move(BaseEnemy* enemy){

	const unsigned int id = enemy->GetMovePatternID();

	if(movePattern.size() <= id){
		ERROR_REPORT("•s³‚ÈmoveID‚Å‚·");
	}

	(this->*movePattern[id])(enemy);

	float x, y;
	float angle = enemy->GetAngle(), speed = enemy->GetSpeed();

	x = cos(angle) * speed;
	y = sin(angle) * speed;
	enemy->GetVector().Add(x, y);

}

void EnemyMove::SetFunction(){

	movePattern.push_back(&EnemyMove::MovePattern00);
	movePattern.push_back(&EnemyMove::MovePattern01);
	movePattern.push_back(&EnemyMove::MovePattern02);
	movePattern.push_back(&EnemyMove::MovePattern03);

}