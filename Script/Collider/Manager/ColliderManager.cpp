#include "ColliderManager.h"
#include "../Base/BaseCollider.h"
#include "../../System/Vector2D.h"
#include "DxLib.h"

void ColliderManager::Create(){



}

void ColliderManager::Destroy(){



}

bool ColliderManager::Update(){

	AliveCheck();

	HitCheck();

	clsDx();
	printfDx("p:%d , e:%d", listPlayerSideCollider.size(), listEnemySideCollider.size());

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
	}

}

void ColliderManager::AliveCheck(){

	for(auto pItr = listPlayerSideCollider.begin(); pItr != listPlayerSideCollider.end();){

		if(!(*pItr)->GetAliveFlag()){
			delete *pItr;
			*pItr = nullptr;
			pItr = listPlayerSideCollider.erase(pItr);
			continue;
		}

		pItr++;

	}

	for(auto eItr = listEnemySideCollider.begin(); eItr != listEnemySideCollider.end();){

		if(!(*eItr)->GetAliveFlag()){
			delete *eItr;
			*eItr = nullptr;
			eItr = listEnemySideCollider.erase(eItr);
			continue;
		}

		eItr++;

	}

}

void ColliderManager::HitCheck(){

	for(auto pItr = listPlayerSideCollider.begin(); pItr != listPlayerSideCollider.end();){

		for(auto eItr = listEnemySideCollider.begin(); eItr != listEnemySideCollider.end();){

			Vector2D<float> obj1 = (*pItr)->GetVector();
			Vector2D<float> obj2 = (*eItr)->GetVector();

			float px = (obj1.GetX() - obj2.GetX()) * (obj1.GetX() - obj2.GetX());
			float py = (obj1.GetY() - obj2.GetY()) * (obj1.GetY() - obj2.GetY());
			int rad = ((*pItr)->GetRadius() + (*eItr)->GetRadius() * (*pItr)->GetRadius() + (*eItr)->GetRadius());

			if(rad >= (px + py)){
				(*pItr)->SetHitFlag(true);
				(*eItr)->SetHitFlag(true);
			}

			eItr++;

		}

		pItr++;

	}

}