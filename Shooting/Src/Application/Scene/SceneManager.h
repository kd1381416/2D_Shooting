#pragma once
#include"Src/Application/Scene/TitleScene/TitleScene.h"
#include"Src/Application/Scene/GameScene/GameScene.h"

class C_SceneManager
{
public:

	~C_SceneManager();

	void ChangeState(C_BaseScene* newState)
	{
		delete currentState;
		currentState = newState;
		currentState->Init();
	}

	void Init()
	{
		currentState->Init();
	}

	void Update()
	{
		currentState->Update();
	}

	void Draw()
	{
		currentState->Draw();
	}

private:

	C_SceneManager(){}

	C_BaseScene* currentState = nullptr;
	C_BaseScene* optionState = nullptr;

public:

	static C_SceneManager& GetInstans()
	{
		static C_SceneManager instans;
		return instans;
	}

};

#define SCENEMANAGER C_SceneManager::GetInstans()