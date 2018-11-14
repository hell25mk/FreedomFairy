#pragma once

#include "../../DesignPattern/Singleton/Singleton.h"
#include <vector>
#include <map>

class Image : public Singleton<Image>{

public:
	friend class Singleton<Image>;
	void Load();
	void Release();
	int GetImage(std::string) const;
	int GetPlayer() const;
	int GetBoard() const;
	int GetBackGround01() const;

protected:
	Image();
	virtual ~Image() = default;

private:
	int MyLoadGraph(const char* fileName);
	int MyLoadDivGraph(const char* fileName, int n, int xn, int yn, int w, int h, int *buf);

private:
	std::map<std::string, int> mapImage;
	std::vector<int> vectorImage;
	int player;
	int board;
	int background01;

};

