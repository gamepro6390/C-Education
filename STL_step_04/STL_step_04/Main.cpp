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
// ** map -탐색 시간 감소, 삽입 과정 문제(부하)
// *******************************************************************
Object* CreateObject(int _kor, int _eng, int _math);



int main(void)
{
	// *******************************************************************
	// map<int, Object>
	// *******************************************************************
	// map<int,list<string>> // 오브젝트 관리
	// map<int, vector<string>>
	// *******************************************************************
	// list<map<int,string> // 데이터 관리
	// *******************************************************************


	int index = 0;

	map<int,list<Object*>> Objects;
	
	{
		// ** 오브젝트를 생성
		Object* pObj = CreateObject(10, 20, 30);

		//** 입력받을 값
		int value = 0;

		//** 입력
		cout << "입력:"; cin >> value;

		//** 입력된 값을 탐색.
		map<int, list<Object*>>::iterator iter = Objects.find(value);


		// ** 데이터가 없다면...
		if (iter == Objects.end())
		{
			//리스트를 새롭게 생성하고
			list<Object*> temp;

			// 생성된 리스트에 오브젝트를 추가
			temp.push_back(CreateObject(10, 20, 30));

			//오브젝트가 추가된 리스트를 MAP 에 넣는다
			Objects.insert(make_pair(index++, temp));
		}
		else//찾는 데이터가 없다면...
			//그곳에 오브젝트를 추가한다.
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
