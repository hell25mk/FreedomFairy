#include "ObjectManager.h"
#include "../Base/BaseObject.h"
#include "DxLib.h"

void ObjectManager::Create(){



}

void ObjectManager::Destroy(){

	//Šm•Û‚µ‚½ƒƒ‚ƒŠ‚Ì‰ð•ú
	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		delete *itr;
		*itr = nullptr;

		itr++;

	}

}

bool ObjectManager::Update(){

	//XV
	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		if(!(*itr)->Update()){
			delete *itr;
			*itr = nullptr;
			itr = listObject.erase(itr);
			continue;
		}

		itr++;

	}

	return true;
}

void ObjectManager::Draw(){

	//•`‰æ
	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

}

void ObjectManager::ListPush(BaseObject* obj){

	listObject.push_back(obj);

}