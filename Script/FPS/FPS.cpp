#include "FPS.h"
#include "DxLib.h"
#include <cmath>

const int FPS::Sample_N = 60;
const int FPS::Loop_FPS = 60;
const int Color_White = GetColor(255, 255, 255);

void FPS::Create(){

	startTime = 0;
	count = 0;
	fps = 0;

}

void FPS::Destroy(){

}

bool FPS::Update(){

	if(count == 0){
		startTime = GetNowCount();
	}

	if(count == Sample_N){
		int time = GetNowCount();
		fps = 1000.0f / ((time - startTime) / (float)Sample_N);
		count = 0;
		startTime = time;
	}

	count++;

	return true;
}

void FPS::Wait(){

	int tookTime = GetNowCount() - startTime;
	int waitTime = count * 1000 / Loop_FPS - tookTime;

	if(waitTime > 0){
		Sleep(waitTime);
	}

}

void FPS::Draw() const{

	SetFontSize(18);
	DrawFormatString(530, 460, Color_White, "%.2ffps", fps);
	SetFontSize(DEFAULT_FONT_SIZE);

}