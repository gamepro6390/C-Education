/*
Chapter 11
*/

#include <stdio.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
void print_arr(int* pArr, int _size);


int main(void)
{
	//{
	//	//�迭�� ����� ���� ���
	//	char Buffer[5] = { "�ѱ�" };
	//	//char Buffer[] ={"�ѱ�"};


	//	//���
	//	printf("%c%c %c%c\n",
	//		Buffer[0],
	//		Buffer[1],
	//		Buffer[2],
	//		Buffer[3]);
	//}

	//{
	//	//�����͸� ����� ���� ���
	//	//"�ѱ�" =���ڿ��� �ʱ�ȭ �Ǿ��ֱ� ������ char[5] ��ŭ�� �⸮�̸� ���� �ִ�.
	//	//���ڿ� ���� �迭�� �ν��ϱ� ������ ������ ���� �� ��ȯ�� �ʿ�.

	//	char* Buffer = (char*)"�ѱ�"; 
	//	//���
	//	printf("%c%c %c%c",
	//		Buffer[0],
	//		Buffer[1],
	//		Buffer[2],
	//		Buffer[3]);
	//}
	//{
	//	//������ ������ ���ڸ� ���� �Է� ������ ����.
	//	char* Buffer = (char*)"�ѱ�";
	//	scanf("%s", Buffer);
	//	printf("%s", Buffer);
	//}

	//{
	//	char Buffer[128] = "";

	//	scanf("%s", Buffer);
	//	printf("%s", Buffer);
	//}
	{
		int Array[5] = { 10,20,30,40,50 };

		int *pa = Array;
		int *pb = Array + 2;

		printf("1. �ּ�: %p\n", Array); //���� �ּ�
		printf("1. ��: %d\n", *Array); //���� ��
		printf("%d\n", *(Array + 1)); //20
		printf("%p\n", pa+2);  //30�� �ּ�
		printf("%d\n", pa[3]); //40
		printf("%d\n", *pb); //30
		printf("%d\n", pb-pa); //2
		//int Size =sizeof(_pArr)/sizeof(_pArr[0]);

		print_arr(Array,5);


	}



	return 0;
}

//�迭�� �Լ��� ���� �� ������ �ݵ�ù迭�� ũ�⸦ �Բ� �����ؾ� ��.
void print_arr(int* pArr, int _size) //void printf_arr(int pArr[], int _size).
{
	for (int i = 0; i < _size; i++)
	{
		printf("%d\n", pArr[i]);
		//printf("%d\n", *(pArr+i));
	}
}