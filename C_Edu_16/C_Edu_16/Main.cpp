/*
Chapter 16
*/

#include "Define.h"
#include "Functions.h"
#include <stdio.h>
#include <malloc.h>

//���
#define PI 3.141592f

//�޽��� ���
#define Output(str) printf("%s\n",str)
#define ERRMSG(FileName) printf("%s���� ������ ã���� �����ϴ�. \n",FIleName)
#define ERRMSG(FileName) printf("%d���� ������ �߻�, ������ ã���� �����ϴ�. \n",__LINE__,FIleName)


//����
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
		ERRMSG("���");
	/*printf("%f", PI);*/
	Output(PI);
	
	printf("�μ��� ��:%d", SUM(1, 2));
	printf("�μ��� ��:%d", MUL(1, 2));









	return 0;
}


Object* CreateObject(bool _b)
{
	Object* Obj = nullptr;
	if (_b)
		Obj = (Object*)malloc(sizeof(Object));
	return Obj;
}
