#pragma once

#include <array>

enum ePadType : int;

class GamePad{

public:
	GamePad();
	~GamePad();
	bool Update();
	int Input(ePadType eID) const;

private:
	const static int InputType_Num = 16;

private:
	std::array<int, InputType_Num> aryInputID;		//�ǂ̃{�^�����ǂ̃{�^���Ɋ��������Ă��邩
	std::array<int, InputType_Num> padInputState;		//16�{�^����pad���͏�Ԃ��i�[

};

