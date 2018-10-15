#pragma once

class FPS{

public:
	FPS();
	~FPS();
	bool Update();
	void Draw();
	void Wait();

private:
	static const int Sample_N;	//���ς����T���v����
	static const int Loop_FPS;	//�ݒ肵��FPS

private:
	int startTime;		//����J�n����
	int count;			//�J�E���^
	float fps;			//fps

};