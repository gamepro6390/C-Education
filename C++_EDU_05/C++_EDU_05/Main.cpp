#include "Headers.h"
#include "Child1.h"
#include "Child2.h"
using namespace std;
// ** ���
// ** ������ Ŭ����, �Լ� ���� ����� �� �ֵ��� ���ش�.
// ** namespace

// ** �߻�
// ** ������

// ** �����Լ� & ���������Լ�
// ** �����ε� & �������̵�
// ** ������ �����ε�


//** namespace �� ����Ͽ� Ŭ������ �ۼ� �ϴ°��� �����ϴ�.


int main(void)
{
	/*
	Parent* pP = new Parent;
	Child* pC = new Child;
	*/


	//Number�� int�� ����Ǿ� �ִ�.
	//float ���� ����ȯ�� �ؼ� �شٰ� �ص�,
	//Number�� ���´� ���� ������ �ʴ´�.
	int Number = (float)3.141592f;
	
	//Parent* pP1�� �������� �̴�.
	//new Child1�� �ؼ� pP1�� Child1�� �־��ٰ� �ص�,
	//pP1�� Parent* Ÿ���� Child1* Ÿ������ ������� �ʴ´�.
	Parent* ObjectList[2];
	ObjectList[0] = new Child1;

	//���� Parenet�� �Լ��� �������� �ʱ� ������ 
	//����ȯ�����Ͽ� Child1�� Ŭ������ �ִ� �Լ��� ȣ���Ͽ��� �Ѵ�.
	ObjectList[0]->Initialize();
	ObjectList[0]->Render();


	//Child2�� ����
	ObjectList[1] = new Child2;
	
	//Child1 �� �Լ��� ȣ���Ͽ� ���� �ʱ�ȭ
	ObjectList[1]->Initialize();

	//�Ӳ����� ���;� ������ ȫ�浿�� ���´�.
	ObjectList[1]->Render();

	//�θ� ������ ������Ÿ���� ��쿡�� �ڽ�Ŭ������
	//����ȯ�� �����ϴ�. �ٸ� �����ϰ��ִ� �����ͱ��� �����Ǵ°��� �ƴϱ� ������
	//�������� ���� ����ϰų� ����� ��� �����ϰ� ��������.



	//�ϳ��� ������ Ÿ������ ���� �ڽ�Ŭ������ �� �� �ִ�.
	//�ϰ� ȣ��
	for (int i = 0; i < 2; i++)
	{
		ObjectList[i]->Render();
	}

	return 0;
}