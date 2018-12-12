#include "EnemyAction.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"

//下に下がって一時停止、その後再度下がる
void EnemyAction::MovePattern00(BaseEnemy* enemy){

	const int count = enemy->GetCount();
	const int wait = 180;
	enemy = nullptr;
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

//左下へ移動
void EnemyAction::MovePattern01(BaseEnemy* enemy){

	const int count = enemy->GetCount();

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai * 3 / 4);
		enemy->SetSpeed(3.0f);
		return;
	}

}

//右下へ移動
void EnemyAction::MovePattern02(BaseEnemy* enemy){

	const int count = enemy->GetCount();

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai * 1 / 4);
		enemy->SetSpeed(3.0f);
		return;
	}

}

//下に下がってその位置で待機
void EnemyAction::MovePattern03(BaseEnemy* enemy){

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