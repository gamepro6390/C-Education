/*
Chapter 12
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string>

int main(void)
{
	/* 문자열
	printf("apple이 저장된 시작 주소 값:%p\n", "apple");
	printf("두번째 문자의 주소 값:%p\n", "apple" + 1);
	printf("첫번째 문자 :%c\n", *"apple");
	printf("두번째 문자 :%c\n", *("apple" + 1));
	printf("배열로 표현한 세번째 문자:%c\n", "apple"[2]);
	*/
	int* pi;
	double* pd;


	//malloc은 void*가 기본이기 때문에 강제 형 변환을 해줘야함 .
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("#메모리가 부족합니다\n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 %d\n", *pi);
	printf("실수형으로 사용 %.1lf\n", *pd);

	free(pi);
	free(pd);

	{
		printf("void 포인터의 사이즈: %d\n", sizeof(void*));
	}

	{
		const int MAX = 8;
		//Array 안에 hip주소가 들어 있음 , 자기 주소는 stack안에 존재
		int* Array = (int*)malloc(sizeof(int) * MAX);
		for (int i = 0; i < MAX; ++i)
			Array[i] = (10 * i + 10);
		for (int i = 0; i < MAX; ++i)
			printf("%d\n", Array[i]);
	}
	return 0;
}