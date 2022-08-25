/*
Chapter 02
*/
#include <stdio.h>
#include <Windows.h>


struct Vector2
{
	int x, y;
};

void SetCursorPosition(int _x, int _y);
void Showcursor(bool _b);

int main(void)
{
	ShowCursor(false);
	
	char* Tex = (char*)"ㅁ";
	ULONGLONG Time = GetTickCount64();
	Vector2 PlayerPosition;
	PlayerPosition.x = 0;
	PlayerPosition.y = 0;
	bool Horzontal, Vertical;
	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();
			system("cls");
	
			
			//GetAsyncKeyState()키 입력 함수
			// 뒤쪽 0과 1의 차이
			// 0:이전에 눌린적 없음.
			// 1:이전에 눌린적 있음.
			// 앞쪾 0과 8의 차이
			// 0:현재 눌리지 않음.
			// 8:현재 눌림.
			//GetAsyncKeyState() = 0x0000 를 반환
			//GetAsyncKeyState() = 0x0001 를 반환
			//GetAsyncKeyState() = 0x8000 를 반환
			//GetAsyncKeyState() = 0x8001 를 반환

			//printf("%x\n", (GetAsyncKeyState(VK_UP)&0x01));
		
			//매개변수로 Virtual Key 를 입력 받는다.
			if (GetAsyncKeyState(VK_UP) && !Horzontal)
			{	
				if (PlayerPosition.y >0)
					PlayerPosition.y--;
			
				Tex = (char*)"△";
				Vertical = true;
			}
			else
				Vertical = false;
			if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
			{
				if (PlayerPosition.y<39)
					PlayerPosition.y++;
				Tex = (char*)"▽";
				Vertical = true;
			}
			else
				Vertical = false;
			if (GetAsyncKeyState(VK_LEFT) && !Vertical)
			{
				if (PlayerPosition.x>0)
					PlayerPosition.x++;
				Tex = (char*)"◁";
				Horzontal = true;
			}
			else
				Horzontal = false;
			if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
			{
				if(PlayerPosition.x<128)
					PlayerPosition.x++;
				Tex = (char*)"▷";
				Horzontal = true;
			}
			else
				Horzontal = false;
			SetCursorPosition(PlayerPosition.x, PlayerPosition.y);
			printf("%s",Texture);
		
		}
	}

	return 0;
}

//커서의 위치를 이동시킨다.
void SetCursorPosition(int _x, int _y)
{
	//좌표를 설정
	COORD pos = { _x,_y };

	//설정한 좌표를 이동시키는 함수
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//GetStdHandle(STD_OUTPUT_HANDLE) =현재 콘솔의 핸들.
	//HANDLE: 윈도우 창의 기본 설정값을 셋팅할 수 있음.
}
//커서를 보이게/안보이게 하는 함수 , true 보이게, false 안보이게
void Showcursor(bool _b)
{
	//커서의 기본정보를 생성한다.
	CONSOLE_CURSOR_INFO Info;

	//커서를 보이게/안보이게 한다.
	Info.bVisible = _b;

	//커서의 크기를 설정한다,
	Info.dwSize = 1;

	//커서의 설정을 적용시키는 함수
	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}