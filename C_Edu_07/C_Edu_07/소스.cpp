/*
Chapter 07
*/


#include <stdio.h>
//함수의 전방선언 (main전에 선언 해야함)
int sum(int x, int y);
//함수 전방성언시 매개변수의 이름은 생략해도 된다.
void Output(int, int);
int Compare(int, int);



//함수가 재귀적으로 호출되기 때문에 스택 오버플로 발생
//매개 변수를 사용하여 재귀함수의 호출횟수를 카운트하고 함수를 종료시키는 방법
void Recursive(int _n)
{
	if (_n == 0)
		return;
	else
		printf("%d  재귀호출\n", _n);
		Recursive(_n -1);
}


int main(void)
{
	//int a = 10,b =20;
	//int result = sum(a, b);
	//printf("result : %d\n", result);
	//return 0;

	//{
	//	int x = 10;
	//	{
	//		int x = 20;
	//		printf("첫번째:%d", x);

	//	}
	//	printf("두번째 :%d", x);
	//	//1문제: 상위에 있는 변수의 값을 사용할 수 없다,
	//	//2문제: 변수의 이름이 같기 때문에 변수 사용에 혼란이 생길수 있다. 
	//}

	////변수의 존재 기간
	//{
	//	//변수는 선언된 해당 영역이 종료되는 지점까지 사용 가능.
	//	int 변수1 = 10;
	//	{
	//		int 변수2 = 20;
	//		변수1 = 변수2;
	//	}
	//}
	Output(10, 20);
	int result =Compare(10, 20);
	printf("\n\n%d\n", result);
	Recursive(5);

}
//함수의 정의
int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}

void Output(int _x,int _y)
{
	printf("%d+%d=%d", _x, _y, _x + _y);
}
int Compare(int _x, int _y)
{
	if (_x > _y)
		return _x;
	else if (_x < _y)
		return _y;
	else 0;
}                            

