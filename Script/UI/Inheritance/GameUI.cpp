#include "StationeryUI.h"
#include "DxLib.h"

const int Color_Whilte = GetColor(255, 255, 255);

GameUI::GameUI(){

	vec2.Set(420, 0);
	width = 240;
	height = 480;

}

GameUI::~GameUI(){
}

bool GameUI::Update(){


	return true;
}

void GameUI::Draw(){

	DrawBox(vec2.GetDx(), vec2.GetDy(), vec2.GetDx() + width, vec2.GetDy() + height, Color_Whilte, true);

}
