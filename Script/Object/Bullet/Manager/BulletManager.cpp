#include "BulletManager.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include "../BulletIncluder.h"
#include "../Factory/BulletFactory.h"
#include "../../../System/Vector2D.h"
#include <random>

namespace Game = Define::GameSize;

using Base = BaseManager;

void BulletManager::Init(){

	BulletFactory::Instance().Init(this);

}

bool BulletManager::Update(){

	return Base::Update();
}

void BulletManager::Create(std::shared_ptr<BaseBullet> bullet){

	listObject.emplace_back(bullet);

}