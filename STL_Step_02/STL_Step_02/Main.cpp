#include <iostream>
#include <vector>

using namespace std;

class Object
{
public:
	int Kor;
	int Eng;
	int Math;

	~Object()
	{
		cout << "�Ҹ���" << endl;
	}
};






Object* CreateObject(int _kor, int _eng, int _math)
{
	Object* pObj = new Object;
	pObj->Kor = _kor;
	pObj->Eng = _eng;
	pObj->Math = _math;

	return pObj;
}





int main(void)
{

	vector<Object*> Objects;

	for (int i = 0; i < 3; ++i)
		Objects.push_back(
			CreateObject(
				i * 10 + 10,
				i * 10 + 10 + 1,
				i * 10 + 10 + 2));



	/*
	for (int i = 0; i < 3; ++i)
	{
		Object* pObj = new Object;
		pObj = new Object;
		pObj->Kor = i*10 + 10;
		pObj->Eng = i * 10 + 10 +1;
		pObj->Math = i * 10 + 10 +2;

		Objects.push_back(pObj);
	}

	for (auto Element : Objects)
	{
		cout << "�������� :" << Element->Kor << endl;
		cout << "�������� :" << Element->Eng << endl;
		cout << "�������� :" << Element->Math << endl <<endl;
	}
	*/


	//�ݺ��� = iterator

	// iterator = ������(��ġ�� ����Ŵ)

	vector<Object*>::iterator iter;



	/*
	{
		//** (������)ù��° ���Ҹ� ����Ű�� �ݺ���
		iter = Objects.begin();
		cout << "ù��° ������ ����: "<< (*iter)->Kor<<endl;
		cout << "ù��° ������ ����: "<< (*iter)->Eng<<endl;
		cout << "ù��° ������ ����: "<< (*iter)->Math<<endl;
	}		
	
	{
		//** �������� ����Ű�� �ݺ���.
		iter = Objects.end();
		if (iter == Objects.end())
			cout << "list�� �������Դϴ�." << endl;
	}

	{
		for (vector<Object*>::iterator iter = Objects.begin();
			iter != Objects.end(); ++iter)
		{
			cout << "ù��° ������ ����: " << (*iter)->Kor << endl;
			cout << "ù��° ������ ����: " << (*iter)->Eng << endl;
			cout << "ù��° ������ ����: " << (*iter)->Math << endl;
		}
	}
	{
		//** ���ϴ� ��ġ�� ���ϴ� ���� �߰� �Ѵ�.
		Objects.insert(Objects.begin(),
			CreateObject(0,1,2));
		cout << endl << "{at}" << endl;
		for (int i = 0; i < Objects.size(); ++i)
		{
			cout << "ù��° ������ ����: " << Objects.at(i)->Kor << endl;
			cout << "ù��° ������ ����: " << Objects.at(i)->Eng << endl;
			cout << "ù��° ������ ����: " << Objects.at(i)->Math << endl;
		}
	}
	*/
	{
		//** ���ϴ� ��ġ�� ���� ���� �Ѵ�.
		//Objects.erase();
		for (vector<Object*>::iterator iter = Objects.begin();
			iter != Objects.end();)
		{
			float result = ((*iter)->Kor + (*iter)->Eng + (*iter)->Math) / 3.0f;
			if (result < 16)				
				delete((*iter));// iterator ���� ���� ���� iter�� ��ȯ 
			
			else
			{
				cout << " ������ ���� ����: " << (*iter)->Kor << endl;
				cout << " ������ ���� ����: " << (*iter)->Eng << endl;
				cout << " ������ ���� ����: " << (*iter)->Math << endl;
				++iter;

			}
		}
	}
	
	{
		//** Container�� ��� ������ �����Ѵ�.
		Objects.clear();
		delete(*iter);
		// �����͸� ����¾ְ� �ƴ�.erase ����.
	}
	
	{
		//** ���� �ִ��� ������ Ȯ���Ѵ�.
		if (Objects.empty())
			cout << "Data�� �����ϴ�." << endl;
	}
		return 0;
}