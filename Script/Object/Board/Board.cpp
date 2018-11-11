#include "Board.h"
#include "../../Define/Define.h"
#include "../../FPS/FPS.h"
#include "DxLib.h"
#include "../../System/Image/Image.h"

using Win = Define::Window;
using Color = Define::Color;

Board::Board(){

	vec2.Set((float)Win::Out_Width, 0);

}

bool Board::Update(){

	return true;
}

void Board::Draw() const{

	//DrawGraphF(vec2.GetX(), vec2.GetY(),Image::Instance().GetBoard(), true);
	DrawGraphF(0, 0, Image::Instance().GetBoard(), true);
#ifdef _DEBUG
	GameFrame();
#endif

}

void Board::GameFrame() const{

	int frameColor = Color::Color_FBlue;
	const int x = Win::In_Px;
	const int y = Win::In_Py;
	const int w = Win::In_Width;
	const int h = Win::In_Height;

	DrawLine(x, y, x + w, y, frameColor);
	DrawLine(x, y, x, y + h, frameColor);
	DrawLine(x + w, y, x + w, y + h, frameColor);
	DrawLine(x, y + h, x + w, y + h, frameColor);

}