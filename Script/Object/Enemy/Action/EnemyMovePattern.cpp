#include "EnemyAction.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"

//���ɉ������Ĉꎞ��~�A���̌�ēx������
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

//�����ֈړ�
void EnemyAction::MovePattern01(BaseEnemy* enemy){

	const int count = enemy->GetCount();

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai * 3 / 4);
		enemy->SetSpeed(3.0f);
		return;
	}

}

//�E���ֈړ�
void EnemyAction::MovePattern02(BaseEnemy* enemy){

	const int count = enemy->GetCount();

	if(count == 0){
		enemy->SetAngle(Define::Math_Pai * 1 / 4);
		enemy->SetSpeed(3.0f);
		return;
	}

}

//���ɉ������Ă��̈ʒu�őҋ@
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