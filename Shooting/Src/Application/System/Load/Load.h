#pragma once

enum TittleTexType
{
	TitleBack,
	TitleTexMax
};

class C_Load
{
public:
	~C_Load(){}

	static C_Load& GetInstans()
	{
		static C_Load instans;
		return instans;
	}

	//タイトルの画像読み込み
	void TitleTexLoad();
	//タイトル画像のリリース
	void TitleTexRelease();
	//タイトルの画像取り出し
	KdTexture& GetTitleTex(TittleTexType type)
	{
		return m_TitleTex[type];
	}
	
	//ゲーム画面の画像読み込み
	void GameTexLoad();
	//ゲーム画面の画像リリース
	void GameTexRelese();

	//リザルトの画像読み込み
	void ResultTexLoad();
	//リザルト画面の画像リリース
	void ResultTexRelese();

private:
	C_Load() {}

	//===タイトル===

	KdTexture	m_TitleTex[TitleTexMax];

	//===プレイ====


	//===リザルト===

};
#define LOAD C_Load::GetInstans()
