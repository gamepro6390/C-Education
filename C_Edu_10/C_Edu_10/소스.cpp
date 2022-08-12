/*
Chapter 10
*/

#include <stdio.h>
#include <string>

int main(void)
{
	//배열과 포인터의 관계
	{
		//배열 선언 및 초기화
		int Array[8] = { 0 };
		for (int i = 0; i < 8; ++i)
		{
			Array[i] = i + 1;
		}
		printf("일반 출력\n");
		for (int i = 0; i < 8; ++i)
			printf("%d\n", Array[i]);
		printf("\n");

		printf("포인터를 사용한 출력\n");

		//배열은 인덱스(대괄호)를 뺀 상태로 주소반환연산자 없이 주소를 전달할수 있다. &[]
		int* iter = Array;

		for (int i = 0; i < 8; ++i)

			printf("%d\n", (*(iter + i)));

		printf("\n");

	}
	{
		//문제// 
		printf("포인터를 사용한 출력으로 발생할 수 있는 문제.\n");
		int Array[8] = { 0 };
		int* iter = Array;

		for (int i = 0; i < 100; ++i)

			printf("%d\n", (*(iter + i)));

		printf("\n");

	}

	{
		//로또 번호를 생성하는 프로그램 작성
		int Number[5][6];
		for (int i = 0; i < 5; ++i)
			for (int j = 0; j < 6; ++j)
			{
				srand((i + 1) * (j + 1) * rand());
				Number[i][j] = rand() % 45 + 1;
			}
		for (int i = 0; i < 5; ++i)
		{
			printf("%02d. ", i + 1);
			for (int j = 0; j < 6; ++j)
			{
				printf("%02d  ", Number[i][j]);
			}
			printf("\n");
		}

	}
	//버블 정렬
	/*int Number[5][6];
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			for (int k = j + 1; k < 6; ++k)
			{
				if (Number[i][j] > Number[i][k])
				{
					int Temp = Number[i][j];
					Number[i][j] = Number[i][k];
					Number[i][k] = Temp;
				}
			}
		}
	}*/

	return 0;
}