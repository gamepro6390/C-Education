//#include <stdio.h>
#include <iostream> //c++���� ����ϴ� input output �� ǥ�� ���̺귯��
// #�� ��ó���� ,#define >>const, enum enline�� ���÷�����



/* ��ü������ Ư¡ 5����
1.���� ����
2.ĸ��ȭ
3.�߻�ȭ
4.���
5.������
*/

//naemspace = ::

//namespace AAA
//{
//	void Output()
//	{
//		std::cout << "AAA" << std::endl;
//	}
//}
//std�� ���۵����� ��� �Ǿ��ִ� ��ϸ� ���� ����.
//using std::cout;
//using std::endl;
//using std::cin;

//
//namespace BBB
//{
//	void Output()
//	{
//		cout << "BBB" << endl; //console out = cout     endl = ������ ��(�ٹٲ�)=\n
//	}
//}
//
//using BBB::Output;
using namespace std; //std�� ���۵Ǵ� namespace�� ��� ���� ����.

const float PI = 3.1416592f;
// �ɺ��� ��� = PI , ��� ����� �빮�ڷ� �Է��ؾ���.
// ���ͷ� ��� =3.141592f

//** pointer const �� ��� ����.
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
	//**�Է�
	cin >> Number; //�Է��̱� ������ >>
	
	//**���
	cout << "Hello World!!:" << Number << endl;

	/*AAA::Output();
	Output();*/

	return 0;
}

