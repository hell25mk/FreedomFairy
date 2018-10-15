#pragma once

class FPS{

public:
	FPS();
	~FPS();
	bool Update();
	void Draw();
	void Wait();

private:
	static const int Sample_N;	//平均を取るサンプル数
	static const int Loop_FPS;	//設定したFPS

private:
	int startTime;		//測定開始時刻
	int count;			//カウンタ
	float fps;			//fps

};