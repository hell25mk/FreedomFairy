#include "EnemyAction.h"
#include "../../../Define/Define.h"
#include "../../../System/Error/ErrorMacro.h"
#include "../Base/BaseEnemy.h"

EnemyAction::EnemyAction(){

	SetFunction();

}

void EnemyAction::Move(BaseEnemy* enemy){

	const unsigned int id = enemy->GetMovePatternID();

	if(movePattern.size() <= id){
		ERROR_REPORT("‘¶Ý‚µ‚È‚¢movePatternID‚ðŽæ“¾‚µ‚Ü‚µ‚½");
	}

	(this->*movePattern[id])(enemy);

	float x, y;
	float angle = enemy->GetAngle(), speed = enemy->GetSpeed();

	x = cos(angle) * speed;
	y = sin(angle) * speed;
	enemy->GetVector().Add(x, y);

}

void EnemyAction::SetFunction(){

	movePattern.push_back(&EnemyAction::MovePattern00);
	movePattern.push_back(&EnemyAction::MovePattern01);
	movePattern.push_back(&EnemyAction::MovePattern02);
	movePattern.push_back(&EnemyAction::MovePattern03);

}