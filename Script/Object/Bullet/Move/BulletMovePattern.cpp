#include "BulletMove.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include <random>

using Math = Define::Math;

//Šp“x‚ÌŒü‚«‚ÖˆÚ“®
void BulletMove::MovePattern00(BaseBullet* bullet){

	

	return;
}

//‚­‚é‚­‚é(‰QŠª)
void BulletMove::MovePattern01(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Math::Math_Pai + (0.1f * count)));
	bullet->SetSpeed(1.0f + (0.05f * count));

	return;
}

//‚È‚ñ‚©‚·‚²‚¢‚â‚Â
void BulletMove::MovePattern02(BaseBullet* bullet){

	const int count = bullet->GetCount();

	bullet->SetAngle((Math::Math_Pai + count) * 5);
	bullet->SetSpeed(2.0f + (count * 0.1f));

	return;
}

//^‰º‚ÖˆÚ“®‚µˆêŽž’âŽ~‚µ‚Äƒ‰ƒ“ƒ_ƒ€‚É”ò‚Ô
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