#include "Background01.h"
#include "../../../Define/Define.h"
#include "../../../System/Image/Image.h"
#include "DxLib.h"

namespace Game = Define::GameSize;

Background01::Background01(){

	imageHandle = Image::Instance().GetImage("Background");

}

bool Background01::Update(){

	return true;
}

void Background01::Draw() const{

	DrawGraph(0, 0, imageHandle, true);

}