#include "ObjectManager.h"
#include "../Player/Player.h"
#include "DxLib.h"

ObjectManager::ObjectManager(){

	vectorObject.push_back(new Player(10.0f,10.0f,250,GetColor(255,255,255)));

}

ObjectManager::~ObjectManager(){

	auto begin = vectorObject.begin();
	auto end = vectorObject.end();
	//Šm•Û‚µ‚½ƒƒ‚ƒŠ‚Ì‰ğ•ú
	for(auto itr = begin; itr != end; itr++){

		delete *itr;
		*itr = nullptr;

	}

	//vector‚Ì‰ğ•ú
	std::vector<BaseObject*>().swap(vectorObject);

}

void ObjectManager::Update(){

	auto begin = vectorObject.begin();
	auto end = vectorObject.end();
	//XV
	for(auto itr = begin; itr != end; itr++){

		(*itr)->Update();

	}

}

void ObjectManager::Draw(){

	auto begin = vectorObject.begin();
	auto end = vectorObject.end();
	//•`‰æ
	for(auto itr = begin; itr != end; itr++){

		(*itr)->Draw();

	}

}