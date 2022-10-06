#pragma once
#include "Parent.h"

class Child1 : public Parent
{
private:

public:
	virtual void Initialize()override;
	virtual void Render()override;

};