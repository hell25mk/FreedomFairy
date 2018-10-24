#include "PlayerCreater.h"
#include "Player.h"

const float Spown_Width = 200.0f;
const float Spown_Height = 400.0f;

void PlayerCreater::Create(){



}

void PlayerCreater::Destroy(){



}

void PlayerCreater::PlayerCreate(){

	Player* player = new Player(Spown_Width, Spown_Height);

}