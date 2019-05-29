#include "BaseManager.h"
#include "BaseGameObject.h"

/// <summary>
/// @brief ���X�g���̂��ׂẴI�u�W�F�N�g��Update�����s����
/// </summary>
/// <returns>����������true,���s��false</returns>
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
/// @brief ���X�g���̂��ׂẴI�u�W�F�N�g��Draw�����s����
/// </summary>
void BaseManager::Draw() const{

	for(auto itr = listObject.begin(), end = listObject.end(); itr != end;){

		(*itr)->Draw();

		itr++;

	}

}