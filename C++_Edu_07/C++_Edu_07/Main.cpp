#include "MainUpdate.h"

// ** ��ü���� Ŭ����

int main(void)
{
	MainUpdate Main;
	Main.Initialize(); //enemy,player �ʱ�ȭ �� ������ �ܰ�.

	ULONGLONG Time = GetTickCount64();

	while (true)
	{
		if (Time < GetTickCount64())
		{
			Time = GetTickCount64();

			Main.Progress();
			Main.Render();
		
			if (GetAsyncKeyState('Q'))
				break;


		}
	}




	return 0;
}
