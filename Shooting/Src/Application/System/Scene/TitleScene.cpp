#include"TitleScene.h"

#include"Src/Application/System/Load/Load.h"
#include"Src/Application/Title/Title.h"

C_TitleScene::C_TitleScene()
{
	m_Title = new C_Title;
	LOAD.TitleTexLoad();
}

C_TitleScene::~C_TitleScene()
{
	if(m_Title)
	{
		LOAD.TitleTexRelease();

		delete m_Title;
		m_Title = nullptr;
	}
}

void C_TitleScene::Init()
{
	m_Title->Init();
}

void C_TitleScene::Update()
{
	m_Title->Update();
}

void C_TitleScene::Draw()
{
	m_Title->Draw();
}
