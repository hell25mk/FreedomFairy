#include "BulletManager.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include "../../../System/Debug/Debug.h"
#include "../BulletIncluder.h"
#include <random>

using Win = Define::Window;

const float Center_Px = (float)Win::Center_Px;
const float Center_Py = (float)Win::Center_Py;

BulletManager::BulletManager(){

	for(auto enemy : listBullet){

		enemy->Init();

	}

}

int count = 0;
bool BulletManager::Update(){
	if(count > 60){
		for(int i = 0; i < 50; i++){
			listBullet.emplace_back(std::make_shared<NormalBullet>(Center_Px, Center_Py - 150));
		}
		count = 0;
	}count++;
	/*for(int i = 0; i < 3; i++){
		listBullet.emplace_back(std::make_shared<NormalBullet>(Center_Px, Center_Py - 150));
	}*/

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