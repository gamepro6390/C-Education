#pragma once
#include "Headers.h"

class Object
{
	protected:
		Transform Info;
		string Tex[3];
	public:
		virtual void Start(void)PURE;
		virtual void Update(void)PURE;
		virtual void Render(void)PURE;
		virtual void Release(void)PURE;
	public:
		Object();
		virtual ~Object();
};
