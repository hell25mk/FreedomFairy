#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <vector>

class Image : public Singleton<Image>{

public:
	friend class Singleton<Image>;
	void Load();
	void Release();
	int GetPlayer() const;
	int GetBoard() const;

protected:
	Image();
	virtual ~Image() = default;

private:
	int MyLoadGraph(const char* fileName);
	int MyLoadDivGraph(const char* fileName, int n, int xn, int yn, int w, int h, int *buf);

private:
	std::vector<int> vectorImage;
	int player;
	int board;

};

