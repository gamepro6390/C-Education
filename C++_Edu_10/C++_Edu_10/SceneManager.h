#pragma once
#include "Headers.h"

class SceneManager
{
private:
	static SceneManager* Instance;
public:
	static SceneManager* GetInstance()
	{
		if (Instance == nullptr)
			Instance = new SceneManager;
		return Instance;
	}
private:

public:
	void SetScene();
	void Update();
	void Render();
	void Release();
private:
	SceneManager();
public:
	~SceneManager();
};
