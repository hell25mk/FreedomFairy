#include "Board.h"
#include "../../Define/Define.h"
#include "../../FPS/FPS.h"
#include "DxLib.h"
#include "../../System/Image/Image.h"

using Game = Define::GameSize;
using Color = Define::Color;

Board::Board(){

	vec2.Set((float)Game::Out_Width, 0);

}

bool Board::Update(){

	return true;
}

void Board::Draw() const{

	//DrawGraphF(vec2.GetX(), vec2.GetY(),Image::Instance().GetBoard(), true);
	DrawGraphF(0, 0, Image::Instance().GetImage("Board"), true);
#ifdef _DEBUG
	GameFrame();
#endif

}

void Board::GameFrame() const{

	int frameColor = Color::Color_FBlue;
	const int x = Game::In_Px;
	const int y = Game::In_Py;
	const int w = Game::In_Width;
	const int h = Game::In_Height;

	DrawLine(x, y, x + w, y, frameColor);
	DrawLine(x, y, x, y + h, frameColor);
	DrawLine(x + w, y, x + w, y + h, frameColor);
	DrawLine(x, y + h, x + w, y + h, frameColor);

}