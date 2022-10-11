#pragma once
#include "Headers.h"

class Object;
class MainUpdate
{
private: 
	// ** ���� ����
	Object* 
public:
	MainUpdate();
	// ** �ʱ�ȭ
	void Initialize();
	
	// ** ����
	void Progress();

	// ** ����
	void Render();

	// ** ����
	void Release();
};
