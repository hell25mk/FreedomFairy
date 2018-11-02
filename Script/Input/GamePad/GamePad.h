#pragma once

#include <array>
#include "../DefineController.h"

class GamePad{

public:
	GamePad();
	~GamePad() = default;
	bool Update();
	int Get(Input::eInputType eID) const;

private:
	std::array<int, Input::Pad_Num> aryInputID;			//�ǂ̃{�^�����ǂ̃{�^���Ɋ��������Ă��邩
	std::array<int, Input::Pad_Num> padInputState;		//16�{�^����pad���͏�Ԃ��i�[

};

