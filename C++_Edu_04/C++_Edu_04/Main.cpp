#include <iostream>
#include <string>

using namespace std;

//** is-a has-a 상속 관계 위험.
//** namespace
//** 상속-계층 구조
//** 추상성
//** 다형성

//** 가상함수 & 순수가상함수
//** 오버로딩& 오버라이딩
//** 연산자 오버로딩

//data+fuction = capsulation
class Parent
{

};



class Child
{
	//int Child::Number; // static 변수는 초기화가 필요.

};

class A
{
	//** 완전한 정보 은닉 상태
private:

	//** 상속관계에서만 정보 공개 상태 , 상속이 아닌 경우에는 비공개.
	//** 상속: public
	//** 비 상속: private
protected:
	string Name;
	int Age;
	//** 완전한 정보 공개 상태
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
		Name = "홍길동";
		Age = 34;
	}

};

class C : public A
{
public:
	void Initialize()
	{
		Name = "임꺽정";
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