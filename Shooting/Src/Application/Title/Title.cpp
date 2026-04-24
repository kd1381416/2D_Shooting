#include"Title.h"

#include"Src/Application/System/Load/Load.h"
#include"Src/Application/Scene/SceneManager.h"
#include"Src/Application/System/Key/KeyManager.h"
#include"Src/Application/System/Mouse/Mouse.h"

C_Title::C_Title()
{
	LOAD.TitleTexLoad();
}

C_Title::~C_Title()
{
	LOAD.TitleTexRelease();
}

void C_Title::Init()
{
	//===îwåi===
	BackPos = { 0,0 };
	BackScale = 1;
	BackColor = { 1,1,1,1 };
	BackTex = &LOAD.GetTitleTex(TitleBack);
}

void C_Title::Update()
{
	if (KEYMANAGER.ClickEnter())
	{
		SCENEMANAGER.ChangeState(new C_GameScene);
	}

	BackTransMat = Math::Matrix::CreateTranslation(BackPos.x, BackPos.y, 0.0);
	BackScaleMat = Math::Matrix::CreateScale(BackScale);
	BackMat = BackScaleMat * BackTransMat;
}

void C_Title::Draw()
{
	SHADER.m_spriteShader.SetMatrix(BackMat);
	SHADER.m_spriteShader.DrawTex(BackTex, Math::Rectangle{ 0,0,1280,720 }, 1.0f);

	Math::Color	color = { 0,0,0,1 };
	SHADER.m_spriteShader.SetMatrix(Math::Matrix::Identity);
	SHADER.m_spriteShader.DrawCircle(MOUSE.GetMousePos().x, MOUSE.GetMousePos().y, 15, &color, true);
}