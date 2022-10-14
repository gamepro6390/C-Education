#include "Headers.h"


class Copy
{
public:
	char* name;


public:
	Copy() : name(nullptr) {}
	Copy(Copy* pCopy)
	{
		this->name = new char[strlen(pCopy->name)];
		strcpy(this->name, pCopy->name);
	}
};


int main(void)
{


	//��ȣ   ������              ������
	//0     00000000     00000000000000000000000

	//100.625 => 0 

	// ���� �Ҽ��� 
	//       ������              �Ǽ���
	// 00000000 10000000 . 10100000 00000000

	//1.0000000101�� 7��

	//�ε� �Ҽ���
	//��ȣ   ������              ������
	//0     10000110     00000001010000000000000
	
	/*Operator o;
	o.setAge(32);
	o.setName((char*)"ȫ�浿");
	
	o.render();*/

	//==============================================================
	// ���� ���� & ���� ����
	// ���� ���� : �ּҰ��� ���� ���� ����Ű�� ���� ���� ���� �̴�.

	// c1�� ����
	Copy* c1 = new Copy;
	
	// c1�� name �� �̸��� �ʱ�ȭ
	c1->name = (char*)"ȫ�浿";

	// c2�� c1�� ����
	Copy* c2 = new Copy(c1); //��

	//c1�� �����Ǳ� ���� c2�� name�� ���� ��µȴ�.
	//cout << c2->name << endl;

	//c1�� ����
	delete c1;

	//c2�� name�� ���
	cout << c2->name << endl;

	return 0;
}