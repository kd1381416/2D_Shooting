#pragma once

class C_Mouse
{
public:
	~C_Mouse(){}

	static C_Mouse& GetInstans()
	{
		static C_Mouse instans;
		return instans;
	}

	void Init();
	void Update();
	void Draw();

	const POINT& GetMousePos() const{ return m_MousePos; }

private:
	C_Mouse(){}

	//画面サイズ
	static const int ScrWidth = 1280;
	static const int ScrHeight = 720;

	//マウス座標
	POINT m_MousePos;
};
#define MOUSE C_Mouse::GetInstans()