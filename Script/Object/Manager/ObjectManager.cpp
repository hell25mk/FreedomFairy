#include "ObjectManager.h"
#include "../Base/BaseObject.h"
#include "DxLib.h"

void ObjectManager::Create(){



}

void ObjectManager::Destroy(){

	//確保したメモリの解放
	/*for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		delete *itr;
		*itr = nullptr;

		itr++;

	}*/

}

bool ObjectManager::Update(){

	//更新
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

void ObjectManager::Draw() const{

	//描画
	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

	clsDx();
	printfDx("オブジェクト数 : %d", listObject.size());

}

void ObjectManager::ListPush(BaseObject* obj){

	listObject.push_back(obj);

}