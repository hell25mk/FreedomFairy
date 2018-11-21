#include "EnemyMove.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"

//‰º‚É‰º‚ª‚Á‚Äˆê’â~A‚»‚ÌŒãÄ“x‰º‚ª‚é
void EnemyMove::MovePattern00(BaseEnemy* enemy){

	const int count = enemy->GetCount();
	const int wait = 180;

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai / 2);
		enemy->SetSpeed(3.0f);
		return;
	}
	if(count > 50 && count <= 80){
		enemy->SetSpeed(enemy->GetSpeed() - 0.1f);
		return;
	}
	if(count > wait + 80 && count <= wait + 80 + 30){
		enemy->SetSpeed(enemy->GetSpeed() + 0.1f);
		return;
	}

}

//¶‰º‚ÖˆÚ“®
void EnemyMove::MovePattern01(BaseEnemy* enemy){

	const int count = enemy->GetCount();

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai * 3 / 4);
		enemy->SetSpeed(3.0f);
		return;
	}

}

//‰E‰º‚ÖˆÚ“®
void EnemyMove::MovePattern02(BaseEnemy* enemy){

	const int count = enemy->GetCount();

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai * 1 / 4);
		enemy->SetSpeed(3.0f);
		return;
	}

}

void EnemyMove::MovePattern03(BaseEnemy* enemy){

	const int count = enemy->GetCount();
	const int wait = 180;

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai / 2);
		enemy->SetSpeed(3.0f);
		return;
	}
	if(count > 50 && count <= 80){
		enemy->SetSpeed(enemy->GetSpeed() - 0.1f);
		return;
	}

}