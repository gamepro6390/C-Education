#pragma once
#include "Headers.h"
#include "Parent.h"

class child : public Parent
{
public:
	// ** �������̵� : ��Ӱ��迡���� ��� ����
	// ** �Ȱ��� �̸��� �Լ��� ����� �� � �Լ��� ȣ���ؾ����� ��ȣ�Ѱ�� 
	// ** �Լ��� ȣ���ϴ� ���.


	
	virtual void Start()override //virtual ������
	{
		// ** �������̵� �Լ�
	}
	virtual void Start(int number)override
	{

	}


	// ** �����ε� : ��Ӱ������ ���� ��� ����
	// ** ���� Ŭ���� ���ο��� ���Ǹ�, �Ȱ��� �̸��� �Լ��� ȣ���ϴ� ���.
	// ** �Ű������� ������ ���¿� ���� ȣ��Ǵ� �Լ��� �޶�����.
	void Update(int)
	{
		// ** �����ε� �Լ�
	}
	
	void Update(float)
	{
		// ** �����ε� �Լ�
	}

	void Update()
	{
		// ** �����ε� �Լ�
	}
};