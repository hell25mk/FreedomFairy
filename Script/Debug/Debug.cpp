#include "Debug.h"
#include "DxLib.h"
#include "../Define/Define.h"

namespace Game = Define::GameSize;
namespace Color = Define::ColorCode;

void Debug::Draw(){

	const char* Object_Type[static_cast<int>(eObjectType::ObjectNum)] = {
		"Player","Enemy","Bullet"
	};

	DrawString(Game::Out_Width + 10, (int)(Game::Out_Height * 0.75), "--Debug Object--", Color::Color_White, true);

	for(int i = 0, end = static_cast<int>(eObjectType::ObjectNum); i < end; i++){

		DrawFormatString(Game::Out_Width + 10, (int)(Game::Out_Height * (0.8 + ((float)i / 20))), Color::Color_White, "%6s : %d", Object_Type[i], objectNum[i]);

	}

}

void Debug::SetObjectNum(const int key, const int num){

	int aryKey = static_cast<int>(key);

	if(aryKey >= static_cast<int>(eObjectType::ObjectNum)){
		return;
	}

	objectNum[key] = num;

}