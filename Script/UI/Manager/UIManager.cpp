#include "UIManager.h"
#include "../../MyLibrary/MyLibrary.h"
#include "../Inheritance/StationeryUI.h"

void UIManager::Create(){

	ui = new GameUI();

}

void UIManager::Destroy(){

	SELF_DELETE(ui);

}

bool UIManager::Update(){

	ui->Update();

	return true;
}

void UIManager::Draw(){

	ui->Draw();

}
