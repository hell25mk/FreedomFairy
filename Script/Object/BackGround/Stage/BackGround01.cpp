#include "BackGround01.h"
#include "../../../Define/Define.h"
#include "../../../System/Image/Image.h"
#include "DxLib.h"

using Win = Define::Window;

BackGround01::BackGround01(){
}

bool BackGround01::Update(){

	return true;
}

void BackGround01::Draw() const{

	//DrawGraph(Win::In_Px, Win::In_Py, Image::Instance().GetImage("BackGround01"), true);
	DrawBox(Win::In_Px, Win::In_Py, Win::In_Width + Win::In_Px, Win::In_Height + Win::In_Py, Define::Color::Color_SkyBlue, true);

}