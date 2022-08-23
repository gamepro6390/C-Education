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

//메시지 출력
#define Output(str) printf("%s\n",str)
#define ERRMSG(FileName) printf("%s에서 파이을 찾을수 없습니다. \n",FIleName)
#define ERRMSG(FileName) printf("%d에서 에러가 발생, 파일을 찾을수 없습니다. \n",__LINE__,FIleName)