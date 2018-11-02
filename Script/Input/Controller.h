#pragma once

#include "../DesignPattern/Singleton/Singleton.h"
#include <array>
#include <memory>
#include "DefineController.h"

class Keyboard;
class GamePad;

class Controller : public Singleton<Controller>{

public:
	friend class Singleton<Controller>;
	virtual void Create() override;
	virtual void Destroy() override;
	bool Update();
	int Get(Input::eInputType eID) const;
	
protected:
	Controller() = default;
	virtual ~Controller() = default;

private:
	void Merge();

private:
	std::array<int, Input::Pad_Num> aryInputID;
	std::array<int, Input::Pad_Num> aryInputState;
	std::shared_ptr<Keyboard> gameKeyboard;
	std::shared_ptr<GamePad> gamePad;

};