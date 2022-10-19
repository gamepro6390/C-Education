#include "Child.h"

Child::Child()
{
	cout << "Child ������" << endl;
}

Child::~Child()
{
	cout << "Child �Ҹ���" << endl;
}

void Child::Start(void)
{
	Info.Position = Vector3(0.0f, 0.0f, 0.0f);
	Info.Rotation = Vector3(0.0f, 0.0f, 0.0f);
	Info.Scale = Vector3(0.0f, 0.0f, 0.0f);
}

void Child::Update(void)
{
	if (GetAsyncKeyState(VK_RETURN))
		ScaneManager::GetInstance()->SetScene(EXITID);
}

void Child::Render(void)
{
	cout << Info.Position.x << endl
		<< Info.Position.y << endl
		<< Info.Position.z << endl;
}

void Child::Release(void)
{

}