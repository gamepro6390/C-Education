/*
Chapter 15
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//1���� �迭 �� �ʱ�ȭ
	{
		int Array[2] = { 1,2 };
	}
	//2���� �迭 �� �ʱ�ȭ
	{
		int Array[2][2] = { {0,1},{2,3} };
	}

	//3���� �迭 �� �ʱ�ȭ
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
	//������ �迭 �� �ʱ�ȭ
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


	// ** ���� ������
	{
		int Number = 10;
		int* pNum = &Number;
		//pNum�� �ּҸ� ����.
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