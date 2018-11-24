#include "BackGround01.h"
#include "../../../Define/Define.h"
#include "../../../System/Image/Image.h"
#include "DxLib.h"

namespace Game = Define::GameSize;

BackGround01::BackGround01(){
}

bool BackGround01::Update(){

	return true;
}

void BackGround01::Draw() const{

	//DrawGraph(Game::In_Px, Game::In_Py, Image::Instance().GetImage("BackGround01"), true);
	DrawBox(Game::In_Px, Game::In_Py, Game::In_Width + Game::In_Px, Game::In_Height + Game::In_Py, Define::ColorCode::Color_SkyBlue, true);

}