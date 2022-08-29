/*
Chapter 04
*/

#include <stdio.h>
#include <Windows.h>


//const >>���ȭ
//const int NUMBER = 10;


//lvalue           rvalue
// ** �浹ó��.
// ** ������ & ���������.
// ** ��� ���� (scene ��ȯ)
// ** ���� �Լ�.
// ** �Լ� ����.

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

	// ** �÷��̾� �ʱ�ȭ
	Object Player;
	Player.Position = Vector2(int(120 * 0.3333f), 40 >> 1);
	/*Player.Position.x = int(120*0.3333f);
	Player.Position.y = 40>>1;*/

	Player.Texture = (char*)"��";

	//Texture ���̸� �̸� Ȯ���� �� ����. ���������� �����ϴ� ���� ����.
	//Texture �� ���� �ʱ�ȭ �ϰ� ���Ŀ� ����� �Ʒ��� ���� �ʱ�ȭ ��.
	Player.Scale = Vector2((int)strlen(Player.Texture), 1);
	/*Player.Scale.x = (int)strlen(Player.Texture);
	Player.Scale.y = 1;*/


	// ** �÷��̾� �ʱ�ȭ
	Object Enemy;
	Enemy.Position = Vector2(int(120 * 0.3333f * 2), 40 >> 1);
	//Enemy.Position.x = int(120*0.3333f*2); // literal ���
	//Enemy.Position.y = 40>>1;
	// ������ 2�� ���� ��Ʈ ����

	Enemy.Texture = (char*)"��";
	Enemy.Scale = Vector2((int)strlen(Enemy.Texture), 1);
	/*Enemy.Scale.x = (int)strlen(Enemy.Texture);
	Enemy.Scale.y = 1;*/

	//�ϳ��� �̻����� �ƴϱ⶧���� �迭�� ����.(������ �Ѿ��� �غ��صд�.)
	Object Bullet[128];

	//�Ѿ��� �߻� �Ǿ����� Ȯ���ϴ� �뵵.
	bool ShowBullet[128];

	//�Ѿ��� �������� ������ �ֱ� ����.
	ULONGLONG BulletDelay = GetTickCount64();


	for (int i = 0; i < 128; i++)
	{
		//srand = �����Լ� �ʱ�ȭ
		srand(
			//���� �ð��� �����Ͽ� �� �� ���� ������ �ʱ�ȭ.
			GetTickCount64() * GetTickCount64());

		//rand = ���� �Լ�
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
			//** Progress ����
			InputKey(&Player);



			//** Render����

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

			//�浹
			/*if (Player.Position.x + 2 > Enemy.Position.x &&
				Enemy.Position.x + 2 > Player.Position.x &&
				Player.Position.y == Enemy.Position.y)
			{
				SetCursorPosition(120 >> 1, 1);
				printf("�浹�Դϴ�.");
			}*/
			for (int i = 0; i < 128; i++)
			{
				//�Ѿ��� 2.5�� �ٴ��̷� ������
				if (BulletDelay + 2500 < GetTickCount64())
				{

					//if(ShowBullet[i] == false)
					//�Ѿ��� ��Ȱ��ȭ ���¶��...
					if (!ShowBullet[i])
					{
						//����� �Ǿ��ٸ� ��ǥ�� �ٽ� �ʱ�ȭ ���ش�.(x=0���� ������ ����)
						//Bullet[i].Position = Vector2(118, rand()% 40);
						Bullet[i].Position.x = 118;
						Bullet[i].Position.y = rand() % 40;
						//���� ���¸� Ȱ��ȭ ���·� �����Ѵ�.
						ShowBullet[i] = true;
						//�ð����� �� �ʱ�ȭ �Ѵ�.
						BulletDelay = GetTickCount64();
						//�Ѿ��� 1���� Ȱ��ȭ �� ���̱� ������ 
						//�ݺ����� ���� ������.
						break;
					}
				}

			}
			for (int i = 0; i < 128; i++)
			{
				if (ShowBullet[i])
				{
					//�Ѿ��� �̵�.
					//**�̵�����: ����
					Bullet[i].Position.x--;

					//�浹����.
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
						//ũ�Ⱚ�� �Բ� �����ؼ� ���� �浹 ������ ��.
					if (Bullet[i].Scale.x <= Player.Position.x && Bullet[i].Scale.y == Player.Scale.y) {


						if (Bullet[i].Position.x == Player.Position.x &&
							Bullet[i].Position.y == Player.Position.y)
						{
							printf("�浹�Դϴ�.");
							system("pause");
							ShowBullet[i] = false;
							printf("�浹�Դϴ�.");
							system("pause");
							continue;
						}
					}



					//�Ѿ��� �� ��ġ�� �׷��� �� �ֵ��� Ŀ���� �̵���Ų��.
					SetCursorPosition(
						Bullet[i].Position.x,
						Bullet[i].Position.y);

					//�Ѿ��� �׸���.
					printf("%s", Bullet[i].Texture);

				}
			}
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
void InputKey(Object* _Object)
{
	if (GetAsyncKeyState(VK_UP) && !Horzontal)
	{
		if (_Object->Position.y > 0)
			_Object->Position.y--;

		_Object->Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_DOWN) && !Horzontal)
	{
		if (_Object->Position.y < 39)
			_Object->Position.y++;

		_Object->Texture = (char*)"��";
		Vertical = true;
	}
	else
		Vertical = false;

	if (GetAsyncKeyState(VK_LEFT) && !Vertical)
	{
		if (_Object->Position.x > 0)
			_Object->Position.x--;

		_Object->Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;

	if (GetAsyncKeyState(VK_RIGHT) && !Vertical)
	{
		if (_Object->Position.x < 118)
			_Object->Position.x++;

		_Object->Texture = (char*)"��";
		Horzontal = true;
	}
	else
		Horzontal = false;
}