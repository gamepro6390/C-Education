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
		//������ ���� -������ ������ �ּҸ� ���´�., �Ϲݺ����� �ּҸ� ���´�.
		int* pNumber;
	}
	{
		//2�ܰ�
		int Number = 10;
		//�ּҴ� ������ ���� ǥ���� �� �ִ�.
		printf_s("%p\n", &Number);
		printf_s("������: %d\n", Number);
	}
	{
		//3�ܰ�
		int Number = 10;
		int* pNumber = &Number; //16������ ǥ���Ǿ� ����.
		//������ ������ �����͸� ����Ҷ����� �׸� �տ� [*]�� ���δ�.
		printf_s("\nPointer: %d\n", *pNumber);
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
	return 0;

}