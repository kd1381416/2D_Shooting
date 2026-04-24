#pragma once

#include"Src/Application/Scene/BaseScene/BaseScene.h"

class C_Game;

class C_GameScene :public C_BaseScene
{
public:
	C_GameScene();
	~C_GameScene();

	void Init()override;
	void Update()override;
	void Draw()override;
private:

	C_Game* m_Game = nullptr;
};