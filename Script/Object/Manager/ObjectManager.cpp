#include "ObjectManager.h"
#include "../Player/Player.h"
#include "DxLib.h"

ObjectManager::ObjectManager(){

	vectorObject.push_back(new Player(10.0f,10.0f,250,GetColor(255,255,255)));

}

ObjectManager::~ObjectManager(){

	const auto begin = vectorObject.begin();
	const auto end = vectorObject.end();
	//�m�ۂ����������̉��
	for(auto itr = begin; itr != end; itr++){

		delete *itr;
		*itr = nullptr;

	}

	//vector�̉��
	std::vector<BaseObject*>().swap(vectorObject);

}

void ObjectManager::Update(){

	const auto begin = vectorObject.begin();
	const auto end = vectorObject.end();
	//�X�V
	for(auto itr = begin; itr != end; itr++){

		(*itr)->Update();

	}

}

void ObjectManager::Draw(){

	const auto begin = vectorObject.begin();
	const auto end = vectorObject.end();
	//�`��
	for(auto itr = begin; itr != end; itr++){

		(*itr)->Draw();

	}

}