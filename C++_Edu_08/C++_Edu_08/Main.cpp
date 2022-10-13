#include <iostream>

using namespace std;



class Object
{
private:
	string Name; 

public:
	string GetName() { return Name; }
	void SetName(string _Name) { Name = _Name; }
};


// �ν��Ͻ�
class Singleton
{
// ** static: ��𼭳� ���� ������ �����Ҽ� �־�� �Ѵ�
// ** Singleton* Instance; : ��ü�� �ϳ��� ���� �ؾ� �Ѵ�
private:
	static Singleton* Instance;
public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new Singleton();
		return Instance;
	}

private:
	Object* pObj;
public:
	Object* GetObject() { return pObj; }
	void SetObject(Object* _pObj) { pObj = _pObj; }

// ** private: ��ü�� ��𼭵� ������ �� ����� �Ѵ�
private:
	Singleton() : pObj(nullptr) { }
};

Singleton* Singleton::Instance = nullptr;



// ** ������ �����ε�
class Operator
{
public:
	int Number;

public:
	Operator operator+(Operator& _ref)
	{
		return Operator(Number + _ref.Number);//void �� �ƴϸ� return �ʿ�	
	}
	/*
	 [��ȯ��] = �ǿ����� ������ �ǿ�����
	               ��       ��   ��
	[��ȯ��] [�ڱ��ڽ�]+([������ �׸�])
	{
		return [��ȯ��]
	}
	
	*/
public:
	Operator operator-(Operator& _ref)
	{
		return Operator(Number - _ref.Number);//void �� �ƴϸ� return �ʿ�	
	}
	void operator +=(Operator& _ref)
	{
		Number += _ref.Number;
	}

public:
	Operator() : Number(0) { }
	Operator(int _Number) : Number(_Number) { }
};


int main(void)
{
	







	/*
	Operator oper1, oper2;
	oper1.Number = 10;
	oper2.Number = 20;
	Operator oper3 = oper1+oper2;
	Operator oper4 = oper3 - oper2;
	oper1 += oper2;
	cout << oper3.Number << endl;
	cout << oper4.Number << endl;
	cout << oper1.Number << endl;
	*/
	/*
	{
		Object* O1 = new Object();
		O1->SetName("ȫ�浿");

		Singleton::GetInstance()->SetObject(O1);
	}
	

	string str = Singleton::GetInstance()->GetObject()->GetName();
	cout << str << endl;

	*/
	return 0;
}