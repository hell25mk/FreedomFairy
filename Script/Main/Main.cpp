#include "DxLib.h"
#include "GameMain.h"

bool ProcessLoop();

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){

	ChangeWindowMode(TRUE); // �E�B���h�E���[�h�ɐݒ�
	SetGraphMode(640, 480, 16);

	DxLib_Init();   // DX���C�u��������������
	SetDrawScreen(DX_SCREEN_BACK);	//�`���𗠉�ʂɐݒ�

	GameMain::GetInstance().Create();

	while(ProcessLoop()){

		if(!GameMain::GetInstance().Update()){
			break;
		}
		GameMain::GetInstance().Draw();

	}

	GameMain::GetInstance().Destroy();

	DxLib_End(); // DX���C�u�����I������

	return 0;
}

bool ProcessLoop(){

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