#include "ColliderManager.h"
#include "../Factory/ColliderFactory.h"
#include "../Base/BaseCollider.h"
#include "../../System/Vector2D.h"

ColliderManager::ColliderManager(){

	ColliderFactory::Instance().Init(this);

}

bool ColliderManager::Update(){

	AliveCheck();

	HitCheck();

	return true;
}

void ColliderManager::Draw() const{

	/*for(auto itr = listPlayerCollider.begin(), end = listPlayerCollider.end(); itr != end;){

		if(!(*itr)->GetIsDraw()){
			continue;
		}

		(*itr)->Draw();

		itr++;

	}*/

}

void ColliderManager::AppendCollider(std::shared_ptr<BaseCollider> collider){

	switch(collider->GetObjectTag()){
		case eType_Player:
			listPlayerCollider.push_back(collider);
			break;
		case eType_Enemy:
			listEnemyCollider.push_back(collider);
			break;
	}

}

void ColliderManager::AliveCheck(){

	for(auto itr = listPlayerCollider.begin(), end = listPlayerCollider.end(); itr != end;){

		if(!(*itr)->GetAliveFlag()){
			itr = listPlayerCollider.erase(itr);
			continue;
		}

		itr++;

	}

	for(auto itr = listEnemyCollider.begin(), end = listEnemyCollider.end(); itr != end;){

		if(!(*itr)->GetAliveFlag()){
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
			} /*else{
				(*pItr)->SetHitFlag(false);
				(*eItr)->SetHitFlag(false);
			}*/

			eItr++;

		}

		pItr++;

	}

}

bool ColliderManager::Squea(const std::shared_ptr<BaseCollider>& obj1, const std::shared_ptr<BaseCollider>& obj2){

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