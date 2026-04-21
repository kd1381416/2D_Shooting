#pragma once

class C_KeyManager
{
public:
	~C_KeyManager(){}

	static C_KeyManager& GetInstans()
	{
		static C_KeyManager instans;
		return instans;
	}

	bool ClickEnter()
	{
		if (GetAsyncKeyState(VK_RETURN) & 0x8000)
		{
			if (!ClickEnterFlg)
			{
				ClickEnterFlg = true;
				return true;
			}
		}
		else
		{
			ClickEnterFlg = false;
		}
		return false;
	}
private:
	C_KeyManager()
	{
		ClickEnterFlg = false;
	}

	//EnterƒL[
	bool ClickEnterFlg;
};
#define KEYMANAGER C_KeyManager::GetInstans()