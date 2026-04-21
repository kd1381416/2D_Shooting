#include"Load.h"

void C_Load::TitleTexLoad()
{
	m_TitleTex[TitleBack].Load("Texture/Title/title.png");
}

void C_Load::TitleTexRelease()
{
	for (int i = 0; i <= TitleTexMax; i++)
	{
		m_TitleTex[i].Release();
	}
}

void C_Load::GameTexLoad()
{
}

void C_Load::GameTexRelese()
{
}

void C_Load::ResultTexLoad()
{
}

void C_Load::ResultTexRelese()
{
}