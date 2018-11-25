#include "FairyEnemy.h"
#include "../../../../Define/Define.h"
#include "DxLib.h"
#include "../../../../System/Image/Image.h"

FairyEnemy::FairyEnemy(float x, float y):BaseEnemy(x, y){

	moveSpeed = 2.0f;
	moveAngle = Define::Math_Pai / 2 - Define::Math_Pai / 5;
	movePatternID = 3;
	
	SetSize();

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

	DrawRotaGraphF(vec2.GetX(), vec2.GetY(), 0.8, 0.0, imageHandle[addDire + imageAnimeID[(counter / 8 % 4)]], true);

}

void FairyEnemy::SetSize(){

	imageHandle = Image::Instance().GetDivImage("Fairy");
	GetGraphSize(*imageHandle, &height, &width);

}