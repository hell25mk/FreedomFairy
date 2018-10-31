#pragma once

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