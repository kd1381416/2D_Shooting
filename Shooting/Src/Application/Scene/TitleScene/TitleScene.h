#pragma once
#include"Src/Application/Scene/BaseScene/BaseScene.h"

class C_Title;

class C_TitleScene :public C_BaseScene
{
public:
	C_TitleScene();
	~C_TitleScene();

	void Init()override;
	void Update()override;
	void Draw()override;
private:

	std::shared_ptr<C_TitleScene> m_Title;
};
