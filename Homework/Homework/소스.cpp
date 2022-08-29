/*
Chapter 04
*/

#include <stdio.h>
#include <Windows.h>


//const >>상수화
//const int NUMBER = 10;


//lvalue           rvalue
// ** 충돌처리.
// ** 생성자 & 복사생성자.
// ** 장면 관리 (scene 전환)
// ** 생성 함수.
// ** 함수 정리.

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

int main(void)
{
	ShowCursor(false);

	ULONGLONG Time = GetTickCount64();

	// ** 플레이어 초기화
	Object Player;
	Player.Position = Vector2(int(120 * 0.3333f), 40 >> 1);
	/*Player.Position.x = int(120*0.3333f);
	Player.Position.y = 40>>1;*/

	Player.Texture = (char*)"△";

	//Texture 길이를 미리 확인할 수 없다. 유동적으로 설계하는 것이 좋음.
	//Texture 를 먼저 초기화 하고 이후에 사이즈를 아래와 같이 초기화 함.
	Player.Scale = Vector2((int)strlen(Player.Texture), 1);
	/*Player.Scale.x = (int)strlen(Player.Texture);
	Player.Scale.y = 1;*/


	// ** 플레이어 초기화
	Object Enemy;
	Enemy.Position = Vector2(int(120 * 0.3333f * 2), 40 >> 1);
	//Enemy.Position.x = int(120*0.3333f*2); // literal 상수
	//Enemy.Position.y = 40>>1;
	// 나누기 2에 대한 비트 연산

	Enemy.Texture = (char*)"■";
	Enemy.Scale = Vector2((int)strlen(Enemy.Texture), 1);
	/*Enemy.Scale.x = (int)strlen(Enemy.Texture);
	Enemy.Scale.y = 1;*/

	//하나의 미사일이 아니기때문에 배열로 설정.(여분의 총알을 준비해둔다.)
	Object Bullet[128];

	//총알이 발사 되었는지 확인하는 용도.
	bool ShowBullet[128];

	//총알의 생성간의 간격을 주기 위함.
	ULONGLONG BulletDelay = GetTickCount64();


	for (int i = 0; i < 128; i++)
	{
		//srand = 랜덤함수 초기화
		srand(
			//현재 시간을 제곱하여 알 수 없는 값으로 초기화.
			GetTickCount64() * GetTickCount64());

		//rand = 랜덤 함수
		Bullet[i].Position.x = 118;
		Bullet[i].Position.y = rand() % 40;
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
			//** Progress 구간
			InputKey(&Player);



			//** Render구간

			//Player
			SetCursorPosition(
				Player.Position.x,
				Player.Position.y);

			printf("%s", Player.Texture);


			//Enemy
			SetCursorPosition(
				Enemy.Position.x,
				Enemy.Position.y);

			printf("%s", Enemy.Texture);

			//충돌
			/*if (Player.Position.x + 2 > Enemy.Position.x &&
				Enemy.Position.x + 2 > Player.Position.x &&
				Player.Position.y == Enemy.Position.y)
			{
				SetCursorPosition(120 >> 1, 1);
				printf("충돌입니다.");
			}*/
			for (int i = 0; i < 128; i++)
			{
				//총알이 2.5초 다눙이로 생성댐
				if (BulletDelay + 2500 < GetTickCount64())
				{

					//if(ShowBullet[i] == false)
					//총알이 비활성화 상태라면...
					if (!ShowBullet[i])
					{
						//재생성 되었다면 좌표를 다시 초기화 해준다.(x=0에서 끝났기 때문)
						//Bullet[i].Position = Vector2(118, rand()% 40);
						Bullet[i].Position.x = 118;
						Bullet[i].Position.y = rand() % 40;
						//현재 상태를 활성화 상태로 변경한다.
						ShowBullet[i] = true;
						//시간값을 재 초기화 한다.
						BulletDelay = GetTickCount64();
						//총알을 1개만 활성화 할 것이기 때문에 
						//반복문을 빠져 나간다.
						break;
					}
				}

			}
			for (int i = 0; i < 128; i++)
			{
				if (ShowBullet[i])
				{
					//총알의 이동.
					//**이동방향: ←←←
					Bullet[i].Position.x--;

					//충돌판정.
					/*if (Bullet[i].Position.x == 0)
					{
						Bullet[i].Position.x = 118;
					}*/
					if (Bullet[i].Position.x <= 0)
					{
						ShowBullet[i] = false;
						continue;
					}

					/*if (Player.Position.x + 2 > Enemy.Position.x &&
						Enemy.Position.x + 2 > Player.Position.x &&
						Player.Position.y == Enemy.Position.y)*/
						//크기값을 함께 설정해서 범위 충돌 만들어야 함.
					if (Bullet[i].Scale.x <= Player.Position.x && Bullet[i].Scale.y == Player.Scale.y) {


						if (Bullet[i].Position.x == Player.Position.x &&
							Bullet[i].Position.y == Player.Position.y)
						{
							printf("충돌입니다.");
							system("pause");
							ShowBullet[i] = false;
							printf("충돌입니다.");
							system("pause");
							continue;
						}
					}



					//총알이 제 위치에 그려질 수 있도록 커서를 이동시킨다.
					SetCursorPosition(
						Bullet[i].Position.x,
						Bullet[i].Position.y);

					//총알을 그린다.
					printf("%s", Bullet[i].Texture);

				}
			}
		}
	}

	return 0;
}

// ** 커서의 위치를 이동시킨다.
void SetCursorPosition(int _x, int _y)
{
	// ** 좌표를 설정.
	COORD pos = { (SHORT)_x, (SHORT)_y };

	// ** 설정한 좌표로 이동시키는 함수.
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = 현재 콘솔창의 핸들.
	// ** HANDLE : 윈도우 창의 기본 설정값을 셋팅할 수 있음.
}

// ** 커서를 보이게/안보이게 하는 함수.
// ** true 보이게, false 안보이게.
void ShowCursor(bool _b)
{
	// ** 커서의 기본정보를 생성한다.
	CONSOLE_CURSOR_INFO Info;

	// ** 커서의 기본정보를 셋팅한다.
	// ** 커서를 보이게/안보이게 한다.
	Info.bVisible = _b;

	// ** 커서의 크기를 설정한다.
	Info.dwSize = 1;

	// ** 커서의 설정을 적용시키는 함수.
	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}

// ** 플레이어의 키 입력을 받고, 입력에 따라 Texture 를 변경 한다.
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