#include "ColliderManager.h"
#include "../Base/BaseCollider.h"
#include "../../System/Vector2D.h"

enum ObjectType{
	eType_Player,
	eType_Enemy,
};

void ColliderManager::Create(){



}

void ColliderManager::Destroy(){



}

bool ColliderManager::Update(){

	AliveCheck();

	HitCheck();

	return true;
}

void ColliderManager::ListPush(BaseCollider* collider, int tag){

	switch(tag){
		case eType_Player:
			listPlayerCollider.push_back(collider);
			break;
		case eType_Enemy:
			listEnemyCollider.push_back(collider);
			break;
	}

}

void ColliderManager::AliveCheck(){

	//std::list<BaseCollider*> temp = listPlayerCollider;

	for(auto itr = listPlayerCollider.begin(), end = listPlayerCollider.end(); itr != end;){

		if(!(*itr)->GetAliveFlag()){
			delete *itr;
			*itr = nullptr;
			itr = listPlayerCollider.erase(itr);
			continue;
		}

		itr++;

	}

	for(auto itr = listEnemyCollider.begin(), end = listEnemyCollider.end(); itr != end;){

		if(!(*itr)->GetAliveFlag()){
			delete *itr;
			*itr = nullptr;
			itr = listEnemyCollider.erase(itr);
			continue;
		}

		itr++;

	}

}

void ColliderManager::HitCheck(){

	for(auto pItr = listPlayerCollider.begin(); pItr != listPlayerCollider.end();){
		for(auto eItr = listEnemyCollider.begin(); eItr != listEnemyCollider.end();){

			if(this->Squea(*pItr,*eItr)){
				(*pItr)->SetHitFlag(true);
				(*eItr)->SetHitFlag(true);
			}

			eItr++;

		}

		pItr++;

	}

}

bool ColliderManager::Squea(BaseCollider* obj1,BaseCollider* obj2){

	Vector2D<float> v1 = obj1->GetVector();
	Vector2D<float> v2 = obj2->GetVector();

	float px = (v1.GetX() - v2.GetX()) * (v1.GetX() - v2.GetX());
	float py = (v1.GetY() - v2.GetY()) * (v1.GetY() - v2.GetY());
	int rad = (obj1->GetRadius() + obj2->GetRadius()) * (obj1->GetRadius() + obj2->GetRadius());

	if(rad >= (px + py)){
		return true;
	}

	return false;
}