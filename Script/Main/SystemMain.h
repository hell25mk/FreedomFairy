#pragma once

namespace{
	constexpr char* Window_Title = (char*)"Freedom Fairy ver b";
	constexpr int Color_Bit = 32;
}

class SystemMain final{

public:
	SystemMain() = default;
	~SystemMain() = default;
	bool Init() const;
	bool Update() const;
	void Final() const;

private:
	bool ProcessLoop() const;

};