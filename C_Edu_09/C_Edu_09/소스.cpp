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

		//포인터 변수 -포인터 변수는 주소를 갖는다. 일반변수의 주소를 갖는다.
		int* pNumber;
	}
	{
		//2단계

		int Number = 10;

		//주소는 다음과 같이 표현할 수 있다.
		printf_s("%p\n", &Number);
		printf_s("데이터: %d\n\n", Number);
	}
	{
		//3단계
		int Number = 10;

		//포인터변수는 일반변수의 주소를 갖는다.
		int* pNumber = &Number; //16진수로 표현되어 있음.

		//포인터 변수가 데이터를 출력할때에는 항목 앞에 [*]을 붙인다.
		printf_s("Pointer: %d\n", *pNumber);
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
	{
		//포인터 변수와 일반변수는 데이터를 공유한다.
		//검증
		int Number = 10;
		int* pNumber = &Number;
		printf("\n");
		printf_s("Number 값: %d\n", Number);
		printf_s("Pointer의 값: %d\n", *pNumber);

		Number = 100;
		printf_s("Number 값: %d\n", Number);
		printf_s("Pointer의 값: %d\n", *pNumber);

		*pNumber = 1000;
		printf_s("Number 값: %d\n", Number);
		printf_s("Pointer의 값: %d\n\n", *pNumber);
	}

	//swap
	{
		int a = 10;
		int b = 20;

		printf("a: %d\n", a);
		printf("b: %d\n", b);
		
		if (true)
		{
			int temp = a;
			a = b;
			b = temp;
			printf("a: %d\n", a);
			printf("b: %d\n", b);
			
		}
	}
	{
		int a = 10;
		int b = 20;

		a ^= b;
		b ^= a;
		a ^= b;
		printf("\n\n");
		printf("a: %d\n", a);
		printf("b: %d\n", b);
	}
	
	{
		//포인터의 크기는 개발환경에 따라 그 크기가 달라진다.
		int Number = 10;
		long long INum = 10;
		//데이터 타입 맞춰야함.
		long long* Pointer = &INum;

		
		printf("%d\n", sizeof(Number));

		printf("%d\n", sizeof(INum));
		// 포인터의 크기
		// 64bit(x64) 기준 8byte, 32bit(x86) 기준 4byte (운영체제의 환경에 따름)
		printf("%d\n", sizeof(Pointer));
	}

	

	return 0;

}