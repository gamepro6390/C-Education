#pragma once
#include "Object.h"

//�߻� Ŭ����
class Child : public Object
{
public:
	virtual void Start(void)override;
	virtual void Update(void)override;
	virtual void Render(void)override;
	virtual void Release(void)override;

public:
	Child();
	virtual ~Child();
};
