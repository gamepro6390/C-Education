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
		//�迭�� ����: 2�� n�� �ʱ�ȭ
		// ex))10�� ���, int Array[10]; �� �ƴ�, int Array[16];>> 2�� 4��
		int Array[5];

		for (int i = 0; i < 5; ++i)
		{
			printf("%d. �Է�:", i + 1);
			scanf_s("%d", &Array[i]);
		}
		////��ü �ʱ�ȭ
		//int Array[5] = { 1,2,3,4,5 };
		////�κ� �ʱ�ȭ - �Է����� ���� ���� 0���� �ڵ� �ʱ�ȭ ��.
		//int Array[5] = { 1,2 };
	}

	{
		int Array[16];
		int Count = sizeof(Array) / sizeof(int);
		printf("Count:%d\n", Count);
		printf("\n");
	}

	{
		//���� ������ �ʰ� �ʱ�ȭ
		int Array[] = { 1,2,3,4,5 };
	}

	{
		char Array[6] = { 'A','p','p','l','e','\0'};
		printf_s("%s", Array);
	}



	//���ڿ� �ʱ�ȭ
	//�Ʒ��� ���� ���ڿ��� �ʱ�ȭ �� ��� �ڵ����� �� ���ڰ� ���Ե�.
	{
		char str1[128]= "cat";
		char str2[128];
		//���ڿ� ����
		strcpy(str1, "tiger");
		strcpy(str2, str1);
		printf("\n\n\n%s,%s\n\n", str1, str2);
	}
	return 0;
}
