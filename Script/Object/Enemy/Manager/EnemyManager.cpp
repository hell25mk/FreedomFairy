#include "EnemyManager.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"
#include "../EnemyIncluder.h"

namespace Game = Define::GameSize;

using Base = BaseManager;

EnemyManager::EnemyManager(){
	
	float spawnPx = 150.0f;

	for(int i = 0; i < 5; i++){

		listObject.emplace_back(std::make_shared<FairyEnemy>((float)(Game::Center_Px - (spawnPx - (75 * i))), -80.0f));

	}

}

bool EnemyManager::Update(){

	return Base::Update();
}

void EnemyManager::Create(){



}