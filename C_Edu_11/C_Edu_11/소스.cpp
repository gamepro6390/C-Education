/*
Chapter 11
*/

#include <stdio.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
void print_arr(int* pArr, int _size);


int main(void)
{
	//{
	//	//배열을 사용한 문자 출력
	//	char Buffer[5] = { "한글" };
	//	//char Buffer[] ={"한글"};


	//	//출력
	//	printf("%c%c %c%c\n",
	//		Buffer[0],
	//		Buffer[1],
	//		Buffer[2],
	//		Buffer[3]);
	//}

	//{
	//	//포인터를 사용한 문자 출력
	//	//"한글" =문자열로 초기화 되어있기 때문에 char[5] 만큼의 기리이를 갖고 있다.
	//	//문자열 또한 배열로 인식하기 때문에 다음과 같이 형 변환이 필요.

	//	char* Buffer = (char*)"한글"; 
	//	//출력
	//	printf("%c%c %c%c",
	//		Buffer[0],
	//		Buffer[1],
	//		Buffer[2],
	//		Buffer[3]);
	//}
	//{
	//	//포인터 변수에 문자를 직접 입력 받을수 없음.
	//	char* Buffer = (char*)"한글";
	//	scanf("%s", Buffer);
	//	printf("%s", Buffer);
	//}

	//{
	//	char Buffer[128] = "";

	//	scanf("%s", Buffer);
	//	printf("%s", Buffer);
	//}
	{
		int Array[5] = { 10,20,30,40,50 };

		int *pa = Array;
		int *pb = Array + 2;

		printf("1. 주소: %p\n", Array); //시작 주소
		printf("1. 값: %d\n", *Array); //시작 값
		printf("%d\n", *(Array + 1)); //20
		printf("%p\n", pa+2);  //30의 주소
		printf("%d\n", pa[3]); //40
		printf("%d\n", *pb); //30
		printf("%d\n", pb-pa); //2
		//int Size =sizeof(_pArr)/sizeof(_pArr[0]);

		print_arr(Array,5);


	}



	return 0;
}

//배열을 함수로 전달 할 때에는 반드시배열의 크기를 함께 전달해야 함.
void print_arr(int* pArr, int _size) //void printf_arr(int pArr[], int _size).
{
	for (int i = 0; i < _size; i++)
	{
		printf("%d\n", pArr[i]);
		//printf("%d\n", *(pArr+i));
	}
}