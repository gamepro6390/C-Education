#include "Headers.h"


class Copy
{
public:
	char* name;


public:
	Copy() : name(nullptr) {}
	Copy(Copy* pCopy)
	{
		this->name = new char[strlen(pCopy->name)];
		strcpy(this->name, pCopy->name);
	}
};


int main(void)
{


	//부호   지수부              가수부
	//0     00000000     00000000000000000000000

	//100.625 => 0 

	// 고정 소수점 
	//       정수부              실수부
	// 00000000 10000000 . 10100000 00000000

	//1.0000000101의 7승

	//부동 소수점
	//부호   지수부              가수부
	//0     10000110     00000001010000000000000
	
	/*Operator o;
	o.setAge(32);
	o.setName((char*)"홍길동");
	
	o.render();*/

	//==============================================================
	// 깊은 복사 & 얕은 복사
	// 얕은 복사 : 주소값을 같은 곳을 가르키는 것이 얕은 복사 이다.

	// c1을 생성
	Copy* c1 = new Copy;
	
	// c1의 name 에 이름을 초기화
	c1->name = (char*)"홍길동";

	// c2에 c1을 복사
	Copy* c2 = new Copy(c1); //됨

	//c1이 삭제되기 전에 c2의 name은 정상 출력된다.
	//cout << c2->name << endl;

	//c1을 삭제
	delete c1;

	//c2의 name을 출력
	cout << c2->name << endl;

	return 0;
}