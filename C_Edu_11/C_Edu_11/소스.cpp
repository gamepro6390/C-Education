/*
Chapter 11
*/

#include <stdio.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	{
		//�迭�� ����� ���� ���
		char Buffer[5] = { "�ѱ�" };
		//char Buffer[] ={"�ѱ�"};


		//���
		printf("%c%c %c%c\n",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}

	{
		//�����͸� ����� ���� ���
		//"�ѱ�" =���ڿ��� �ʱ�ȭ �Ǿ��ֱ� ������ char[5] ��ŭ�� �⸮�̸� ���� �ִ�.
		//���ڿ� ���� �迭�� �ν��ϱ� ������ ������ ���� �� ��ȯ�� �ʿ�.

		char* Buffer = (char*)"�ѱ�"; 
		//���
		printf("%c%c %c%c",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}
	{
		//������ ������ ���ڸ� ���� �Է� ������ ����.
		char* Buffer = (char*)"�ѱ�";
		scanf("%s", Buffer);
		printf("%s", Buffer);
	}

	{
		char Buffer[128] = "";

		scanf("%s", Buffer);
		printf("%s", Buffer);
	}

	return 0;
}