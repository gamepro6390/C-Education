#include <stdio.h>
#include <Windows.h>

struct Vector2
{
	int x, y;

	Vector2() : x(0), y(0)
	{

	}

	Vector2(int _x, int _y) : x(0), y(0)
	{

	}
};

struct Object
{
	Vector2 Position;
	Vector2 Scale;
	char* Texture;

};
bool Horzontal = false;

bool Vertical = false;

void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);
void InputKey(Object* _Object);
int global = 0;

int main(void)
{
	ShowCursor(false);

	ULONGLONG Time = GetTickCount64();

	//플레이어 초기화
	Object Player;
	Player.Texture = (char*)"△";
	Player.Position = Vector2(0, 0);

	Player.Scale.x = 2;
	Player.Scale.y = 1;

	Object Bullet[128];

	bool ShowBullet[128];

	ULONGLONG BulletDelay = GetTickCount64();


	for (int i = 0; i < 128; i++)
	{
		srand(
			GetTickCount64() * GetTickCount64());

		Bullet[i].Position = Vector2(118, (rand() % 40));
		Bullet[i].Texture = (char*)"*";
		Bullet[i].Scale.x = 1;
		Bullet[i].Scale.y = 1;

		ShowBullet[i] = false;
	}

	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			InputKey(&Player);

			SetCursorPosition(
				Player.Position.x,
				Player.Position.y);

			printf("%s", Player.Texture);
			int Num = 0;
			



			for (int i = 0; i < 128; i++)
			{
				if (BulletDelay + 2000 < GetTickCount64())
				{

					if (!ShowBullet[i])
					{
						//Bullet[i].Position = Vector2(118, (rand() % 40));
						Bullet[i].Position.x = 118;
						Bullet[i].Position.y = rand() % 40;
						ShowBullet[i] = true;

						BulletDelay = GetTickCount64();

						break;
					}
				}

			}
			for (int i = 0; i < 128; i++)
			{
				if (ShowBullet[i])
				{

					Bullet[i].Position.x--;

					if (Bullet[i].Position.x <= 0)
					{
						ShowBullet[i] = false;
						continue;
					}

					if (Bullet[i].Scale.x <= Player.Position.x && Bullet[i].Scale.y == Player.Scale.y) {


						if (Bullet[i].Position.x == Player.Position.x &&
							Bullet[i].Position.y == Player.Position.y)
						{
							global = global + 1;

							SetCursorPosition(55, 1);
							printf("충돌 하였습니다.");
							SetCursorPosition(55, 2);
							printf("충돌 횟수:%d", global);


							Sleep(1000); //print 문을 조금 유지 시켜주기 위해

							ShowBullet[i] = false;
							continue;
						}
					}

					SetCursorPosition(
						Bullet[i].Position.x,
						Bullet[i].Position.y);

					printf("%s", Bullet[i].Texture);
				}
			}
		}
	}

	return 0;
}

void SetCursorPosition(int _x, int _y)
{
	COORD pos = { (SHORT)_x, (SHORT)_y };

	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void ShowCursor(bool _b)
{
	CONSOLE_CURSOR_INFO Info;

	Info.bVisible = _b;

	Info.dwSize = 1;

	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

void InputKey(Object* _Object)
{

	if (GetAsyncKeyState(VK_UP) && !Horzontal)
	{
		if (_Object->Position.y > 0)
			_Object->Position.y--;

		_Object->Texture = (char*)"△";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
	{
		if (_Object->Position.y < 39)
			_Object->Position.y++;

		_Object->Texture = (char*)"▽";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_LEFT) && !Vertical)
	{
		if (_Object->Position.x > 0)
			_Object->Position.x--;

		_Object->Texture = (char*)"◁";
		Horzontal = true;
	}
	else
		Horzontal = false;

	if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
	{

		if (_Object->Position.x < 118)
			_Object->Position.x++;

		_Object->Texture = (char*)"▷";
		Horzontal = true;
	}
	else
		Horzontal = false;
}