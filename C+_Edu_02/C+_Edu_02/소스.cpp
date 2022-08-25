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
	
	char* Tex = (char*)"��";
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
	
			
			//GetAsyncKeyState()Ű �Է� �Լ�
			// ���� 0�� 1�� ����
			// 0:������ ������ ����.
			// 1:������ ������ ����.
			// �զU 0�� 8�� ����
			// 0:���� ������ ����.
			// 8:���� ����.
			//GetAsyncKeyState() = 0x0000 �� ��ȯ
			//GetAsyncKeyState() = 0x0001 �� ��ȯ
			//GetAsyncKeyState() = 0x8000 �� ��ȯ
			//GetAsyncKeyState() = 0x8001 �� ��ȯ

			//printf("%x\n", (GetAsyncKeyState(VK_UP)&0x01));
		
			//�Ű������� Virtual Key �� �Է� �޴´�.
			if (GetAsyncKeyState(VK_UP) && !Horzontal)
			{	
				if (PlayerPosition.y >0)
					PlayerPosition.y--;
			
				Tex = (char*)"��";
				Vertical = true;
			}
			else
				Vertical = false;
			if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
			{
				if (PlayerPosition.y<39)
					PlayerPosition.y++;
				Tex = (char*)"��";
				Vertical = true;
			}
			else
				Vertical = false;
			if (GetAsyncKeyState(VK_LEFT) && !Vertical)
			{
				if (PlayerPosition.x>0)
					PlayerPosition.x++;
				Tex = (char*)"��";
				Horzontal = true;
			}
			else
				Horzontal = false;
			if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
			{
				if(PlayerPosition.x<128)
					PlayerPosition.x++;
				Tex = (char*)"��";
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

//Ŀ���� ��ġ�� �̵���Ų��.
void SetCursorPosition(int _x, int _y)
{
	//��ǥ�� ����
	COORD pos = { _x,_y };

	//������ ��ǥ�� �̵���Ű�� �Լ�
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	//GetStdHandle(STD_OUTPUT_HANDLE) =���� �ܼ��� �ڵ�.
	//HANDLE: ������ â�� �⺻ �������� ������ �� ����.
}
//Ŀ���� ���̰�/�Ⱥ��̰� �ϴ� �Լ� , true ���̰�, false �Ⱥ��̰�
void Showcursor(bool _b)
{
	//Ŀ���� �⺻������ �����Ѵ�.
	CONSOLE_CURSOR_INFO Info;

	//Ŀ���� ���̰�/�Ⱥ��̰� �Ѵ�.
	Info.bVisible = _b;

	//Ŀ���� ũ�⸦ �����Ѵ�,
	Info.dwSize = 1;

	//Ŀ���� ������ �����Ű�� �Լ�
	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}