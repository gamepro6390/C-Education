/*
Chapter 17
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main()
{
	{
		//���� �ʱ�ȭ ���
		char Array[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n%s\n\n\n", Array);

	}
	{
		//���ڿ� �ʱ�ȭ ���
		char Array[10] = { "ABCDEFGHI" };
		
		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n%s\n\n\n", Array);

		//���ڿ� �ʱ�ȭ �ÿ��� ������ ���ڿ��� ������ ������ NULL���� ���� �Ѵ�.
		//NULL ���� ������ 1byte ��ŭ �ʿ��ϹǷ� �����ʱ�ȭ ������� ���ڰ� 1�� �� �ʿ�.
	}

	{
		//�� ����
		NULL;
		'\0';
	}
	
	//{
	//	//���ڿ� �迭 �ʱ�ȭ
	//	char Buffer[] = "ABCDEFGHIJ";  //���ڿ� ��ȯ, ����� ������ �ȵ�. ���� �ʱ�ȭ �ϸ� ��.

	//	//Buffer�� �ּҸ� str1���� ����
	//	char* str1 = Buffer;
	//	char* str2 = (char*)"ABCDEFGHIJ";
	//	printf("%p\n", str2);
	//	char* str3 = str2;
	//	printf("%p\n", str3);
	//	

	//	int* Pointer = (int*)malloc(sizeof(int));
	//	

	//}

	{
		//���� �����ϱ�
		FILE* pf = fopen("../Data/Data.txt", "w");

		if (pf == NULL)
			printf("������ ���� ���߽��ϴ�.");
		else
		{
			int Age = 32;
			char Name[128] = "ȫ�浿";


			int n = fscanf(pf, "%s", &Age);
			fgets(Name, sizeof(Name), pf);
			fprintf(pf,"%s:%d",Name,Age);
			fclose(pf);
		}
		
	}
	{
		//���� �ҷ�����
		FILE* pf = fopen("../Data/Data.txt", "r");
		int Age[20];
		char Name[128];

		int Count = 0;
		while (fgetc(pf) != NULL)
		{
			fgets(Name, sizeof(Name), pf);
			printf("%s\n", Name);
			fflush(pf);
		}

	}


	return 0;
}