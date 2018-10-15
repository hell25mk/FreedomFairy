#include "Window.h"
#include "DxLib.h"
#include "GameMain.h"

const unsigned int Window::windowHeight = 480;
const unsigned int Window::windowWidth = 640;

void Window::Create(){

	ChangeWindowMode(TRUE);			// �E�B���h�E���[�h�ɐݒ�
	SetGraphMode(windowWidth, windowHeight, 16);

	DxLib_Init();					 // DX���C�u��������������
	SetDrawScreen(DX_SCREEN_BACK);	//�`���𗠉�ʂɐݒ�

}

void Window::Destroy(){

	DxLib_End();			// DX���C�u�����I������

}

bool Window::Update(){

	GameMain::GetInstance().Create();

	while(ProcessLoop()){

		if(!GameMain::GetInstance().Update()){
			break;
		}
		GameMain::GetInstance().Draw();

	}

	GameMain::GetInstance().Destroy();

	return false;
}

bool Window::ProcessLoop(){

	if(ScreenFlip() != 0){
		return false;
	}
	if(ProcessMessage() != 0){
		return false;
	}
	if(ClearDrawScreen() != 0){
		return false;
	}

	return true;
}

int Window::GetWindowHeight(){

	return windowHeight;
}

int Window::GetWindowWidth(){

	return windowWidth;
}