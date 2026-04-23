#include"Mouse.h"
#include"Src/Application/main.h"

void C_Mouse::Init()
{
	m_MousePos = {};
}

void C_Mouse::Update()
{
	GetCursorPos(&m_MousePos);
	ScreenToClient(APP.m_window.GetWndHandle(), &m_MousePos);
	m_MousePos.x = ScrWidth / 2;
	m_MousePos.y = ScrHeight / 2;
}

void C_Mouse::Draw()
{
}