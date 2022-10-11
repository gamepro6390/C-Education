#pragma once
#include "Player.h"
#include "Enemy.h"

// ** 객체 관리
class Object;
class SingletonManager
{
private:
	static SingletonManager* Instance;
public:
	static SingletonManager* GetInstance()  // static변수는 static 함수안에서 작동.
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