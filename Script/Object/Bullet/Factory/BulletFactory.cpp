#include "BulletFactory.h"
#include "../Manager/BulletManager.h"
#include "../BulletIncluder.h"
#include "../../../System/Vector2D.h"

void BulletFactory::Init(BulletManager* bulletManager){

	this->bulletManager = bulletManager;

}

void BulletFactory::BulletCreate(Vector2D<float>& vec){

	bulletManager->Create(std::make_shared<NormalBullet>(vec.GetX(),vec.GetY()));

}