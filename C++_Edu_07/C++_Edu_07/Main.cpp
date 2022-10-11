#include "MainUpdate.h"

// ** 객체관리 클래스

int main(void)
{
	MainUpdate Main;
	Main.Initialize(); //enemy,player 초기화 후 생성된 단계.

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
