/*
Chapter 07
*/


#include <stdio.h>
//�Լ��� ���漱�� (main���� ���� �ؾ���)
int sum(int x, int y);

int main(void)
{
	int a = 10,b =20;
	int result = sum(a, b);
	printf("result : %d\n", result);
	return 0;

	{
		int x = 10;
		{
			int x = 20;
			printf("ù��°:%d", x);

		}
		printf("�ι�° :%d", x);
		//1����: ������ �ִ� ������ ���� ����� �� ����,
		//2����: 
	}

	//������ ���� �Ⱓ
	{
		//������ ����� �ش� ������ ����Ǵ� �������� ��� ����.
		int ����1 = 10;
		{
			int ����2 = 20;
			����1 = ����2;
		}
	}
}
//�Լ��� ����
int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}