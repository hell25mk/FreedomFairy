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
	void Destroy() const;
	bool Update() const;

private:
	bool ProcessLoop() const;

};