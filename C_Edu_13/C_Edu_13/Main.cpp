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

void Output(Student* _std);



int main(void)
{
	Student Std;
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

	Output(&Std);


	return 0;
}


void Output(Student* _std)
{
	printf("�л� �̸�:%s\n", _std->Name);
	printf("���� ����:%d\n", _std->Kor);
	printf("���� ����:%d\n", _std->Eng);
	printf("���� ����:%d\n", _std->Math);
	printf("��ȣ:%d\n", _std->Number);
}