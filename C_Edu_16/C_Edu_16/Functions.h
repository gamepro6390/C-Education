#pragma once
#include "Define.h"

int Count;
struct Object
{
	char* Name;
	int Age;
};

Object* CreateObject(bool _b);

Object* CreateObject(bool _b)
{
	Object* Obj = nullptr;
	if (_b)
		Obj = (Object*)malloc(sizeof(Object));
	return Obj;
}
#define PI 3.141592f

//�޽��� ���
#define Output(str) printf("%s\n",str)
#define ERRMSG(FileName) printf("%s���� ������ ã���� �����ϴ�. \n",FIleName)
#define ERRMSG(FileName) printf("%d���� ������ �߻�, ������ ã���� �����ϴ�. \n",__LINE__,FIleName)