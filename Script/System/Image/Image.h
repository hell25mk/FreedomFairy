#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <vector>

class Image : public Singleton<Image>{

public:
	void Load();
	void Release();
	int GetPlayer() const;

protected:
	Image();
	virtual ~Image() = default;

private:
	int MyLoadGraph(char* fileName);
	int MyLoadDivGraph(char* fileName, int n, int xn, int yn, int w, int h, int *buf);

private:
	std::vector<int> vectorImage;
	int player;

};

