/*
Chapter 05
*/

#include <stdio.h>
#include <string>

using namespace std;

int main(void)
{
	int Number;
	char* Name;
	printf("입력 : ");
	scanf_s("%d", &Number);
	if (Number == 1)
	{
		Name = (char*)"hong";
	}
	else if (Number == 2)
	{
		Name = (char*)"Lim";
	}
	else {
		Name = (char*)"Lee";
	}
	printf("결과값 : %s\n", Name);



}