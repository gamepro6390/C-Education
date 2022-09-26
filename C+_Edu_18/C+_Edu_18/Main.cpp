
#include <stdio.h>
#include <malloc.h>
#include <Windows.h>

struct Vector2
{
	int x, y;

	Vector2() : x(0), y(0) { }

	Vector2(int _x, int _y) : x(_x), y(_y) { }
};

struct Object
{
	Vector2 Position;
	Vector2 Scale;
	char* Texture;
};

typedef struct Node
{
	Object* pObj;
	int Index;
	Node* Front;
	Node* Back;
};
//ù��° ���Ҹ� ����Ű�� ���
Node* Begin;

//������ ���Ҹ� ����Ű�� ���
Node* End;

Node* CreateNode();
Object* CreateObject(int _x, int _y, char* _Texture);
void BullseProgress(int _x,int _y, int _Index, char* _Texture);
void Output();


int main(void)
{
	//Begin�� BullteList�� ���� �������� ����Ų��.
	Node* BulletList =Begin = CreateNode();
	
	//�ʱ�ȭ ������ ��尡 �������� �����Ƿ� ����ų ��尡 ����.
	BulletList->Front = nullptr;
	BulletList->Back = nullptr;

	//Begin Object�� ����
	BulletList->pObj = CreateObject(0, 0, (char*)"Begin");

	//�ε��� �ʱ�ȭ
	int Index = 0;

	//���� ���� ���۳��� ������ �����̱� ������ ���� 0���� ����.
	BulletList->Index = Index;

	//��尡 �������� �ʱ� ������ �������� ����Ű�� ���ҵ� �������� ����.
	End = Begin;

	Object* Enemy = CreateObject(0, 0, (char*)"Enemy");

	ULONGLONG Time = GetTickCount64();

	
	while (true)
	{
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();
			system("cls");

			if (GetAsyncKeyState(VK_SPACE))
			{
				//Bullet ����.
				
				BullseProgress(0, 0, ++Index, (char*)"Bullet");
			}

			Output();
		}
	}

	return 0;
}

Node* CreateNode()
{
	Node* pNode = (Node*)malloc(sizeof(Node));

	pNode->pObj = nullptr;
	pNode->Front = nullptr;
	pNode->Back = nullptr;

	return pNode;
}

Object* CreateObject(int _x, int _y, char* _Texture)
{
	Object* pObj = (Object*)malloc(sizeof(Object));

	pObj->Position = Vector2(_x, _y);

	pObj->Texture = _Texture;
	pObj->Scale = Vector2(strlen(_Texture), 1);

	return pObj;
}

void BullseProgress(int _x, int _y, int _Index, char* _Texture)
{
	//�ӽ��� node�� End�� ����Ű�� ���Ҹ� �Ѱ��ش�.
	Node* node = End;
	
	//������ ��尡 ����Ű�� ���� ��ġ�� ���ο� ��带 ����.
	node->Back = CreateNode();

	//�׸��� ���� ���� ���Ӱ� ������ ����� ��ġ�� �̵���Ŵ
	node = node->Back;
	
	//���Ӱ� ������ ����� Index�� �ʱ�ȭ
	node->Index = _Index;

	//���Ӱ� ������ ����� Obj�� Object�� ����
	node->pObj = CreateObject(_x, _y, _Texture);

	//���Ӱ� ������ ����� ���� ��带 �����ϰ�
	node->Front = End;

	//���� ��尡 ����Ű�� ������ nullptr�� ����.
	node->Back = nullptr;
	
	//��� �ʱⰪ�� ������ �Ϸ�Ǿ��ٸ�, ���Ӱ� ������ ��带 ������ ���� ����.
	End = node;


	/*End->Back = (Node*)malloc(sizeof(Node));
	End->Back->Front = End;
	End = End->Back;
	End->Back = nullptr;
	End->pObj = _pObj;*/
}

void Output()
{
	//ù��° ��带 �ӽ� ��忡 ����
	Node* node = Begin;
	//ù��° ���� ���Ұ� �ƴϱ� ������ ���� ���� �̵�
	node = node->Back;

	//���� ��尡 ���� ���� �ʰų�,
	//���� ��尡 ����Ű�� Obj�� �������� ������ ���� ---�ݺ�
	while (node && node->pObj)
	{
		printf("%s:%d\n", node->pObj->Texture,node->Index);

		node = node->Back;
	}
}