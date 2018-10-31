#include "StationeryUI.h"
#include "DxLib.h"
#include "../../FPS/FPS.h"
#include "../../System/Score/Manager/ScoreManager.h"

const int Color_Red = GetColor(255, 0, 0);
const int Color_Green = GetColor(0, 255, 0);
const int Color_Blue = GetColor(0, 0, 255);
const int Font_Size = 22;

enum ScoreType{
	eScore_High,
	eScore_Now,
};

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

	DrawBox(vec2.GetDx(), vec2.GetDy(), vec2.GetDx() + width, vec2.GetDy() + height, Color_Blue, true);

	SetFontSize(Font_Size);
	DrawFormatString(vec2.GetDx() + 10, vec2.GetDy() + 10, Color_Green, "HiScore %09d", ScoreManager::GetInstance().GetScore(eScore_High));
	DrawFormatString(vec2.GetDx() + 10, vec2.GetDy() + 40, Color_Green, "  Score %09d", ScoreManager::GetInstance().GetScore(eScore_Now));
	SetFontSize(DEFAULT_FONT_SIZE);

}
