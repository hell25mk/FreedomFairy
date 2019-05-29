#include "TestGameInfomation.h"
#include "DxLib.h"
#include "../Define/Define.h"

void TestGameInfomation::Create(){

	score = 0;

}

void TestGameInfomation::Destroy(){
}

void TestGameInfomation::Draw() const{

	/*clsDx();
	printfDx("score = %d", score);*/

	DrawFormatString(490, 100, Define::ColorCode::Color_Black, "Score %08d", score);

}