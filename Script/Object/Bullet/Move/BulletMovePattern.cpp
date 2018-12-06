#include "BulletMove.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include <random>

//^ã
void BulletMove::MovePattern00(BaseBullet* bullet){

	bullet->SetAngle((Define::Math_Pai * 3 / 2));
	bullet->SetSpeed(10.0f);

	return;
}

//‚­‚é‚­‚é(‰QŠª)
void BulletMove::MovePattern01(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Define::Math_Pai + (0.1f * count)));
	bullet->SetSpeed(1.0f + (0.05f * count));

	return;
}

//Šp“x‚ÌŒü‚«‚Ö
void BulletMove::MovePattern02(BaseBullet* bullet){

	return;
}