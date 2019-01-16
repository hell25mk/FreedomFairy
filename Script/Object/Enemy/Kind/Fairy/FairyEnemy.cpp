#include "FairyEnemy.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"
#include "../../../../System/Image/Image.h"
#include "../../../Bullet/Factory/BarrageFactory.h"
#include "../../../../Collider/Factory/ColliderFactory.h"
#include "../../../../Collider/Inheritance/StationeryCollider.h"

#include "../../../../Test/TestGameInfomation.h"

FairyEnemy::FairyEnemy(float x, float y):BaseEnemy(x, y){

	moveSpeed = 2.0f;
	moveAngle = Define::Math_Pai / 2 - Define::Math_Pai / 5;
	movePatternID = rand() % 4;
	
	SetSize();

	collider = ColliderFactory::Instance().CreateCircleCollider(&vec2, width / 3, ObjectType::eType_Enemy, false);

}

void FairyEnemy::Destroy(){

	if(isInside){
		TestGameInfomation::Instance().score += 100;
	}
	
	collider->SetAliveFlag(false);

}

bool FairyEnemy::Update(){

	if(collider->GetHitFlag()){
		return false;
	}

	if(counter == 60){
		BarrageFactory::Instance().BarrageCreate(vec2);
	}

	return BaseEnemy::Update();
}

void FairyEnemy::Draw() const{

	const int imageAnimeID[4] = { 0,1,2,1 };
	int addDire = 3;
	//‰EŒü‚«
	if(cos(moveAngle) > 0.1){
		addDire = 6;
	}
	//¶Œü‚«
	if(cos(moveAngle) < -0.1){
		addDire = 0;
	}

	DrawRotaGraphF(vec2.GetX(), vec2.GetY(), 0.8, 0.0, imageDivHandle[addDire + imageAnimeID[(counter / 8 % 4)]], true);

}

void FairyEnemy::SetSize(){

	imageDivHandle = Image::Instance().GetDivImage("Fairy");
	GetGraphSize(*imageDivHandle, &height, &width);

}