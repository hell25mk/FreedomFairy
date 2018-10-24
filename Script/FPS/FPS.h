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
	static const int Sample_N;	//���ς����T���v����
	static const int Loop_FPS;	//�ݒ肵��FPS

private:
	int startTime;		//����J�n����
	int count;			//�J�E���^
	float fps;			//fps

};