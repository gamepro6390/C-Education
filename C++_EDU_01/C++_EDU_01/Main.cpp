//#include <stdio.h>
#include <iostream> //c++에서 사용하는 input output 의 표준 라이브러리
// #은 전처리기 ,#define >>const, enum enline을 떠올려야함



/* 객체지향의 특징 5가지
1.정보 은닉
2.캡슐화
3.추상화
4.상속
5.다형성
*/

//naemspace = ::

//namespace AAA
//{
//	void Output()
//	{
//		std::cout << "AAA" << std::endl;
//	}
//}
//std로 시작되지만 언급 되어있는 목록만 생략 가능.
//using std::cout;
//using std::endl;
//using std::cin;

//
//namespace BBB
//{
//	void Output()
//	{
//		cout << "BBB" << endl; //console out = cout     endl = 라인의 끝(줄바꿈)=\n
//	}
//}
//
//using BBB::Output;
using namespace std; //std로 시작되는 namespace는 모두 생략 가능.

const float PI = 3.1416592f;
// 심볼릭 상수 = PI , 모든 상수는 대문자로 입력해야함.
// 리터럴 상수 =3.141592f

//** pointer const 의 사용 예시.
const char* const FileName = "../Data/image.png";
string FileName = "../Data/image.png";

class AAA 
{
private:
	
public:
	static int MAX ;
};
int AAA::MAX = 0;


int main(void)
{
	int Number = 0;
	//**입력
	cin >> Number; //입력이기 때문에 >>
	
	//**출력
	cout << "Hello World!!:" << Number << endl;

	/*AAA::Output();
	Output();*/

	return 0;
}

