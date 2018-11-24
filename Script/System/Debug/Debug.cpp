#include "Debug.h"
#include "DxLib.h"
#include "../../Define/Define.h"

namespace Game = Define::GameSize;
namespace Color = Define::ColorCode;

int Debug::playerNum = 0;
int Debug::enemyNum = 0;
int Debug::bulletNum = 0;

void Debug::Draw(){

	DrawString(Game::Out_Width + 10, (int)(Game::Out_Height * 0.75), "--Debug Object--", Color::Color_White, true);
	DrawFormatString(Game::Out_Width + 10, (int)(Game::Out_Height * 0.8), Color::Color_White, "Player : %d", playerNum);
	DrawFormatString(Game::Out_Width + 10, (int)(Game::Out_Height * 0.85), Color::Color_White, "Enemy  : %d", enemyNum);
	DrawFormatString(Game::Out_Width + 10, (int)(Game::Out_Height * 0.9), Color::Color_White, "Bullet : %d", bulletNum);

}