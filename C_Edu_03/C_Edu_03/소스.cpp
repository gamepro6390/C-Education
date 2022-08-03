/*
 Chapter 03
*/

#include <stdlib.h>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n\n", sizeof(__int64));
	//unsigned >>�������� ǥ��
	printf("%d\n", sizeof(unsigned char));
	printf("%d\n", sizeof(unsigned int));
	printf("%d\n\n", sizeof(unsigned __int64));


	//���� ���� �� �ʱ�ȭ
	char c = 127;
	short sh = 32767;
	int i = 2147483647;
	long n = 2147483647;
	printf("char�� ���� ��� : %d\n", c);
	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", i);
	printf("long�� ���� ��� : %d\n\n\n", n);
	

	c += 1;
	sh += 1;
	i += 1;
	n += 1;
	printf("char�� ���� ��� : %d\n", c);
	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", i);
	printf("long�� ���� ��� : %d\n\n\n\n", n);

	unsigned char uc = 127;
	unsigned short ush = 32767;
	unsigned int ui = 2147483647;
	unsigned long un = 2147483647;

	uc += 1;
	ush += 1;
	ui += 1;
	un += 1;
	printf("unsigned char�� ���� ��� : %d\n", uc);
	printf("unsigned short�� ���� ��� : %d\n", ush);
	printf("unsigned int�� ���� ��� : %u\n", ui);
	printf("unsigned long�� ���� ��� : %u\n", un);

	//�Ǽ��� ������ Ÿ�� Ȯ��.
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n\n", sizeof(long double));
	printf("\n");

	//�Է�
	int Number;
	printf_s("�Է�: "); // scanf�� ��� ����� ����.
	scanf_s("%d", &Number); //_s ���� ����
	printf_s("�Է� ���� ��: %d\n\n", Number);

	int age;
	double height;
	printf("���̿� Ű�� �Է��ϼ��� :");
	scanf_s("%d%lf", &age, &height);
	printf(" ���̴� %d�� . Ű�� %.1lfcm�Դϴ�.\n", age, height);

	return 0;
}