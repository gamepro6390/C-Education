/*
Chapter 10
*/

#include <stdio.h>
#include <string>

int main(void)
{
	//�迭�� �������� ����
	{
		int Array[8] = { 0 };
		for (int i = 0; i < 8; ++i)
		{
			Array[i] = i + 1;
		}
		printf("�Ϲ� ���\n");
		for (int i = 0; i < 8; ++i)
			printf("%d\n", Array[i]);
		printf("\n");

		printf("�����͸� ����� ���\n");
		
		//�迭�� �ε���(���ȣ)�� �� ���·� �ּҹ�ȯ������ ���� �ּҸ� �����Ҽ� �ִ�.
		int* iter = Array;

		for (int i = 0; i < 8; ++i)
		
			printf("%d\n", (*(iter+i)) );
		
		printf("\n");
	
	}
	{
		//����// 
		printf("�����͸� ����� ������� �߻��� �� �ִ� ����.\n");
		int Array[8] = { 0 };
		int* iter = Array;

		for (int i = 0; i < 100; ++i)

			printf("%d\n", (*(iter + i)));

		printf("\n");

	}

	return 0;
}