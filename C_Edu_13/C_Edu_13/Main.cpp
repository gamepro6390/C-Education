/*
Chapter 13
*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string>


struct Student 
{
	char* Name;
	int Number;
	int Kor;
	int Eng;
	int Math;
};

void Output(Student* _std, int _size);



int main(void)
{
	Student Std[10];

	
	Std[0].Name = (char*)"ȫ�浿";
	//�迭�� ũ�⸦ �� �� �ִ�.
	int Count = sizeof(Std) / sizeof(Std[0]);

	for (int i = 0; i < sizeof(Std)/sizeof(Std[0]); ++i)
	{
		Std[i].Kor = i * 10;
		Std[i].Eng = i * 20;
		Std[i].Math = i * 30;
		Std[i].Number = i * 1;

	}

	/*Student Std;
	Std.Name = (char*)"ȫ�浿";
	Std.Kor = 100;
	Std.Eng = 90;
	Std.Math = 90;
	Std.Number = 1;

	printf("%d\n\n", sizeof(Student));
	printf("�л��̸�: %s\n", Std.Name);
	printf("���� ����: %d\n", Std.Kor);
	printf("���� ����: %d\n", Std.Eng);
	printf("���� ����: %d\n", Std.Math);
	printf("��ȣ: %d\n\n", Std.Number);
	*/


	Output(Std, sizeof(Std)/sizeof(Std[0]));

	return 0;
}

//�Ű������� �迭�� ���� �ɶ����� �迭�� ũ�⸦ �Բ� ���� ���־�� �Ѵ�.
void Output(Student* _std, int _size)
{
	for (int i = 0; i < _size; ++i)
	{
		//printf("�л� �̸�:%s\n", (_std + i)->Name);
		printf("���� ����:%d\n", (_std + i)->Kor);
		printf("���� ����:%d\n", (_std + i)->Eng);
		printf("���� ����:%d\n", (_std + i)->Math);
		printf("�л� ��ȣ:%d\n", (_std + i)->Number);
		printf("\n");
	}
}