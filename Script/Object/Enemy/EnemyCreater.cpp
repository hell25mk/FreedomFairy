#include "EnemyCreater.h"
#include "Enemy.h"
#include "../Manager/ObjectManager.h"

EnemyCreater::EnemyCreater(){

	count = 0;

}

EnemyCreater::~EnemyCreater(){
}

bool EnemyCreater::Update(){

	//60ƒtƒŒ[ƒ€–ˆ‚É¶¬
	if(count >= 60){
		this->Create();
		count = 0;
	}

	count++;

	return true;
}

void EnemyCreater::Create(){

	Enemy* enemy = new Enemy(100.0f, -50.0f, 5.0f);
	ObjectManager::GetInstance().ListPush(enemy);

}