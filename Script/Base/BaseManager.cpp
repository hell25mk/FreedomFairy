#include "BaseManager.h"
#include "BaseGameObject.h"

/// <summary>
/// @brief リスト内のすべてのオブジェクトのUpdateを実行する
/// </summary>
/// <returns>成功したらtrue,失敗でfalse</returns>
bool BaseManager::Update(){

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		if(!(*itr)->Update()){
			(*itr)->Destroy();
			itr = listObject.erase(itr);
			continue;
		}

		itr++;

	}

	return true;
}

/// <summary>
/// @brief リスト内のすべてのオブジェクトのDrawを実行する
/// </summary>
void BaseManager::Draw() const{

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

}