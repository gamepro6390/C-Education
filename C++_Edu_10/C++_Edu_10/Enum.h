#pragma once

// ������
/*
enum { //������������ ���
	A, //0
	B, //1
	C, //2
	D, //3
	E  //4
};
*/

//enum �� ��� , ����
enum {
	Player, //0
	Enemy, //1
	Bullet, //2
	MAX, //3
};

enum class ObjectID {
	Player,
	Enemy,
	Bullet,
	MAX,
};

enum SceneID
{
	LOGOID,
	MENUID,
	STAGEID,
	EXITID,
};