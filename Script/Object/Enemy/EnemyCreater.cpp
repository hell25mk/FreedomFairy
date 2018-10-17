#include "EnemyCreater.h"
#include "Enemy.h"
#include "../Manager/ObjectManager.h"

void EnemyCreater::Create(){

	count = 0;

}

void EnemyCreater::Destroy(){



}

bool EnemyCreater::Update(){

	//60ƒtƒŒ[ƒ€–ˆ‚É¶¬
	if(count % 60 == 0){
		this->EnemyCreate();
		count = 0;
	}

	count++;

	return true;
}

void EnemyCreater::EnemyCreate(){

	Enemy* enemy = new Enemy(100.0f, -50.0f, 5.0f);
	ObjectManager::GetInstance().ListPush(enemy);

}