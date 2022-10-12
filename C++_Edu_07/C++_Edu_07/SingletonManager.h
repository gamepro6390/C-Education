#pragma once
#include "Player.h"
#include "Enemy.h"

// ** ������ Ŭ������ ����ϱ� ����.
// ** �� �ϳ��� �ν��Ͻ��� ����� ������ ����Ѵ�.
class Object;
class SingletonManager
{

private:
	static SingletonManager* Instance;


public:
	static SingletonManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new SingletonManager;
		return Instance;
	}


public:
	Object* CreatePlayer() { return new Player; }
	Object* CreateEnemy() { return new Enemy; }
};

SingletonManager* SingletonManager::Instance = nullptr; //��Ÿ�� ������ nullptr�� �ʱ�ȭ �Ǿ� ����.