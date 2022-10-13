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




int main(void)
{
	{
		Object* O1 = new Object();
		O1->SetName("ȫ�浿");

		Singleton::GetInstance()->SetObject(O1);
	}
	

	string str = Singleton::GetInstance()->GetObject()->GetName();
	cout << str << endl;


	return 0;
}