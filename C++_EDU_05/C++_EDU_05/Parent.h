#pragma once //����������ߺ� ���Ǹ� �����ش�.

#include "Headers.h"
class Parent
{
	// ** ������ ���� ���� ����
private:


	// ** ��Ӱ��迡���� ���� ���� ����, ����� �ƴ� ��쿡�� �����.
	// ** ��� : public
	// ** �� ��� : private
protected:
	string Name;
	int Age;


	// ** ������ ���� ���� ����
public:
	//virtual Ű����� ���� �Լ� Ű����
	//���� ���� �Լ�  = 0   >>>>>�߻� Ŭ������ ��
	virtual void Initialize() = 0;
	virtual void Render() = 0;
	
};