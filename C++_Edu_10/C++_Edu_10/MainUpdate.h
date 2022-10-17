#pragma once
#include "Headers.h"

class MainUpdate : public Object
{


public:
	virtual void Start(void)PURE;
	virtual void Update(void)PURE;
	virtual void Render(void)PURE;
	virtual void Release(void)PURE;

public:
	MainUpdate();
	virtual ~MainUpdate(); //메모리 누수 방지
};