#pragma once

#include "../DesignPattern/Singleton/Singleton.h"

class FPS : public Singleton<FPS>{

public:
	friend class Singleton<FPS>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	void Wait();
	float GetFPSValue();

protected:
	FPS(){ }
	virtual ~FPS(){ }
	
private:
	static const int Sample_N;	//平均を取るサンプル数
	static const int Loop_FPS;	//設定したFPS

private:
	int startTime;		//測定開始時刻
	int count;			//カウンタ
	float fps;			//fps

};