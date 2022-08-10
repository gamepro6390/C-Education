/*
Chapter 08
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>
int main(void)
{
	int Number[5] = { 1,2,3,4,5 };
	
	for (int i = 0; i < 5; ++i)
		printf("Number[%d] : %d\n",i, Number[i]);
	{
		//배열의 길이: 2의 n승 초기화
		// ex))10개 사용, int Array[10]; 이 아닌, int Array[16];>> 2의 4승
		int Array[5];

		for (int i = 0; i < 5; ++i)
		{
			printf("%d. 입력:", i + 1);
			scanf_s("%d", &Array[i]);
		}
		////전체 초기화
		//int Array[5] = { 1,2,3,4,5 };
		////부분 초기화 - 입력하지 않은 값은 0으로 자동 초기화 됨.
		//int Array[5] = { 1,2 };
	}

	{
		int Array[16];
		int Count = sizeof(Array) / sizeof(int);
		printf("Count:%d\n", Count);
		printf("\n");
	}

	{
		//길이 정하지 않고 초기화
		int Array[] = { 1,2,3,4,5 };
	}

	{
		char Array[6] = { 'A','p','p','l','e','\0'};
		printf_s("%s", Array);
	}



	//문자열 초기화
	//아래와 같이 문자열을 초기화 할 경우 자동으로 널 문자가 포함됨.
	{
		char str1[128]= "cat";
		char str2[128];
		//문자열 복사
		strcpy(str1, "tiger");
		strcpy(str2, str1);
		printf("\n\n\n%s,%s\n\n", str1, str2);
	}
	return 0;
}
