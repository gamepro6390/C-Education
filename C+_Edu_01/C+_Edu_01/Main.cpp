/*
Chapter 01
*/
//�⺻ �����
#include <stdio.h>

//system �Լ�
#include <stdlib.h>

//input �� ������â ���� �Ҷ� ���� ���̺귯��
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
//�ڵ��� �����ͷ� ���� ����.
*/
struct Time
{
	char Hour;
	char Minute;
	char Second;
};

int main(void)
{
	//����
	//HOBJ
	//*PHOBJ
	
	
	//�ð� �Լ�
	// DWORD Time =GetTickCount(); ��ǻ�Ͱ� ���� �����ζ� 49.7��

	//GetTickcount64()=1/1000�� =0.001�� ����
	ULONGLONG ITime = GetTickCount64();
	int Count = 0;
	Time tTime;
	tTime.Hour =23;
	tTime.Minute = 58;
	tTime.Second = 0;
	while (true)
	{
		//if Ư�� �̺�Ʈ�� �߻� �Ѵٸ� ...
		//else �ƴ϶��...
		if (ITime+50< GetTickCount64())
		{
			//����
			ITime = GetTickCount64();
			//ȭ���� �����ش�.
			system("cls");
			//tTime.Second=tTime.Second + ITime;
			printf("%02d:%02d:%02d\n",tTime.Hour,tTime.Minute,++tTime.Second);

			//��ħ�� 60�� �Ǹ� ��ħ�� �ٽ� 0���� ����� ��ħ 1����
			if (tTime.Second >= 60)
			{
				tTime.Second = 0;
				++tTime.Minute;
			}
			//��ħ�� 60�� �Ǹ� ��ħ�� �ٽ� 0���� ����� �ð� 1����
			if (tTime.Minute >= 60)
			{
				tTime.Minute = 0;
				++tTime.Hour;
			}
			//��ħ�� 24�� �Ǹ� ��� 0
			if (tTime.Hour >= 24)
			{
				tTime.Hour = 0;
				
			}
		}
	}
	return 0;
}