/*
Chapter 06
*/

#include <stdio.h>

int main(void)
{
	//반복문
	//조건이 무한루프 조건일때
	while (true)
	{
		//탈출할 수 있는 요소가 필요.
		if (true)
			break;
	}
	int i = 0; //초기문
	while (i<10) //조건문
	{
		printf("반복문 %d \n", i + 1);
		++i; //증감문
	}
	//초기문,조건문,증감문 이 세가지 요소가 필요
	printf("\n\n");
	for (i = 0; i < 10; ++i)
	{
		printf("반복문 %d \n", i + 1);
	}

	do
	{
		//최초에 한번은 실행됨 
		printf("최초에 한번은 실행.");
		break;
		//그후에 조건을 확인하고 조건이 true인 경우 반복
	} while (false);
	printf("\n");

	//홀수 * 짝수 구구단
	/*int x, y;
	printf_s("시작단/끝단 입력 :");
	scanf_s("%d %d",x,y);*/

	for (int i = 2; i < 10; ++i)
	{
		if ((i % 2 == 0))
			continue;
		for (int j = 1; j < 10; ++j)
		{
			if ((j % 2 == 1))
				continue;
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}

	int h, w;
	for (h = 0; h < 3; h++)
	{
		for (w = 0; w< 5; w++)
			printf("*");
		printf("\n");
	}
	/*int a, b;
	for (a = 0; a < 4; a++)
	{
		for (b = 0; b<4; b++)
		{

			if (a != b)
				continue;
			else if (a + b != 4)
				continue;
			printf("*");
		}
		printf("\n");
	}*/


	return 0;
}