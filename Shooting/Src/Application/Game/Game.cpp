#include"Game.h"
#include"Src/Application/System/Mouse/Mouse.h"
#include"Src/Application/System/Key/KeyManager.h"
#include"Src/Application/Scene/SceneManager.h"

C_Game::C_Game()
{
}

C_Game::~C_Game()
{
}

void C_Game::Init()
{
}

void C_Game::Update()
{
	if (KEYMANAGER.ClickEnter())
	{
		SCENEMANAGER.ChangeState(new C_TitleScene);
	}
}

void C_Game::Draw()
{
	SHADER.m_spriteShader.SetMatrix(Math::Matrix::Identity);
	SHADER.m_spriteShader.DrawCircle(MOUSE.GetMousePos().x, MOUSE.GetMousePos().y, 10, &Math::Color{ 1,1,1,1 }, true);
}