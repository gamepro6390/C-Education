/*
Chapter 16
*/

#include "Define.h"
#include "Functions.h"
#include <stdio.h>
#include <malloc.h>

//상수
#define PI 3.141592f

//메시지 출력
#define Output(str) printf("%s\n",str)
#define ERRMSG(FileName) printf("%s에서 파이을 찾을수 없습니다. \n",FIleName)
#define ERRMSG(FileName) printf("%d에서 에러가 발생, 파일을 찾을수 없습니다. \n",__LINE__,FIleName)


//연산
#define SUM(a,b) (a+b)
#define MUL(a,b) (a*b)

struct Object
{
	char* Name;
	int Age;
};

Object* CreateObject(bool _b);

int main(void)
{
	/*
	Object* o CreateObject(true);

	if (!o)
		ERRMSG("경로");
	/*printf("%f", PI);*/
	Output(PI);
	
	printf("두수의 합:%d", SUM(1, 2));
	printf("두수의 곱:%d", MUL(1, 2));









	return 0;
}


Object* CreateObject(bool _b)
{
	Object* Obj = nullptr;
	if (_b)
		Obj = (Object*)malloc(sizeof(Object));
	return Obj;
}
