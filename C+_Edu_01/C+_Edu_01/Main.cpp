/*
Chapter 01
*/
//기본 입출력
#include <stdio.h>

//system 함수
#include <stdlib.h>

//input 및 윈도우창 제어 할때 사용될 라이브러리
#include <Windows.h>


/*
struct Student
{
	char* Name;
	int Kor;
	int Eng;
	int Math;
};

typedef struct Object
{
	Student std;
	int Age;
	int Number;
	int iClass;
}HOBJ;  //*PHOBJ;
//핸들은 포인터로 두진 않음.
*/
struct Time
{
	char Hour;
	char Minute;
	char Second;
};

int main(void)
{
	//루프
	//HOBJ
	//*PHOBJ
	
	
	//시간 함수
	// DWORD Time =GetTickCount(); 컴퓨터가 켜진 순간부텉 49.7일

	//GetTickcount64()=1/1000초 =0.001초 단위
	ULONGLONG ITime = GetTickCount64();
	int Count = 0;
	Time tTime;
	tTime.Hour =23;
	tTime.Minute = 58;
	tTime.Second = 0;
	while (true)
	{
		//if 특정 이벤트가 발생 한다면 ...
		//else 아니라면...
		if (ITime+50< GetTickCount64())
		{
			//루프
			ITime = GetTickCount64();
			//화면을 지워준다.
			system("cls");
			//tTime.Second=tTime.Second + ITime;
			printf("%02d:%02d:%02d\n",tTime.Hour,tTime.Minute,++tTime.Second);

			//초침이 60이 되면 초침은 다시 0으로 만들고 분침 1증가
			if (tTime.Second >= 60)
			{
				tTime.Second = 0;
				++tTime.Minute;
			}
			//분침이 60이 되면 분침은 다시 0으로 만들고 시간 1증가
			if (tTime.Minute >= 60)
			{
				tTime.Minute = 0;
				++tTime.Hour;
			}
			//시침이 24가 되면 모두 0
			if (tTime.Hour >= 24)
			{
				tTime.Hour = 0;
				
			}
		}
	}
	return 0;
}