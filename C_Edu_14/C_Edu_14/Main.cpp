/*
Chapter 14
*/
#include <stdio.h>
#include <stdlib.h>

//열겨형
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
				printf("%s의 레벨은 :%d\n\n",
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
				//콘솔 버퍼 청소
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
				exit(0);//콘솔종료
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
	//타입을 재정의
	typedef Student STD;

	STD Stds;

	Stds.Name = (char*)"홍길동";
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
		//구조체를 만들면서 이름을 정의할 수 있음.
		typedef struct Student
		{
			char* Name;
			int KorScore;
			int EngScore;
			int MathScore;
		}STD;
	}
	{
		//여러 형태로 재정의 가능 
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