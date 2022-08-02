/*
 Chapter 03
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(int));
	printf("%d\n\n", sizeof(__int64));
	//unsigned >>정수형만 표시
	printf("%d\n", sizeof(unsigned char));
	printf("%d\n", sizeof(unsigned int));
	printf("%d\n\n", sizeof(unsigned __int64));


	//변수 선언 및 초기화
	char c = 127;
	short sh = 32767;
	int i = 2147483647;
	long n = 2147483647;
	printf("char형 변수 출력 : %d\n", c);
	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", i);
	printf("long형 변수 출력 : %d\n\n\n", n);
	

	c += 1;
	sh += 1;
	i += 1;
	n += 1;
	printf("char형 변수 출력 : %d\n", c);
	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", i);
	printf("long형 변수 출력 : %d\n\n\n\n", n);

	unsigned char uc = 127;
	unsigned short ush = 32767;
	unsigned int ui = 2147483647;
	unsigned long un = 2147483647;

	uc += 1;
	ush += 1;
	ui += 1;
	un += 1;
	printf("unsigned char형 변수 출력 : %d\n", uc);
	printf("unsigned short형 변수 출력 : %d\n", ush);
	printf("unsigned int형 변수 출력 : %u\n", ui);
	printf("unsigned long형 변수 출력 : %u\n", un);

	//실수형 데이터 타입 확인.
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));
	printf("%d\n\n", sizeof(long double));
	return 0;
}