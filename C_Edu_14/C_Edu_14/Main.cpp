/*
Chapter 14
*/
#include <stdio.h>
#include <stdlib.h>

//������
enum {
	AAA, //0
	BBB, //1
	CCC, //2
	DDD=10, //10
	EEE, //11
	FFF //12
};

int main(void)
{
		/*int Num=0;
		switch (Num)
		{
		case 1:

			break;
		case 2:

			break;
		case 4:

			break;
		}
		return 0;*/

		/*{
			struct Object
			{
				char* Name;
				int Lev;
			};

			enum objectID
			{
				PLAYER,
				ENEMY,
				BULLET,
				BOSS,
				ITEM,
				MAX
			};

			Object ObjectList[MAX];
			ObjectList[PLAYER].Name = (char*)"Player";
			ObjectList[PLAYER].Lev = 10;

			ObjectList[ENEMY].Name = (char*)"Enemy";
			ObjectList[ENEMY].Lev = 10;

			ObjectList[BULLET].Name = (char*)"Bullet";
			ObjectList[BULLET].Lev = 10;

			ObjectList[BOSS].Name = (char*)"Boss";
			ObjectList[BOSS].Lev = 10;

			for (int i = 0; i < MAX; ++i)
			{
				printf("%s�� ������ :%d\n\n",
					ObjectList[i].Name,
					ObjectList[i].Lev);
			}
			printf("\n");
		}*/
	/*
		{
			enum class SceneID
			{
				LOGO,
				MENU,
				STAGE,
				EXIT,
			};
			SceneID StateID = SceneID::LOGO;
			while (true)
			{
				//�ܼ� ���� û��
				switch (StateID)
				{
				case SceneID::LOGO:
				{
					printf("LOGO\n");
					StateID = SceneID::MENU;
				}
				break;
				case SceneID::MENU:
				{
					printf("MENU\n");
					StateID = SceneID::STAGE;
				}
				break;
				case SceneID::STAGE:
				{
					printf("STAGE\n");
					StateID = SceneID::EXIT;
				}
				break;
				case SceneID::EXIT:
				{}
				printf("EXIT\n");
				StateID = SceneID::MENU;
				}
				exit(0);//�ܼ�����
				break;
			}
		}
	

	{
	struct Student
	{
		char* Name;
		int KorScore;
		int EngScore;
		int MathScore;
	};
	//Ÿ���� ������
	typedef Student STD;

	STD Stds;

	Stds.Name = (char*)"ȫ�浿";
	Stds.KorScore = 100;
	Stds.EngScore = 100; 
	Stds.MathScore = 100;
	}
	{
		typedef int INT;
		INT Number = 10;
		printf("%d\n", Number);
	}
	{
		//����ü�� ����鼭 �̸��� ������ �� ����.
		typedef struct Student
		{
			char* Name;
			int KorScore;
			int EngScore;
			int MathScore;
		}STD;
	}
	{
		//���� ���·� ������ ���� 
		typedef struct Student
		{
			char* Name;
			int KorScore;
			int EngScore;
			int MathScore;
		}STD1,STD2,STD3,*PSTD, STD;
		
		PSTD zzzz = (PSTD)malloc(sizeof(STD));
	}
	*/
		

	return 0;
}