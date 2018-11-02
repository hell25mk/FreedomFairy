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
	std::array<int, Input::Pad_Num> aryInputID;			//どのボタンがどのボタンに割当たっているか
	std::array<int, Input::Pad_Num> padInputState;		//16ボタンのpad入力状態を格納

};

