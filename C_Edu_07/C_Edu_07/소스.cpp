/*
Chapter 07
*/


#include <stdio.h>
//함수의 전방선언 (main전에 선언 해야함)
int sum(int x, int y);

int main(void)
{
	int a = 10,b =20;
	int result = sum(a, b);
	printf("result : %d\n", result);
	return 0;

	{
		int x = 10;
		{
			int x = 20;
			printf("첫번째:%d", x);

		}
		printf("두번째 :%d", x);
		//1문제: 상위에 있는 변수의 값을 사용할 수 없다,
		//2문제: 
	}

	//변수의 존재 기간
	{
		//변수는 선언된 해당 영역이 종료되는 지점까지 사용 가능.
		int 변수1 = 10;
		{
			int 변수2 = 20;
			변수1 = 변수2;
		}
	}
}
//함수의 정의
int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}