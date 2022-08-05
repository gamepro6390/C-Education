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

	return 0;
}