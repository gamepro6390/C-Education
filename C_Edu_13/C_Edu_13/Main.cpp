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

	
	Std[0].Name = (char*)"홍길동";
	//배열의 크기를 알 수 있다.
	int Count = sizeof(Std) / sizeof(Std[0]);

	for (int i = 0; i < sizeof(Std)/sizeof(Std[0]); ++i)
	{
		Std[i].Kor = i * 10;
		Std[i].Eng = i * 20;
		Std[i].Math = i * 30;
		Std[i].Number = i * 1;

	}

	/*Student Std;
	Std.Name = (char*)"홍길동";
	Std.Kor = 100;
	Std.Eng = 90;
	Std.Math = 90;
	Std.Number = 1;

	printf("%d\n\n", sizeof(Student));
	printf("학생이름: %s\n", Std.Name);
	printf("국어 점수: %d\n", Std.Kor);
	printf("영어 점수: %d\n", Std.Eng);
	printf("수학 점수: %d\n", Std.Math);
	printf("번호: %d\n\n", Std.Number);
	*/


	Output(Std, sizeof(Std)/sizeof(Std[0]));

	return 0;
}

//매개변수로 배열이 전달 될때에는 배열의 크기를 함께 전달 해주어야 한다.
void Output(Student* _std, int _size)
{
	for (int i = 0; i < _size; ++i)
	{
		//printf("학생 이름:%s\n", (_std + i)->Name);
		printf("국어 점수:%d\n", (_std + i)->Kor);
		printf("영어 점수:%d\n", (_std + i)->Eng);
		printf("수학 점수:%d\n", (_std + i)->Math);
		printf("학생 번호:%d\n", (_std + i)->Number);
		printf("\n");
	}
}