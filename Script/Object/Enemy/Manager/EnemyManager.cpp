#include "EnemyManager.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"
#include "../EnemyIncluder.h"
#include "../../../System/Debug/Debug.h"

using Win = Define::Window;

const float Center_Px = (float)Win::Center_Px;

EnemyManager::EnemyManager(){
	
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Center_Px - 150.0f	, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Center_Px - 75.0f	, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Center_Px			, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Center_Px + 75.0f	, -60.0f));
	listEnemy.emplace_back(std::make_shared<FairyEnemy>(Center_Px + 150.0f	, -60.0f));

	for(auto enemy : listEnemy){

		enemy->Init();

	}

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
