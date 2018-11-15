#include "FPS.h"
#include "DxLib.h"
#include "../Define/Define.h"
#include <cmath>

const int ListLen_Max = 120;
const int FPS = 60;
const int Up_Interval = 60;

FPS::FPS():counter(0), fps(0){
}

void FPS::Wait(){

	counter++;
	Sleep(GetWaitTime());
	Regist();

	if(counter == Up_Interval){
		UpdateAverage();
		counter = 0;
	}

}

void FPS::Draw() const{

	DrawFormatString(530, 460, Define::Color::Color_White, "%.2ffps", fps);

}

void FPS::Regist(){

	list.push_back(GetNowCount());

	if(list.size() > ListLen_Max){
		list.pop_front();
	}

}

unsigned FPS::GetWaitTime() const{

	int len = (int)list.size();

	if(len == 0){
		return 0;
	}

	int shouldTookTime = (int)(1000 / 60.0f*(len));
	int actuallyTookTime = GetNowCount() - list.front();
	int waitTime = shouldTookTime - actuallyTookTime;
	
	waitTime = waitTime > 0 ? waitTime : 0;

	return (unsigned)waitTime;
} 

void FPS::UpdateAverage(){

	int len = (int)list.size();

	if(len < ListLen_Max){
		return;
	}

	int tookTime = list.back() - list.front();
	float average = (float)tookTime / (len - 1);

	if(average == 0){
		return;
	}

	fps = RoundPoint(1000 / average, 2);

}

float FPS::RoundPoint(float val, int point){

	float ret;

	ret = val * pow(10.f, +point - 1);
	ret = (float)(int)(ret + 0.5f);

	return ret * pow(10.f, -point + 1);
}