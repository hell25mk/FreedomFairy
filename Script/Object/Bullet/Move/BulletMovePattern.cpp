#include "BulletMove.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include <random>

//角度の向きへ移動
void BulletMove::MovePattern00(BaseBullet* bullet){

	

	return;
}

//くるくる(渦巻)
void BulletMove::MovePattern01(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Define::Math_Pai + (0.1f * count)));
	bullet->SetSpeed(1.0f + (0.05f * count));

	return;
}

//なんかすごいやつ
void BulletMove::MovePattern02(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Define::Math_Pai + count) * 5);
	bullet->SetSpeed(2.0f + (count * 0.1f));

	return;
}

//真下へ移動し一時停止してランダムに飛ぶ
void BulletMove::MovePattern03(BaseBullet* bullet){

	const int count = bullet->GetCount();

	if(count < 45){
		bullet->SetAngle(Define::Math_Pai / 2);
		bullet->SetSpeed(5.0f);
		return;
	}
	if(count >= 45 && count < 100){
		bullet->SetSpeed(0.0f);
		return;
	}
	if(count == 100){
		bullet->SetAngle((float)(rand() % 360));
		bullet->SetSpeed(0.5f);
		return;
	}

}