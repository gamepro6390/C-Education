#pragma once
#include "Headers.h"


class Parent
{
protected:
	string Name;
	Vector3 Position;

	// ** �߻� Ŭ���� Ư¡
	// ** �����ʹ� ������ �� ������ , �Լ��� ���� �����Լ��θ� ������ �� �ִ�.
	
	// ** ���� �����Լ��� Ư¡
	// ** ���� �����Լ��� 1���� ���������, �� Ŭ������ �߻� Ŭ�����θ� ��� �����ϴ�.
	
	// ** ����
	// ** ���������Լ��� 1���� �����, �Ϲ��Լ� ���� �� ��� �Ұ�.
	
public:
	//���� ���� �Լ�
	virtual void Start()PURE; //�Ϲ� �Լ����� pure�� ��� �Ҽ� ����.
	virtual void Start(int number)PURE;





};