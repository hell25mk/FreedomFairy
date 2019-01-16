#include "BarrageFactory.h"
#include "../Manager/BulletManager.h"
#include "../BulletIncluder.h"
#include "../../../System/Vector2D.h"
#include "../../../Define/Define.h"

void BarrageFactory::Init(BulletManager* bulletManager){

	this->bulletManager = bulletManager;

}

void BarrageFactory::BarrageCreate(Vector2D<float>& vec){

	int count = 0;
	float speed = 3.0f;

	for(int i = 0; i < 15; i++){

		float angle = (Define::Math_Pai + (36.0f * i));
		bulletManager->Create(std::make_shared<NormalBullet>(vec.GetX(), vec.GetY(), speed, angle,1));
	
	}

}