/*
	Vector
*/

#include <stdio.h>
#include <malloc.h>

int *Front;
int *Back;

int size = 0;
int* Vector = nullptr ;

void push_back(int _value);


int main(void)
{	
	push_back(10);
	push_back(20);
	printf("%d\n", *Front);
	printf("%d\n", *Back);
	printf("%d", Vector[0]);

	/*
	for (int i = 0; i < 10; ++i)
	{
		Vector[i] = i;
	}

	Front = &Vector[0];
	Back = &Vector[9];


	printf("%d\n", *Front);
	printf("%d\n", *Back);
	*/


	return 0;

}

void push_back(int _value)
{	
	int* Temp = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i< size; ++i)
		Temp[i] = Vector[i];

	free(Vector);
	
	++size;

	Vector = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i< size-1; ++ i)
		Temp[i] = Vector[i];

	free(Temp);


	Vector[size - 1] = _value;
	Front = &Vector[0];
	Back =&Vector[size-1];
}//동적 할당된 데이터는 반드시 지워야함.