#include "BulletManager.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include "../BulletIncluder.h"
#include "../Factory/ShotFactory.h"
#include "../Factory/BarrageFactory.h"

namespace Game = Define::GameSize;

using Base = BaseManager;

void BulletManager::Init(){

	BarrageFactory::Instance().Init(this);
	ShotFactory::Instance().Init(this);

}

bool BulletManager::Update(){

	//�v���C���[�̒e���X�V
	for(auto itr = listPlayerBullet.begin(), end = listPlayerBullet.end(); itr != end;){

		if(!(*itr)->Update()){
			itr = listPlayerBullet.erase(itr);
			continue;
		}

		itr++;

	}

	return Base::Update();
}

void BulletManager::Draw() const{

	//�v���C���[�̒e���ɍX�V
	for(auto itr = listPlayerBullet.begin(), end = listPlayerBullet.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

	Base::Draw();
	

}

void BulletManager::Create(std::shared_ptr<BaseBullet> bullet){

	listObject.emplace_back(bullet);

}

void BulletManager::PlayerShotCreate(std::shared_ptr<BaseBullet> bullet){

	listPlayerBullet.emplace_back(bullet);

}