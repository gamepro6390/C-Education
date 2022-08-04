/*
Chapter 04
*/

#include <stdio.h>

int main(void)
{
	//산술 연산자
	//+, -, *, /, %

	//대입 연산자
	//=

	//단항 연산자(증감 연산자)
	//++, --

	//3항 연산자
	//(조건) ? true : false

	//관계 연산자
	//>, <, >=, <=

	//논리 연산자
	//==, !=, &, |, &&, ||

	//비트 연산자 
	// & [AND]
	// | [OR]
	// ^ [XOR]
	//cpu (-)연산을 할 수없다.
	//그러므로 아래와 같이 표현할수 있다
	//10+(-9)
	{int i = 1;
	printf("shift <<1 연산\n");
	printf("%d\n", (i << 1));
	int b = 10;
	printf("shift >>1 연산 \n");
	printf("%d\n", (b >> 1));
	}
	// length/2 == length*0.5f == length>>1(가장빠름,but float형은 사용불가)


	//형변환
	{
		int i = 10000000;
		short s = 32767;
		float f = 3.141592f;
		//f를 붙이지않으면 double로 인식
		char c = 'A';

		{
			i = (int)f;
			printf("%d\n\n", i);
		}
	}
	//복합대입 연산자
	//+=, -=, *=, /=, %=
	
	
	return 0;
}