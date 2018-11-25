#include "BackgroundManager.h"
#include "../BackgroundIncluder.h"

BackgroundManager::BackgroundManager(){

	listBackground.push_back(std::make_shared<Background01>());

}

bool BackgroundManager::Update(){

	for(auto itr = listBackground.begin(), end = listBackground.end(); itr != end;){

		if(!(*itr)->Update()){
			itr = listBackground.erase(itr);
			continue;
		}

		itr++;

	}

	return true;
}

void BackgroundManager::Draw() const{

	for(auto itr = listBackground.begin(), end = listBackground.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

}