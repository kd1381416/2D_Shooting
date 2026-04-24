#include"GameScene.h"

#include"Src/Application/Game/Game.h"

C_GameScene::C_GameScene()
{
	m_Game = new C_Game;
}

C_GameScene::~C_GameScene()
{
	if(m_Game)
	{
		delete m_Game;
		m_Game = nullptr;
	}
}

void C_GameScene::Init()
{
	m_Game->Init();
}

void C_GameScene::Update()
{
	m_Game->Update();
}

void C_GameScene::Draw()
{
	m_Game->Draw();
}
