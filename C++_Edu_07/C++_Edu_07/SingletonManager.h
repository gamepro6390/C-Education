#pragma once
#include "Player.h"
#include "Enemy.h"

// ** ��ü ����
class Object;
class SingletonManager
{
private:
	static SingletonManager* Instance;
public:
	static SingletonManager* GetInstance()  // static������ static �Լ��ȿ��� �۵�.
	{
		if (Instance=nullptr)
		{
			Instance = new SingletonManager;
			return Instance;
		}
	}
public: 
	Object* CreatePlayer() {return new Player;}
	Object* CreateEnemy() {return new Enemy;}
};

SingletonManager* SingletonManager::Instance = nullptr;