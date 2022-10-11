#pragma once
#include "Headers.h"
class Object
{
	private:
		// ** 변수 생성
	public:
		// ** 초기화
		void virtual Initialize();

		// ** 변경
		void Progress();

		// ** 갱신
		void Render();

		// ** 삭제
		void Release();

};

