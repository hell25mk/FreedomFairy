#include "Image.h"
#include "DxLib.h"

Image::Image(){



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

int Image::GetPlayer() const{

	return player;
}

int Image::MyLoadGraph(char* fileName){

	int ret = LoadGraph(fileName);
	vectorImage.push_back(ret);

	return ret;
}

int Image::MyLoadDivGraph(char* fileName, int n, int xn, int yn, int w, int h, int *buf){

	int ret = LoadDivGraph(fileName, n, xn, yn, w, h, buf);

	for(int i = 0; i < n; i++){

		vectorImage.push_back(buf[i]);

	}

	return ret;
}