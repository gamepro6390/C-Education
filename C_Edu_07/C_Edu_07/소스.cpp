/*
Chapter 07
*/


#include <stdio.h>
//�Լ��� ���漱�� (main���� ���� �ؾ���)
int sum(int x, int y);
//�Լ� ���漺��� �Ű������� �̸��� �����ص� �ȴ�.
void Output(int, int);
int Compare(int, int);



//�Լ��� ��������� ȣ��Ǳ� ������ ���� �����÷� �߻�
//�Ű� ������ ����Ͽ� ����Լ��� ȣ��Ƚ���� ī��Ʈ�ϰ� �Լ��� �����Ű�� ���
void Recursive(int _n)
{
	if (_n == 0)
		return;
	else
		printf("%d  ���ȣ��\n", _n);
		Recursive(_n -1);
}


int main(void)
{
	//int a = 10,b =20;
	//int result = sum(a, b);
	//printf("result : %d\n", result);
	//return 0;

	//{
	//	int x = 10;
	//	{
	//		int x = 20;
	//		printf("ù��°:%d", x);

	//	}
	//	printf("�ι�° :%d", x);
	//	//1����: ������ �ִ� ������ ���� ����� �� ����,
	//	//2����: ������ �̸��� ���� ������ ���� ��뿡 ȥ���� ����� �ִ�. 
	//}

	////������ ���� �Ⱓ
	//{
	//	//������ ����� �ش� ������ ����Ǵ� �������� ��� ����.
	//	int ����1 = 10;
	//	{
	//		int ����2 = 20;
	//		����1 = ����2;
	//	}
	//}
	Output(10, 20);
	int result =Compare(10, 20);
	printf("\n\n%d\n", result);
	Recursive(5);

}
//�Լ��� ����
int sum(int x, int y)
{
	int temp;
	temp = x + y;
	return temp;
}

void Output(int _x,int _y)
{
	printf("%d+%d=%d", _x, _y, _x + _y);
}
int Compare(int _x, int _y)
{
	if (_x > _y)
		return _x;
	else if (_x < _y)
		return _y;
	else 0;
}                            

