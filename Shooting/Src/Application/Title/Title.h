#pragma once

class C_Title
{
public:
	C_Title();
	~C_Title();


	void Init();
	void Update();
	void Draw();

	//‰æ‘œ“Ç‚İ‚İ
	//void SetBackTex(KdTexture* a_tex) { BackTex = a_tex; }

private:
	

	//===”wŒi===
	Math::Vector2	BackPos;		//”wŒiÀ•W
	float			BackScale;		//”wŒiƒTƒCƒY
	Math::Matrix	BackTransMat;	//”wŒis—ñ(À•W)
	Math::Matrix	BackScaleMat;	//”wŒis—ñ(Šgk)
	Math::Matrix	BackMat;		//”wŒis—ñ
	Math::Color		BackColor;		//”wŒiF
	KdTexture*		BackTex;		//”wŒi‰æ‘œ

};