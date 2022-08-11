/*
Chapter 09
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string>

int main(void)
{
	{
		//1�ܰ�

		//�Ϲ� ���� -�Ϲ� ������ �����͸� ���´�.
		int Number = 10;

		//������ ���� -������ ������ �ּҸ� ���´�. �Ϲݺ����� �ּҸ� ���´�.
		int* pNumber;
	}
	{
		//2�ܰ�

		int Number = 10;

		//�ּҴ� ������ ���� ǥ���� �� �ִ�.
		printf_s("%p\n", &Number);
		printf_s("������: %d\n\n", Number);
	}
	{
		//3�ܰ�
		int Number = 10;

		//�����ͺ����� �Ϲݺ����� �ּҸ� ���´�.
		int* pNumber = &Number; //16������ ǥ���Ǿ� ����.

		//������ ������ �����͸� ����Ҷ����� �׸� �տ� [*]�� ���δ�.
		printf_s("Pointer: %d\n", *pNumber);
		printf_s("\n");
	}
	{
		//4�ܰ�
		int Number = 10;
		int* pNumber = &Number;

		printf_s("Number ��: %d\n", Number);
		printf_s("Pointer�� ��: %d\n", *pNumber);
		printf_s("Number �ּ�: %p\n", &Number);
		printf_s("Pointer�� ����Ű�� ��: %p\n", pNumber);
		printf_s("Pointer�� �ּ� %p\n", &pNumber);

	}
	{
		//������ ������ �Ϲݺ����� �����͸� �����Ѵ�.
		//����
		int Number = 10;
		int* pNumber = &Number;
		printf("\n");
		printf_s("Number ��: %d\n", Number);
		printf_s("Pointer�� ��: %d\n", *pNumber);

		Number = 100;
		printf_s("Number ��: %d\n", Number);
		printf_s("Pointer�� ��: %d\n", *pNumber);

		*pNumber = 1000;
		printf_s("Number ��: %d\n", Number);
		printf_s("Pointer�� ��: %d\n\n", *pNumber);
	}

	//swap
	{
		int a = 10;
		int b = 20;

		printf("a: %d\n", a);
		printf("b: %d\n", b);
		
		if (true)
		{
			int temp = a;
			a = b;
			b = temp;
			printf("a: %d\n", a);
			printf("b: %d\n", b);
			
		}
	}
	{
		int a = 10;
		int b = 20;

		a ^= b;
		b ^= a;
		a ^= b;
		printf("\n\n");
		printf("a: %d\n", a);
		printf("b: %d\n", b);
	}
	
	{
		//�������� ũ��� ����ȯ�濡 ���� �� ũ�Ⱑ �޶�����.
		int Number = 10;
		long long INum = 10;
		//������ Ÿ�� �������.
		long long* Pointer = &INum;

		
		printf("%d\n", sizeof(Number));

		printf("%d\n", sizeof(INum));
		// �������� ũ��
		// 64bit(x64) ���� 8byte, 32bit(x86) ���� 4byte (�ü���� ȯ�濡 ����)
		printf("%d\n", sizeof(Pointer));
	}

	

	return 0;

}