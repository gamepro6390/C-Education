#pragma once
#include "Object.h"
class Scene
{
public:
	virtual void Start(void)override;
	virtual void Update(void)override;
	virtual void Render(void)override;
	virtual void Release(void)override;

};

