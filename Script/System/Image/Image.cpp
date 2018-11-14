#include "Image.h"
#include "DxLib.h"

Image::Image(){

	mapImage["Player"] = MyLoadGraph("Image/Player/Player.png");
	mapImage["Board"] = MyLoadGraph("Image/Board/Board02.png");
	mapImage["BackGround01"] = MyLoadGraph("Image/BackGround/Stage01.png");

}

void Image::Load(){



}

void Image::Release(){

	const int vecSize = vectorImage.size();

	for(int i = 0; i < vecSize; i++){

		DeleteGraph(vectorImage[i]);

	}

	vectorImage.clear();

}

int Image::GetImage(std::string key) const{

	return mapImage.at(key);
}

int Image::MyLoadGraph(const char* fileName){

	int ret = LoadGraph(fileName);
	vectorImage.push_back(ret);

	return ret;
}

int Image::MyLoadDivGraph(const char* fileName, int n, int xn, int yn, int w, int h, int *buf){

	int ret = LoadDivGraph(fileName, n, xn, yn, w, h, buf);

	for(int i = 0; i < n; i++){

		vectorImage.push_back(buf[i]);

	}

	return ret;
}