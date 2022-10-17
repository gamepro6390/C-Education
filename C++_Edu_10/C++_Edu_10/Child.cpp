#include "Child.h"

Child::Child()
{
	cout << "Child 持失切" << endl;

}

Child::~Child()
{
	cout << "Child 社瑚切" << endl;

}


void Child::Start(void)
{
	Info.Position = Vector3 (0.0f, 0.0f, 0.0f);
	Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);

}

void Child::Update(void)
{
}

void Child::Render(void)
{
	Transform t;
	Vector3 v = Vector3(0.0f, 0.0f, 0.0f);
	t.Position += v;
	cout<< t.Position.x << endl
		<< t.Position.y << endl
		<< t.Position.z << endl;
}

void Child::Release(void)
{
}

