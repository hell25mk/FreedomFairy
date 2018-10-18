#include "ColliderManager.h"
#include "../Base/BaseCollider.h"

void ColliderManager::Create(){



}

void ColliderManager::Destroy(){



}

bool ColliderManager::Update(){

	/*for(auto itr = listEnemySideCollider.begin(); itr != listEnemySideCollider.end();){

		if((*itr) == NULL){
			itr = listEnemySideCollider.erase(itr);
			continue;
		}

		itr++;

	}*/

	return true;
}

void ColliderManager::ListPush(BaseCollider* collider, int tag){

	switch(tag){
		case 0:
			listPlayerSideCollider.push_back(collider);
			break;
		case 1:
			listEnemySideCollider.push_back(collider);
			break;
		/*case 2:
			listBulletCollider.push_back(collider);
			break;*/
	}

}

void ColliderManager::HitCheck(BaseObject* obj, int tag){



}