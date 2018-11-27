#include "PlayerManager.h"
#include "../Player.h"
#include "../../../Define/Define.h"
#include "../../../System/Debug/Debug.h"

namespace Game = Define::GameSize;

PlayerManager::PlayerManager(){

	listObject.push_back(std::make_shared<Player>((float)Game::Center_Px, (float)(Game::Out_Height * 0.8f)));

}