#include "BulletManager.h"
#include "../Base/BaseBullet.h"
#include "../../../Define/Define.h"
#include "../../../System/Debug/Debug.h"
#include "../BulletIncluder.h"
#include <random>

namespace Game = Define::GameSize;

bool BulletManager::Update(){

	Create();

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		if(!(*itr)->Update()){
			itr = listObject.erase(itr);
			continue;
		}

		itr++;

	}

	return true;
}

int count = 0;
void BulletManager::Create(){

	if(count > 5){
		for(int i = 0; i < 50; i++){
			listObject.emplace_back(std::make_shared<NormalBullet>((float)Game::Center_Px, (float)Game::Center_Py));
		}
		count = 0;
	}
	count++;

	Debug::bulletNum = listObject.size();

}