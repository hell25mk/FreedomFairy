#include "BulletManager.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include "../../../System/Debug/Debug.h"
#include "../BulletIncluder.h"
#include <random>

namespace Game = Define::GameSize;

BulletManager::BulletManager(){
}

int count = 0;
bool BulletManager::Update(){

	if(count > 10){
		for(int i = 0; i < 1; i++){
			listBullet.emplace_back(std::make_shared<NormalBullet>((float)Game::Center_Px, (float)Game::Center_Py));
		}
		count = 0;
	}
	count++;

	for(auto itr = listBullet.begin(), end = listBullet.end(); itr != end;){

		if(!(*itr)->Update()){
			itr = listBullet.erase(itr);
			continue;
		}

		itr++;

	}

	return true;
}

void BulletManager::Draw() const{

	Debug::bulletNum = listBullet.size();

	for(auto bullet : listBullet){

		bullet->Draw();

	}

}

void BulletManager::Create(){



}