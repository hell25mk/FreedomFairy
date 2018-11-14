#include "EnemyManager.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"
#include "../EnemyIncluder.h"
#include "../../../System/Debug/Debug.h"

EnemyManager::EnemyManager(){

	listEnemy.emplace_back(std::make_shared<SmallEnemy>(Define::Window::Center_Px + 200, -80.0f));
	listEnemy.emplace_back(std::make_shared<NormalEnemy>(Define::Window::Center_Px - 200, -80.0f));
	listEnemy.emplace_back(std::make_shared<BigEnemy>(Define::Window::Center_Px - 20, -80.0f));
	listEnemy.emplace_back(std::make_shared<BigEnemy>(Define::Window::Center_Px + 20, -80.0f));

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
