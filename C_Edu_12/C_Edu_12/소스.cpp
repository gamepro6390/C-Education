/*
Chapter 12
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string>

int main(void)
{
	/* ���ڿ�
	printf("apple�� ����� ���� �ּ� ��:%p\n", "apple");
	printf("�ι�° ������ �ּ� ��:%p\n", "apple" + 1);
	printf("ù��° ���� :%c\n", *"apple");
	printf("�ι�° ���� :%c\n", *("apple" + 1));
	printf("�迭�� ǥ���� ����° ����:%c\n", "apple"[2]);
	*/
	int* pi;
	double* pd;


	//malloc�� void*�� �⺻�̱� ������ ���� �� ��ȯ�� ������� .
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("#�޸𸮰� �����մϴ�\n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));

	*pi = 10;
	*pd = 3.4;

	printf("���������� ��� %d\n", *pi);
	printf("�Ǽ������� ��� %.1lf\n", *pd);

	free(pi);
	free(pd);

	{
		printf("void �������� ������: %d\n", sizeof(void*));
	}

	{
		const int MAX = 8;
		//Array �ȿ� hip�ּҰ� ��� ���� , �ڱ� �ּҴ� stack�ȿ� ����
		int* Array = (int*)malloc(sizeof(int) * MAX);
		for (int i = 0; i < MAX; ++i)
			Array[i] = (10 * i + 10);
		for (int i = 0; i < MAX; ++i)
			printf("%d\n", Array[i]);
	}
	return 0;
}