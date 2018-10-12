#pragma once

#include "../DesignPattern/Singleton.h"

class Keyboard : public Singleton<Keyboard>{

public:
	friend class Singleton<Keyboard>;
	virtual void Create() override;
	virtual void Destroy() override;
	void Update();
	int Input(int argKeyCode);

protected:
	Keyboard(){ }
	virtual ~Keyboard(){ }

private:
	static const int KeyType_Num;
	int *arrKeyFrame;

};