#include "Background01.h"
#include "../../../Define/Define.h"
#include "../../../System/Image/Image.h"
#include "DxLib.h"

namespace Game = Define::GameSize;

Background01::Background01(){

	imageHandle = Image::Instance().GetImage("Background01");

}

bool Background01::Update(){

	return true;
}

void Background01::Draw() const{

	//DrawGraph(Game::In_Px, Game::In_Py, imageHandle, true);
	DrawBox(Game::In_Px, Game::In_Py, Game::In_Width + Game::In_Px, Game::In_Height + Game::In_Py, Define::ColorCode::Color_SkyBlue, true);

}