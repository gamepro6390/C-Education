#include <iostream>
#include <map>
#include <vector>
#include <list>
#include <Windows.h>

using namespace std;

class Object
{
public:
	int Kor;
	int Eng;
	int Math;
	int Mean;
};


// *******************************************************************
// ** map -Ž�� �ð� ����, ���� ���� ����(����)
// *******************************************************************
Object* CreateObject(int _kor, int _eng, int _math);



int main(void)
{
	// *******************************************************************
	// map<int, Object>
	// *******************************************************************
	// map<int,list<string>> // ������Ʈ ����
	// map<int, vector<string>>
	// *******************************************************************
	// list<map<int,string> // ������ ����
	// *******************************************************************


	int index = 0;

	map<int,list<Object*>> Objects;
	
	{
		// ** ������Ʈ�� ����
		Object* pObj = CreateObject(10, 20, 30);

		//** �Է¹��� ��
		int value = 0;

		//** �Է�
		cout << "�Է�:"; cin >> value;

		//** �Էµ� ���� Ž��.
		map<int, list<Object*>>::iterator iter = Objects.find(value);


		// ** �����Ͱ� ���ٸ�...
		if (iter == Objects.end())
		{
			//����Ʈ�� ���Ӱ� �����ϰ�
			list<Object*> temp;

			// ������ ����Ʈ�� ������Ʈ�� �߰�
			temp.push_back(CreateObject(10, 20, 30));

			//������Ʈ�� �߰��� ����Ʈ�� MAP �� �ִ´�
			Objects.insert(make_pair(index++, temp));
		}
		else//ã�� �����Ͱ� ���ٸ�...
			//�װ��� ������Ʈ�� �߰��Ѵ�.
			iter->second.push_back(pObj);
	}

	return 0;
}

Object* CreateObject(int _kor,int _eng,int _math)
{
	Object* pObj = new Object;
	pObj->Kor = _kor;
	pObj->Eng= _eng;
	pObj->Math = _math;

	pObj->Mean = (_kor + _eng + _math) / 3;
	return 0;
}
