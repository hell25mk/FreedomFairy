#include "EnemyManager.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"
#include "../EnemyIncluder.h"
#include <stdio.h>
#include <time.h>

namespace Game = Define::GameSize;

using Base = BaseManager;

EnemyManager::EnemyManager(){
	
	srand((unsigned int)time(NULL));

	float spawnPx = 150.0f;

	for(int i = 0; i < 5; i++){

		listObject.emplace_back(std::make_shared<FairyEnemy>((float)(Game::Center_Px - (spawnPx - (75 * i))), -80.0f));

	}

}

bool EnemyManager::Update(){

	if(listObject.size() > 10){
		return Base::Update();
	}

	if(rand() % 100 + 1 > 95){
		Create();
	}

	return Base::Update();
}

void EnemyManager::Create(){

	listObject.emplace_back(std::make_shared<FairyEnemy>((float)((Game::In_Px + 10) + rand() % Game::In_Width - 10), -80.0f));

}