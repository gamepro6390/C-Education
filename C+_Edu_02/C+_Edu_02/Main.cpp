/*
Chapter 02
*/

#include <stdio.h>
#include <Windows.h>

struct Vector2
{
	int x, y;
};

// ** true/false ���߿� �ϳ��� ��ȯ.
// ** Ű �Է��� Ⱦ �̵��϶��� Ȯ��.
bool Horzontal = false;

// ** Ű �Է��� �� �̵��϶��� Ȯ��.
bool Vertical = false;

void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);
void InputKey(Vector2* _Position, char* _Texture);

int main(void)
{
	// ** Ŀ���� �Ⱥ��̰� ������.
	ShowCursor(false);

	// ** �ð� ����
	ULONGLONG Time = GetTickCount64();

	// ** �÷��̾� ��ǥ
	Vector2 PlayerPosition;
	PlayerPosition.x = 0;
	PlayerPosition.y = 0;

	// ** �÷��̾� Texture
	char* Texture = (char*)"��";

	// ** ����
	while (true)
	{
		// ** 0.05�� �������� �ݺ�
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			// ** ȭ�� Ŭ����
			system("cls");

			InputKey(&PlayerPosition, Texture);

			SetCursorPosition(
				PlayerPosition.x,
				PlayerPosition.y);

			printf("%s", Texture);
		}
	}

	return 0;
}

// ** Ŀ���� ��ġ�� �̵���Ų��.
void SetCursorPosition(int _x, int _y)
{
	// ** ��ǥ�� ����.
	COORD pos = { (SHORT)_x, (SHORT)_y };

	// ** ������ ��ǥ�� �̵���Ű�� �Լ�.
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = ���� �ܼ�â�� �ڵ�.
	// ** HANDLE : ������ â�� �⺻ �������� ������ �� ����.
}


// ** Ŀ���� ���̰�/�Ⱥ��̰� �ϴ� �Լ�.
// ** true ���̰�, false �Ⱥ��̰�.
void ShowCursor(bool _b)
{
	// ** Ŀ���� �⺻������ �����Ѵ�.
	CONSOLE_CURSOR_INFO Info;

	// ** Ŀ���� �⺻������ �����Ѵ�.
	// ** Ŀ���� ���̰�/�Ⱥ��̰� �Ѵ�.
	Info.bVisible = _b;

	// ** Ŀ���� ũ�⸦ �����Ѵ�.
	Info.dwSize = 1;

	// ** Ŀ���� ������ �����Ű�� �Լ�.
	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// ** �÷��̾��� Ű �Է��� �ް�, �Է¿� ���� Texture �� ���� �Ѵ�.
void InputKey(Vector2* _Position, char* _Texture)
{
	// ** Ű �Է�.
	// GetAsyncKeyState() = Ű�Է� �Լ�

	// ��Ȳ�� ���� ������ ��ȯ ��.
	// 0x0000, 0x0001, 0x8000, 0x8001

	// ** ���� 0�� 1�� ����
	// 0 : ������ ������ ����.
	// 1 : ������ ������ ����.

	// ** ���� 8�� 0�� ����
	// 0 : ���� ������ ����.
	// 8 : ���� ����.

	// ** �Ű������� Virtual Key �� �Է� �޴´�.
	//if (GetAsyncKeyState(VK_UP) & 0x01)
		//printf("UP\n");

	if (GetAsyncKeyState(VK_UP) && !Horzontal)
	{
		// ** y��ǥ�� 0���� Ŭ ������ �Է��� �޴´�.
		if (_Position->y > 0)
			_Position->y--;

		_Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
	{
		// ** y��ǥ�� 39���� ���������� �Է��� �޴´�.
		if (_Position->y < 39)
			_Position->y++;

		_Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_LEFT) && !Vertical)
	{
		// ** x��ǥ�� 0���� Ŭ ������ �Է��� �޴´�.
		if (_Position->x > 0)
			_Position->x--;

		_Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;

	if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
	{
		// ** x��ǥ�� 118���� ���� ������ �Է��� �޴´�.
		if (_Position->x < 118)
			_Position->x++;

		_Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;
}