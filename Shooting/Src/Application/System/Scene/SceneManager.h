#pragma once
#include"TitleScene.h"
#include"GameScene.h"

class C_SceneManager
{
public:

	~C_SceneManager();

	void ChangeState(C_State* newState)
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

	C_State* currentState = nullptr;
	C_State* optionState = nullptr;

public:

	static C_SceneManager& GetInstans()
	{
		static C_SceneManager instans;
		return instans;
	}

};

#define SCENEMANAGER C_SceneManager::GetInstans()