#include "main.h"
#include "Scene.h"
#include"Src/Application/System/Scene/SceneManager.h"
#include"Src/Application/System/Mouse/Mouse.h"

void Scene::Draw2D()
{
	MOUSE.Draw();
	SCENEMANAGER.Draw();
}

void Scene::Update()
{
	MOUSE.Update();
	SCENEMANAGER.Update();
}

void Scene::Init()
{
	MOUSE.Init();
	SCENEMANAGER.ChangeState(new C_TitleScene);
	SCENEMANAGER.Init();
}

void Scene::Release()
{
}

void Scene::ImGuiUpdate()
{
	return;

	ImGui::SetNextWindowPos(ImVec2(20, 20), ImGuiSetCond_Once);
	ImGui::SetNextWindowSize(ImVec2(200, 100), ImGuiSetCond_Once);

	// デバッグウィンドウ
	if (ImGui::Begin("Debug Window"))
	{
		ImGui::Text("FPS : %d", APP.m_fps);
	}
	ImGui::End();
}
