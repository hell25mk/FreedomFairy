#include "EnemyManager.h"
#include "../Base/BaseEnemy.h"
#include "../../../Define/Define.h"
#include "../EnemyIncluder.h"

EnemyManager::EnemyManager(){

	listEnemy.emplace_back(std::make_shared<SmallEnemy>(Define::Window::Center_Px, 100));

}

bool EnemyManager::Update(){

	for(auto enemy : listEnemy){

		enemy->Update();

	}

	return true;
}

void EnemyManager::Draw() const{

	for(auto enemy : listEnemy){

		enemy->Draw();

	}

}
