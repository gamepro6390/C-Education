#pragma warning(disable:4996)
#include "Headers.h"
#define _CRT_SECURE_NO_WARNINGS

// ** ��� ���� (scene ��ȯ)
// ** ���� �Լ�.
// ** �Լ� ����.



bool Horzontal = false;
bool Vertical = false;
SceneID SceneState = SceneID::LOGO;

void SetScene(Object* _pPlayer, Object* _pEnemy);
Object* CreateObject(Vector2 Position, char* _Texture);
void SetCursorPosition(int _x, int _y);
void Render(char* _str, int _x, int _y);
void ShowCursor(bool _b);
void InputKey(Object* _Object);

int main(void)
{
	ShowCursor(false);

	ULONGLONG Time = GetTickCount64();

	// ** �÷��̾� �ʱ�ȭ
	Object* pPlayer=CreateObject(int(120*0.3333f) ,40>>1, (char*)"��");
	

	// ** Enemy �ʱ�ȭ
	Object* pEnemy=CreateObject(
		Vector2(int(120 * 0.3333f * 2), 40 >> 1), (char*)"��");


	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			system("cls");

			SetScene(pPlayer, pEnemy);

		}
	}

	return 0;
}

void SetScene( Object* _pPlayer, Object* _pEnemy)
{
	switch (SceneState)
	{
	case SceneID::LOGO:
		Render((char*)"LOGO",58, 20);
		if (GetAsyncKeyState(VK_RETURN) || GetAsyncKeyState(VK_ESCAPE))
			SceneState = SceneID::MENU;
		break;
	case SceneID::MENU:
		Render((char*)"MENU", 58, 20);
		if (GetAsyncKeyState('S'))
		{
			SceneState = SceneID::MENU;
		}
		break;
	case SceneID::STAGE:
		
		InputKey(_pPlayer);

		Render(_pPlayer->Texture,
			_pPlayer->Position.x,
			_pPlayer->Position.y);


		printf("%s", _pPlayer->Texture);

		// ** Enemy
		Render(_pEnemy->Texture,
			_pEnemy->Position.x,
			_pEnemy->Position.y);
		
		printf("%s",_pEnemy->Texture);

		// ** �浹
		if (_pPlayer->Position.x + 2 > _pEnemy->Position.x &&
			_pEnemy->Position.x + 2 > _pPlayer->Position.x &&
			_pPlayer->Position.y == _pEnemy->Position.y)
		{
			SetCursorPosition(120 >> 1, 1);
			printf("�浹 �Դϴ�.");
		}
		if (GetAsyncKeyState('Q'))
		{
			SceneState = SceneID::EXIT;
		}
		break;
	case SceneID::EXIT:
		exit(NULL);
		break;
	}
}

Object* CreateObject(int _x, int _y , char* _Texture)
{
	Object* pObj = (Object*)malloc(sizeof(Object));
	
	pObj->Position.x = _x;
	pObj->Position.y = _y;


	//pObj->Position = Vector2(_Position.x, _Position.y);
	pObj->Texture = (char*)malloc(strlen(_Texture) + 1);
	strcpy(pObj->Texture, _Texture);

	pObj->Scale = Vector2((int)strlen(pObj->Texture), 1);

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

void Render(char* _str, int _x, int _y)
{
	SetCursorPosition(_x, _y);
	printf("%s", _str);
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