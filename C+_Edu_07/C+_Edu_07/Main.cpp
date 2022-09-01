#include "Headers.h"

// http://patorjk.com/software/taag/#p=testall&f=Graffiti&t=Logo

// ** �Լ� ����.
// ** Ű �Է� �Լ� ����.



// ** �����ȯ�� �ϱ����� ����
// ** ���� ����� �����Ѵ�.
SceneID SceneState = SceneID::LOGO;
static DWORD KeyState = 0;







void SetScene(Object* _pPlayer, Object* _pEnemy);
Object* CreateObject(int _x, int _y, char* _Texture);
void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);
void InputKey();

void LogoProgress();
void LogoRender(char* _str[], int _size, int _x, int _y);

void MenuProgress();
void MenuRender(char* _str[], int _size, int _x, int _y);

void StageInitialize();
void StageProgress(Object* _Player, Object* _Enemy);
void StageRender(Object* _Player, Object* _Enemy);
bool Collision(Object* _Temp, Object* _Dest);


int main(void)
{
	ShowCursor(false);

	ULONGLONG Time = GetTickCount64();

	// ** �÷��̾� �ʱ�ȭ
	Object* pPlayer = CreateObject(int(120 * 0.3333f), 40 >> 1, (char*)"��");

	// ** Enemy �ʱ�ȭ
	Object* Enemy = CreateObject(int(120 * 0.3333f * 2), 40 >> 1, (char*)"��");

	StageInitialize();

	while (true)
	{
		if (Time + 50 <= GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			InputKey();
			SetScene(pPlayer, Enemy);
		}
	}

	return 0;
}

// ������������ ��������������������
// ������������ ������SceneState����
// ������������ ��������������������
//                        ��
//        ����������������������������������
//        ��              ��              ��
// ������������������������������������������������
// ������Logo������������Menu��������    Stage   �� 
// ������������������������������������������������
void SetScene(Object* _pPlayer, Object* _pEnemy)
{
	switch (SceneState)
	{
	case SceneID::LOGO:
	{
		static char* LogoTex[23] = {
		   (char*)"LLLLLLLLLLL",
		   (char*)"L:::::::::L",
		   (char*)"L:::::::::L",
		   (char*)"LL:::::::LL",
		   (char*)"  L:::::L                  ooooooooooo      ggggggggg   ggggg   ooooooooooo",
		   (char*)"  L:::::L                oo:::::::::::oo   g:::::::::ggg::::g oo:::::::::::oo",
		   (char*)"  L:::::L               o:::::::::::::::o g:::::::::::::::::go:::::::::::::::o",
		   (char*)"  L:::::L               o:::::ooooo:::::og::::::ggggg::::::ggo:::::ooooo:::::o",
		   (char*)"  L:::::L               o::::o     o::::og:::::g     g:::::g o::::o     o::::o",
		   (char*)"  L:::::L               o::::o     o::::og:::::g     g:::::g o::::o     o::::o",
		   (char*)"  L:::::L               o::::o     o::::og:::::g     g:::::g o::::o     o::::o",
		   (char*)"  L:::::L         LLLLLLo::::o     o::::og::::::g    g:::::g o::::o     o::::o",
		   (char*)"LL:::::::LLLLLLLLL:::::Lo:::::ooooo:::::og:::::::ggggg:::::g o:::::ooooo:::::o",
		   (char*)"L::::::::::::::::::::::Lo:::::::::::::::o g::::::::::::::::g o:::::::::::::::o",
		   (char*)"L::::::::::::::::::::::L oo:::::::::::oo   gg::::::::::::::g  oo:::::::::::oo",
		   (char*)"LLLLLLLLLLLLLLLLLLLLLLLL   ooooooooooo       gggggggg::::::g    ooooooooooo",
		   (char*)"                                                     g:::::g",
		   (char*)"                                         gggggg      g:::::g",
		   (char*)"                                         g:::::gg   gg:::::g",
		   (char*)"                                          g::::::ggg:::::::g",
		   (char*)"                                           gg:::::::::::::g",
		   (char*)"                                             ggg::::::ggg",
		   (char*)"                                                gggggg"
		};

		LogoProgress();
		LogoRender(LogoTex, 23, 22, 5);
	}
	break;

	case SceneID::MENU:
	{
		static char* MenuTex[16] = {
		(char*)"MMMMMMMM               MMMMMMMM",
			(char*)"M:::::::M             M:::::::M",
			(char*)"M::::::::M           M::::::::M",
			(char*)"M:::::::::M         M:::::::::M",
			(char*)"M::::::::::M       M::::::::::M    eeeeeeeeeeee    nnnn  nnnnnnnn    uuuuuu    uuuuuu",
			(char*)"M:::::::::::M     M:::::::::::M  ee::::::::::::ee  n:::nn::::::::nn  u::::u    u::::u",
			(char*)"M:::::::M::::M   M::::M:::::::M e::::::eeeee:::::een::::::::::::::nn u::::u    u::::u",
			(char*)"M::::::M M::::M M::::M M::::::Me::::::e     e:::::enn:::::::::::::::nu::::u    u::::u",
			(char*)"M::::::M  M::::M::::M  M::::::Me:::::::eeeee::::::e  n:::::nnnn:::::nu::::u    u::::u",
			(char*)"M::::::M   M:::::::M   M::::::Me:::::::::::::::::e   n::::n    n::::nu::::u    u::::u",
			(char*)"M::::::M    M:::::M    M::::::Me::::::eeeeeeeeeee    n::::n    n::::nu::::u    u::::u",
			(char*)"M::::::M     MMMMM     M::::::Me:::::::e             n::::n    n::::nu:::::uuuu:::::u",
			(char*)"M::::::M               M::::::Me::::::::e            n::::n    n::::nu:::::::::::::::uu",
			(char*)"M::::::M               M::::::M e::::::::eeeeeeee    n::::n    n::::n u:::::::::::::::u",
			(char*)"M::::::M               M::::::M  ee:::::::::::::e    n::::n    n::::n  uu::::::::uu:::u",
			(char*)"MMMMMMMM               MMMMMMMM    eeeeeeeeeeeeee    nnnnnn    nnnnnn    uuuuuuuu  uuuu" };

		MenuProgress();
		MenuRender(MenuTex, 16, 17, 8);
	}
	break;

	case SceneID::STAGE:
		StageProgress(_pPlayer, _pEnemy);
		StageRender(_pPlayer, _pEnemy);
		break;

	case SceneID::EXIT:
		exit(NULL);
		break;
	}
}

// ** ������Ʈ ���� �Լ�.
Object* CreateObject(int _x, int _y, char* _Texture)
{
	// ** Object�� �������� �����Ѵ�.

	//Object* pObj = nullptr;

	Object* pObj = (Object*)malloc(sizeof(Object));

	// ** ��ǥ�� ����
	pObj->Position.x = _x;
	pObj->Position.y = _y;

	// ** �����Ҵ��� ���ش�. �����Ҵ��� �Ҷ� ���ڿ��� ũ�� + 1 ��ŭ�� ũ��� ���ش�.
	pObj->Texture = (char*)malloc(strlen(_Texture) + 1);

	// ** ���ڿ��� �����Ѵ�.
	strcpy(pObj->Texture, _Texture);

	// ** ���ڿ��� ���̷� ũ�⸦ ���Ѵ�.
	pObj->Scale = Vector2((int)strlen(pObj->Texture), 1);

	// ** ��� ������ �Ϸ�Ǿ��ٸ� 
	// ** �������� ������ Object �� �ּҸ� ��ȯ�Ѵ�.
	return pObj;
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
void InputKey()
{
	KeyState = 0;

	if (GetAsyncKeyState(VK_UP))
		KeyState = KEYID_UP;

	if (GetAsyncKeyState(VK_DOWN))
		KeyState = KEYID_DOWN;

	if (GetAsyncKeyState(VK_LEFT))
		KeyState = KEYID_LEFT;

	if (GetAsyncKeyState(VK_RIGHT))
		KeyState = KEYID_RIGHT;

	if (GetAsyncKeyState(VK_RETURN))
		KeyState = KEYID_ESCAPE;

	if (GetAsyncKeyState(VK_ESCAPE))
		KeyState = KEYID_ENTER;

	if (GetAsyncKeyState(VK_SPACE))
		KeyState = KEYID_SPACE;
}

void LogoProgress()
{
	if (KeyState == KEYID_ESCAPE)
		SceneState = SceneID::MENU;
}



void LogoRender(char* _str[], int _size, int _x, int _y)
{
	for (int i = 0; i < _size; ++i)
	{
		SetCursorPosition(_x, _y + i);
		printf("%s", _str[i]);
	}
}


void MenuProgress()
{
	if (KeyState == KEYID_ENTER)
	{
		SceneState = SceneID::STAGE;
	}
}

void MenuRender(char* _str[], int _size, int _x, int _y)
{
	for (int i = 0; i < _size; ++i)
	{
		SetCursorPosition(_x, _y + i);
		printf("%s", _str[i]);
	}
}

Object* Bullet[128];
bool Check[128];

void StageInitialize()
{
	for (int i = 0; i < 128; ++i)
	{
		Bullet[i] = CreateObject(0, 0, (char*)"*");
		Check[i] = false;
	}
}

void StageProgress(Object* _Player, Object* _Enemy)
{
	if (KeyState == KEYID_UP)
	{
		if (_Player->Position.y > 0)
			_Player->Position.y--;

		_Player->Texture = (char*)"��";
	}

	if (KeyState == KEYID_DOWN)
	{
		if (_Player->Position.y < 39)
			_Player->Position.y++;

		_Player->Texture = (char*)"��";
	}

	if (KeyState == KEYID_LEFT)
	{
		if (_Player->Position.x > 0)
			_Player->Position.x--;

		_Player->Texture = (char*)"��";
	}

	if (KeyState == KEYID_RIGHT)
	{
		if (_Player->Position.x < 118)
			_Player->Position.x++;

		_Player->Texture = (char*)"��";
	}

	if (KeyState == KEYID_SPACE)
	{
		for (int i = 0; i < 128; ++i)
		{
			if (!Check[i])
			{
				Bullet[i]->Position.x = 118;
				Bullet[i]->Position.y = rand() % 40;
				Check[i] = true;
				break;
			}
		}
	}

	for (int i = 0; i < 128; ++i)
	{
		if (Check[i])
		{
			Bullet[i]->Position.x -= 1;

			if (Collision(_Player, Bullet[i]))
			{
				SetCursorPosition(120 >> 1, 1);
				printf("Bullet �浹 �Դϴ�.");
			}
		}

		if (Bullet[i]->Position.x <= 1)
			Check[i] = false;
	}

	if (Collision(_Player, _Enemy))
	{
		SetCursorPosition(120 >> 1, 1);
		printf("�浹 �Դϴ�.");
	}

	if (GetAsyncKeyState('Q'))
		SceneState = SceneID::EXIT;
}

void StageRender(Object* _Player, Object* _Enemy)
{
	SetCursorPosition(_Player->Position.x, _Player->Position.y);
	printf("%s", _Player->Texture);

	for (int i = 0; i < 128; ++i)
	{
		if (Check[i])
		{
			SetCursorPosition(Bullet[i]->Position.x, Bullet[i]->Position.y);
			printf("%s", Bullet[i]->Texture);
		}
	}

	SetCursorPosition(_Enemy->Position.x, _Enemy->Position.y);
	printf("%s", _Enemy->Texture);
}

// ** �浹ó�� �Լ�
bool Collision(Object* _Temp, Object* _Dest)
{
	if (_Temp->Position.x + _Temp->Scale.x > _Dest->Position.x &&
		_Dest->Position.x + _Dest->Scale.x > _Temp->Position.x &&
		_Temp->Position.y == _Dest->Position.y)
		return true;
	return false;
}