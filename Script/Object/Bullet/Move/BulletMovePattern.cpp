#include "BulletMove.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include <random>

//�^��
void BulletMove::MovePattern00(BaseBullet* bullet){

	bullet->SetAngle((Define::Math_Pai * 3 / 2));
	bullet->SetSpeed(10.0f);

	return;
}

//���邭��(�Q��)
void BulletMove::MovePattern01(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Define::Math_Pai + (0.1f * count)));
	bullet->SetSpeed(1.0f + (0.05f * count));

	return;
}

//�p�x�̌�����
void BulletMove::MovePattern02(BaseBullet* bullet){

	return;
}