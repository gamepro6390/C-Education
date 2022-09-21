#include <stdio.h>
#include <malloc.h>

int* Fornt;
int* Back;

int size = 0;
int capacity = 0;

void push_back(int _value);
void erase(int _Where);
void Output();


int main(void)
{
	push_back(10);
	push_back(20);
	push_back(30);
	push_back(40);
	push_back(50);
	push_back(60);
	push_back(70);

	printf("%d\n", *Fornt);
	printf("%d\n", *Back);
	printf("%d\n", size);
	erase(3);
	erase(3);
	erase(3);
	
	Output();
	return 0;
}

void push_back(int _value)
{
	if (capacity == size)
	{
		int result = (capacity >> 1);//쉬프트 연산
		capacity += (result<1)? 1 : result; 

		printf("size = %d\n", size);
		printf("capacity = %d \n", capacity);
		int* Temp = (int*)malloc(sizeof(int) * size);

		for (int i = 0; i < size; ++i)
			Temp[i] = Fornt[i];
		
		++size;
		free(Fornt);
		Fornt = (int*)malloc(sizeof(int) * capacity);

		for (int i = 0; i < size - 1; ++i)
			Fornt[i] = Temp[i];
		free(Temp);
	}
	else
	{
		Fornt[size - 1] = _value;
		Back = &Fornt[size - 1];
	}
}

void erase(int _Where)
{
	--size;
	for (int i = _Where-1; i < size; ++i)
	{
		Fornt[i] = Fornt[i + 1];
	}
}

void Output()
{
	printf("[전체 출력]\n");
	int* List = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", Fornt[i]);
		//printf("주소 : %p\n", &Fornt[i]);
	}
}