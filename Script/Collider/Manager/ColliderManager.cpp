#include "ColliderManager.h"
#include "Base/BaseCollider.h"
#include "DxLib.h"
void ColliderManager::Create(){



}

void ColliderManager::Destroy(){



}

bool ColliderManager::Update(){



	return true;
}

void ColliderManager::ListPush(BaseCollider* collider, int tag){

	switch(tag){
		case 0:
			listPlayerCollider.push_back(collider);
			break;
		case 1:
			listEnemyCollider.push_back(collider);
			break;
		case 2:
			listBulletCollider.push_back(collider);
			break;
	}

}