/*
Chapter 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

int main(void)
{
	{
		//1단계
		//일반 변수 -일반 변수는 데이터를 갖는다.
		int Number = 10;
		//포인터 변수 -포인터 변수는 주소를 갖는다., 일반변수의 주소를 갖는다.
		int* pNumber;
	}
	{
		//2단계
		int Number = 10;
		//주소는 다음과 같이 표현할 수 있다.
		printf_s("%p\n", &Number);
		printf_s("데이터: %d\n", Number);
	}
	{
		//3단계
		int Number = 10;
		int* pNumber = &Number; //16진수로 표현되어 있음.
		//포인터 변수가 데이터를 출력할때에는 항목 앞에 [*]을 붙인다.
		printf_s("\nPointer: %d\n", *pNumber);
		printf_s("\n");
	}
	{
		//4단계
		int Number = 10;
		int* pNumber = &Number;

		printf_s("Number 값: %d\n", Number);
		printf_s("Pointer의 값: %d\n", *pNumber);
		printf_s("Number 주소: %p\n", &Number);
		printf_s("Pointer가 가르키는 값: %p\n", pNumber);
		printf_s("Pointer의 주소 %p\n", &pNumber);
		
	}
	return 0;

}