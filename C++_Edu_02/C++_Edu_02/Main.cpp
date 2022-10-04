#include <iostream>

using namespace std;

//** ������
//** ���� ������
//** �Ҹ���


struct Vector2
{
	float x, y;
	// ������
	Vector2() : x(0), y(0) {};
	// ���� ������
	Vector2(float _x, float _y) :x(_x), y(_y) {};
};


class Transform
{
//�����
private:
	Vector2 Position;
//��Ӱ��� ����
protected:

//����
public:
	float x, y; //��� ����,Ŭ���� �ȿ� �־����.

public:
	void Output()
	{
		cout << "X: " << Position.x << endl;
		cout << "X: " << Position.y << endl;
	}
public:
	//������ ���� �ڵ����� ȣ���� �Ǵ� �Լ�
	//����ڰ� ���� �������� �ʴ��� �⺻ �����ڰ� ȣ��
	Transform() :x(0), y(0), Position(Vector2(0.0f,0.0f))
	{
		/*Position.x = 0;
		Position.y = 0;*/
		cout << "������" << endl;
	}
	//��������ڴ� ���� ȣ���ؾ߸� ȣ���. �Ű������� ������ ���� ����
	//�Ű�����(PARAMETER)�� ������ �ڷ����� Ÿ������ ���еǾ�,
	//�������� ��������ڸ� ������ �� �ִ�
	Transform(float _x, float _y) : x(_x),y(_y)
	{
		cout << "float _x , float _y " << endl;
	}

	//�Ҹ�Ǳ� ������ �ڵ����� ȣ���� �Ǵ� �Լ�
	//����ڰ� ���� ���ǵ��� �ʴ��� �⺻ �Ҹ��ڰ� ȣ��
	~Transform()
	{
		cout << "�Ҹ���" << endl;
	} //return 0���� ��µ�.
};

class empty
{
private:
	int number;
public:
	void Output(); // inline �Լ���.
};

void empty::Output()
{
	cout << number << endl;
} //inline �Լ� �ƴ�.
  

int main(void)
{
	//���� ������ ȣ��
	Transform t = Transform(0.0f,0.0f);//Transform t = Transform()
	t.Output();

	cout << "���α׷��� ����˴ϴ�." << endl;

	return 0;
}

//inline = Ű����      �ֿ켱 ó���Ǵ� �Լ� 
//inline (������ Ÿ��) (�Լ��̸�)()
//{
//		�Լ��� inline Ű���尡 �پ��ִٸ� �� �Լ��� �켱ó�� ���
//		��Ȳ�� ���� �켱ó�� ��󿡼� ���ܵ� ���� �ִ�.
//		���ܶ�°� ���� ���ܰ� �ƴ϶� ���� ������ �и��� �ִٴ� ��
//}
