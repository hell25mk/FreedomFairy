#include "BaseManager.h"
#include "BaseGameObject.h"

bool BaseManager::Update(){

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		if(!(*itr)->Update()){
			itr = listObject.erase(itr);
			continue;
		}

		itr++;

	}

	return true;
}

void BaseManager::Draw() const{

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

}