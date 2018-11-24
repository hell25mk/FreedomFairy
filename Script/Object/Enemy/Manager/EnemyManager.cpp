#include "EnemyManager.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"
#include "../EnemyIncluder.h"
#include "../../../System/Debug/Debug.h"

namespace Game = Define::GameSize;

EnemyManager::EnemyManager(){
	
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Game::Center_Px - 150.0f	, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Game::Center_Px - 75.0f	, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Game::Center_Px			, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Game::Center_Px + 75.0f	, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Game::Center_Px + 150.0f	, -60.0f));

}

bool EnemyManager::Update(){

	for(auto itr = listEnemy.begin(), end = listEnemy.end(); itr != end;){

		if(!(*itr)->Update()){
			itr = listEnemy.erase(itr);
			continue;
		}

		itr++;

	}

	return true;
}

void EnemyManager::Draw() const{

	Debug::enemyNum = listEnemy.size();

	for(auto enemy : listEnemy){

		enemy->Draw();

	}

}
