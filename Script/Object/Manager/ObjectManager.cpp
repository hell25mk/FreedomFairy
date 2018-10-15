#include "ObjectManager.h"
#include "../Player/Player.h"
#include "DxLib.h"

void ObjectManager::Create(){

	listObject.push_back(new Player(10.0f, 10.0f));

	listBegin = listObject.begin();
	listEnd = listObject.end();

}

void ObjectManager::Destroy(){

	//Šm•Û‚µ‚½ƒƒ‚ƒŠ‚Ì‰ð•ú
	for(auto itr = listBegin; itr != listEnd; itr++){

		delete *itr;
		*itr = nullptr;

	}

}

bool ObjectManager::Update(){

	//XV
	for(auto itr = listBegin; itr != listEnd; ){

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
	for(auto itr = listBegin; itr != listEnd; itr++){

		(*itr)->Draw();

	}

#ifdef _DEBUG
	clsDx();
	printfDx("%d", listObject.size());
#endif // _DEBUG


}

void ObjectManager::ListPush(BaseObject* obj){

	listObject.push_back(obj);

	listBegin = listObject.begin();
	listEnd = listObject.end();

}