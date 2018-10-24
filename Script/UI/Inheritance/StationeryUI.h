#pragma once

#include "../Base/BaseUI.h"

#pragma region TitleUI
/*class TitleUI : public BaseUI{
public:
	TitleUI();
	virtual ~TitleUI();
	virtual bool Update() override;
	virtual void Draw() override;

private:


};*/
#pragma endregion

#pragma region GameUI
class GameUI : public BaseUI{
public:
	GameUI();
	virtual ~GameUI();
	virtual bool Update() override;
	virtual void Draw() override;

private:


};
#pragma endregion

#pragma region ResultUI
/*class ResultUI : public BaseUI{
public:
	ResultUI();
	virtual ~ResultUI();
	virtual bool Update() override;
	virtual void Draw() override;

private:


};*/
#pragma endregion