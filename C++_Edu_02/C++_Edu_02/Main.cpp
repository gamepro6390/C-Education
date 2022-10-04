#include <iostream>

using namespace std;

//** 생성자
//** 복사 생성자
//** 소멸자


struct Vector2
{
	float x, y;
	// 생성자
	Vector2() : x(0), y(0) {};
	// 복사 생성자
	Vector2(float _x, float _y) :x(_x), y(_y) {};
};


class Transform
{
//비공개
private:
	Vector2 Position;
//상속간의 공개
protected:

//공개
public:
	float x, y; //멤버 변수,클래스 안에 있어야함.

public:
	void Output()
	{
		cout << "X: " << Position.x << endl;
		cout << "X: " << Position.y << endl;
	}
public:
	//생성된 직후 자동으로 호출이 되는 함수
	//사용자가 직접 정의하지 않더라도 기본 생성자가 호출
	Transform() :x(0), y(0), Position(Vector2(0.0f,0.0f))
	{
		/*Position.x = 0;
		Position.y = 0;*/
		cout << "생성자" << endl;
	}
	//복사생성자는 직접 호출해야만 호출됨. 매개변수의 유무에 따라 결정
	//매개변수(PARAMETER)의 개수와 자료형의 타입으로 구분되어,
	//여러개의 복사생성자를 정의할 수 있다
	Transform(float _x, float _y) : x(_x),y(_y)
	{
		cout << "float _x , float _y " << endl;
	}

	//소멸되기 직전에 자동으로 호출이 되는 함수
	//사용자가 직접 정의되지 않더라도 기본 소멸자가 호출
	~Transform()
	{
		cout << "소멸자" << endl;
	} //return 0에서 출력됨.
};

class empty
{
private:
	int number;
public:
	void Output(); // inline 함수임.
};

void empty::Output()
{
	cout << number << endl;
} //inline 함수 아님.
  

int main(void)
{
	//복사 생성자 호출
	Transform t = Transform(0.0f,0.0f);//Transform t = Transform()
	t.Output();

	cout << "프로그램이 종료됩니다." << endl;

	return 0;
}

//inline = 키워드      최우선 처리되는 함수 
//inline (데이터 타입) (함수이름)()
//{
//		함수에 inline 키워드가 붙어있다면 그 함수는 우선처리 대상
//		상황에 따라서 우선처리 대상에서 예외될 수도 있다.
//		예외라는건 완전 예외가 아니라 실행 순서가 밀릴수 있다는 뜻
//}
