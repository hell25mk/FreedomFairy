#include "FPS.h"
#include "DxLib.h"
#include <cmath>

const int FPS::Sample_N = 60;
const int FPS::Loop_FPS = 60;

FPS::FPS(){

	startTime = 0;
	count = 0;
	fps = 0;

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

void FPS::Draw(){

	DrawFormatString(0, 0, GetColor(255, 255, 255), "%.1f", fps);

}

void FPS::Wait(){

	int tookTime = GetNowCount() - startTime;
	int waitTime = count * 1000 / Loop_FPS - tookTime;

	if(waitTime > 0){
		Sleep(waitTime);
	}

}