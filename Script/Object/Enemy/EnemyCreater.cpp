#include "EnemyCreater.h"
#include "Enemy.h"
#include "../Manager/ObjectManager.h"
#include <random>

const int Create_TimeCount = 10;

void EnemyCreater::Create(){

	count = 0;

}

void EnemyCreater::Destroy(){



}

bool EnemyCreater::Update(){

	//60ƒtƒŒ[ƒ€–ˆ‚É¶¬
	if(count % Create_TimeCount == 0){
		this->EnemyCreate();
		count = 0;
	}

	count++;

	return true;
}

void EnemyCreater::EnemyCreate(){

	std::random_device rand;
	std::mt19937 mt(rand());

	std::uniform_int_distribution<> randWidth(0, 400);
	std::uniform_int_distribution<> randHeight(50, 100);

	Enemy* enemy = new Enemy((float)randWidth(mt), (float)-randHeight(mt), 2.0f);
	ObjectManager::GetInstance().ListPush(enemy);

}