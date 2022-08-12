/*
Chapter 11
*/

#include <stdio.h>
#include <string>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	{
		//배열을 사용한 문자 출력
		char Buffer[5] = { "한글" };
		//char Buffer[] ={"한글"};


		//출력
		printf("%c%c %c%c\n",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}

	{
		//포인터를 사용한 문자 출력
		//"한글" =문자열로 초기화 되어있기 때문에 char[5] 만큼의 기리이를 갖고 있다.
		//문자열 또한 배열로 인식하기 때문에 다음과 같이 형 변환이 필요.

		char* Buffer = (char*)"한글"; 
		//출력
		printf("%c%c %c%c",
			Buffer[0],
			Buffer[1],
			Buffer[2],
			Buffer[3]);
	}
	{
		//포인터 변수에 문자를 직접 입력 받을수 없음.
		char* Buffer = (char*)"한글";
		scanf("%s", Buffer);
		printf("%s", Buffer);
	}

	{
		char Buffer[128] = "";

		scanf("%s", Buffer);
		printf("%s", Buffer);
	}

	return 0;
}