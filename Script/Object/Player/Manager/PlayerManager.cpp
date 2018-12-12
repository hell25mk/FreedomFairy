#include "PlayerManager.h"
#include "../Factory/PlayerFactory.h"
#include "../Player.h"
#include "../../../Define/Define.h"

namespace Game = Define::GameSize;

using Base = BaseManager;

PlayerManager::PlayerManager(){

	Create((float)Game::Center_Px, (float)(Game::Out_Height * 0.8f));

}

bool PlayerManager::Update(){

	return Base::Update();
}

void PlayerManager::Create(const float x, const float y){

	PlayerFactory factory;
	listObject.push_back(factory.Create(x, y));

}