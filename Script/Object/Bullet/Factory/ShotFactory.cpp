#include "ShotFactory.h"
#include "../Manager/BulletManager.h"
#include "../BulletIncluder.h"
#include "../../../System/Vector2D.h"

void ShotFactory::Init(BulletManager* bulletManager){

	this->bulletManager = bulletManager;

}

void ShotFactory::PlayerBulletCreate(Vector2D<float>& vec){

	bulletManager->PlayerShotCreate(std::make_shared<NormalBullet>(vec.GetX(), vec.GetY()));

}