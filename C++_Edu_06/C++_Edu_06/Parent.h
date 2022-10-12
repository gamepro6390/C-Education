#pragma once
#include "Headers.h"


class Parent
{
protected:
	string Name;
	Vector3 Position;

	// ** 추상 클래스 특징
	// ** 데이터는 존재할 수 있지만 , 함수는 순수 가상함수로만 존재할 수 있다.
	
	// ** 순수 가상함수의 특징
	// ** 순수 가상함수가 1개라도 만들어지면, 그 클래스는 추상 클래스로만 사용 가능하다.
	
	// ** 정리
	// ** 순수가상함수를 1개라도 만든다면...
	// ** 추상클래스 이므로 인스턴스화 불가.
	// ** 일반함수는 쓰지 않기 !(구조상 문제가 생길수 있음)

public:
	//순수 가상 함수
	virtual void Start()PURE; //일반 함수에는 pure를 사용 할수 없음.
	virtual void Start(int number)PURE;





};