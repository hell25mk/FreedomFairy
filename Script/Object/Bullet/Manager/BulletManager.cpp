#include "BulletManager.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include "../../../System/Debug/Debug.h"
#include "../BulletIncluder.h"
#include "../Factory/BulletFactory.h"
#include "../../../System/Vector2D.h"
#include <random>

namespace Game = Define::GameSize;

void BulletManager::Init(){

	BulletFactory::Instance().Init(this);

}

bool BulletManager::Update(){

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		if(!(*itr)->Update()){
			itr = listObject.erase(itr);
			continue;
		}

		itr++;

	}

	Debug::bulletNum = listObject.size();

	return true;
}

void BulletManager::Create(std::shared_ptr<BaseBullet> bullet){

	listObject.emplace_back(bullet);

}