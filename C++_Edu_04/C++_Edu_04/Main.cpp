#include <iostream>
#include <string>

using namespace std;

//** is-a has-a ��� ���� ����.
//** namespace
//** ���-���� ����
//** �߻�
//** ������

//** �����Լ� & ���������Լ�
//** �����ε�& �������̵�
//** ������ �����ε�

//data+fuction = capsulation
class Parent
{

};



class Child
{
	//int Child::Number; // static ������ �ʱ�ȭ�� �ʿ�.

};

class A
{
	//** ������ ���� ���� ����
private:

	//** ��Ӱ��迡���� ���� ���� ���� , ����� �ƴ� ��쿡�� �����.
	//** ���: public
	//** �� ���: private
protected:
	string Name;
	int Age;
	//** ������ ���� ���� ����
public: 
	void Render()
	{
		cout << Name << endl;
		cout << Age << endl;
	}
};

class B : public A
{

public:
	void Initialize()
	{
		Name = "ȫ�浿";
		Age = 34;
	}

};

class C : public A
{
public:
	void Initialize()
	{
		Name = "�Ӳ���";
		Age = 38;
	}
	
};
class D :public B, C
{
public:
	void Initialize()
	{
	}
};
class E
{

};

int main(void)
{
	B b;
	b.Initialize();
	b.Render();

	return 0;
}