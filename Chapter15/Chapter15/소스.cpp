/*
Chapter 15
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//1차원 배열 및 초기화
	{
		int Array[2] = { 1,2 };
	}
	//2차원 배열 및 초기화
	{
		int Array[2][2] = { {0,1},{2,3} };
	}

	//3차원 배열 및 초기화
	{
		int Array[2][2][2] = 
		{ 
			{
				{0,1},
				{2,3}
			},
			{
				{4,5},
				{6,7}
			}
		};
	}
	//다차원 배열 및 초기화
	{
		int Array[2][3][4][5] = { 0 };
	}
	int y = 0;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 4; ++k)
				for (int z = 0; z < 5; ++z)
				{
					printf("%d\n", y + 1);
					++y;


				}
		}
	}


	// ** 더블 포인터
	{
		int Number = 10;
		int* pNum = &Number;
		//pNum의 주소를 받음.
		int** ppNum = &pNum;

		pNum = nullptr;
		
		free(pNum);
		pNum = nullptr;

		ppNum = nullptr;
		
		if (ppNum != nullptr) 
		{
			printf("%p\n", ppNum);
			printf("%p\n", *ppNum);
			printf("%p\n", **ppNum);
		}
		
	}


	return 0;

}