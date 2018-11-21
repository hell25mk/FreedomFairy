#include "BulletMove.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include <random>

using Math = Define::Math;

//�p�x�̌����ֈړ�
void BulletMove::MovePattern00(BaseBullet* bullet){

	

	return;
}

//���邭��(�Q��)
void BulletMove::MovePattern01(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Math::Math_Pai + (0.1f * count)));
	bullet->SetSpeed(1.0f + (0.05f * count));

	return;
}

//�Ȃ񂩂��������
void BulletMove::MovePattern02(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Math::Math_Pai + count) * 5);
	bullet->SetSpeed(2.0f + (count * 0.1f));

	return;
}

//�^���ֈړ����ꎞ��~���ă����_���ɔ��
void BulletMove::MovePattern03(BaseBullet* bullet){

	const int count = bullet->GetCount();

	if(count < 45){
		bullet->SetAngle(Math::Math_Pai / 2);
		bullet->SetSpeed(5.0f);
		return;
	}
	if(count >= 45 && count < 80){
		bullet->SetSpeed(0.0f);
		return;
	}
	if(count == 80){
		bullet->SetAngle((float)(rand() % 360));
		bullet->SetSpeed(0.8f);
		return;
	}

}