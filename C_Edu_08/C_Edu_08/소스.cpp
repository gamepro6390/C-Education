/*
Chapter 08
*/

#include <stdio.h>

int main(void)
{
	int Number[5] = { 1,2,3,4,5 };
	
	for (int i = 0; i < 5; ++i)
		printf("Number[%d] : %d\n",i, Number[i]);

	return 0;
}
