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
		cout << "소멸자" << endl;
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
		cout << "국어점수 :" << Element->Kor << endl;
		cout << "영어점수 :" << Element->Eng << endl;
		cout << "수학점수 :" << Element->Math << endl <<endl;
	}
	*/


	//반복자 = iterator

	// iterator = 포인터(위치를 가르킴)

	vector<Object*>::iterator iter;



	/*
	{
		//** (시작점)첫번째 원소를 가르키는 반복자
		iter = Objects.begin();
		cout << "첫번째 원소의 점수: "<< (*iter)->Kor<<endl;
		cout << "첫번째 원소의 점수: "<< (*iter)->Eng<<endl;
		cout << "첫번째 원소의 점수: "<< (*iter)->Math<<endl;
	}		
	
	{
		//** 마지막을 가르키는 반복자.
		iter = Objects.end();
		if (iter == Objects.end())
			cout << "list의 마지막입니다." << endl;
	}

	{
		for (vector<Object*>::iterator iter = Objects.begin();
			iter != Objects.end(); ++iter)
		{
			cout << "첫번째 원소의 점수: " << (*iter)->Kor << endl;
			cout << "첫번째 원소의 점수: " << (*iter)->Eng << endl;
			cout << "첫번째 원소의 점수: " << (*iter)->Math << endl;
		}
	}
	{
		//** 원하는 위치에 원하는 값을 추가 한다.
		Objects.insert(Objects.begin(),
			CreateObject(0,1,2));
		cout << endl << "{at}" << endl;
		for (int i = 0; i < Objects.size(); ++i)
		{
			cout << "첫번째 원소의 점수: " << Objects.at(i)->Kor << endl;
			cout << "첫번째 원소의 점수: " << Objects.at(i)->Eng << endl;
			cout << "첫번째 원소의 점수: " << Objects.at(i)->Math << endl;
		}
	}
	*/
	{
		//** 원하는 위치의 값을 삭제 한다.
		//Objects.erase();
		for (vector<Object*>::iterator iter = Objects.begin();
			iter != Objects.end();)
		{
			float result = ((*iter)->Kor + (*iter)->Eng + (*iter)->Math) / 3.0f;
			if (result < 16)				
				delete((*iter));// iterator 지운 다음 것의 iter를 반환 
			
			else
			{
				cout << " 원소의 국어 점수: " << (*iter)->Kor << endl;
				cout << " 원소의 영어 점수: " << (*iter)->Eng << endl;
				cout << " 원소의 수학 점수: " << (*iter)->Math << endl;
				++iter;

			}
		}
	}
	
	{
		//** Container의 모든 내용을 삭제한다.
		Objects.clear();
		delete(*iter);
		// 데이터를 지우는애가 아님.erase 또한.
	}
	
	{
		//** 값이 있는지 없는지 확인한다.
		if (Objects.empty())
			cout << "Data가 없습니다." << endl;
	}
		return 0;
}