/*
Chapter 06
*/

#include <stdio.h>

int main(void)
{
	//�ݺ���
	//������ ���ѷ��� �����϶�
	while (true)
	{
		//Ż���� �� �ִ� ��Ұ� �ʿ�.
		if (true)
			break;
	}
	int i = 0; //�ʱ⹮
	while (i<10) //���ǹ�
	{
		printf("�ݺ��� %d \n", i + 1);
		++i; //������
	}
	//�ʱ⹮,���ǹ�,������ �� ������ ��Ұ� �ʿ�
	printf("\n\n");
	for (i = 0; i < 10; ++i)
	{
		printf("�ݺ��� %d \n", i + 1);
	}

	do
	{
		//���ʿ� �ѹ��� ����� 
		printf("���ʿ� �ѹ��� ����.");
		break;
		//���Ŀ� ������ Ȯ���ϰ� ������ true�� ��� �ݺ�
	} while (false);
	printf("\n");

	//Ȧ�� * ¦�� ������
	/*int x, y;
	printf_s("���۴�/���� �Է� :");
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