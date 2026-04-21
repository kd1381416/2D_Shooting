#include"TitleScene.h"
#include"Src/Application/System/Load/Load.h"
#include"Src/Application/Title/Title.h"

C_TitleScene::C_TitleScene()
{
	Title = new C_Title;
	LOAD.TitleTexLoad();
}

C_TitleScene::~C_TitleScene()
{
	delete Title;
	LOAD.TitleTexRelease();
}

void C_TitleScene::Init()
{
	Title->Init();
}

void C_TitleScene::Update()
{
	Title->Update();
}

void C_TitleScene::Draw()
{
	Title->Draw();
}
