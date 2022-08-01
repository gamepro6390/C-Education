/*
	Chapter 02
*/

#include <stdio.h>
#include <stdlib.h>

// 함수
//void: 출력의 형태 , 반환값
void 이름()
{
	

}
// 'ㅁ' = 문자, 두글자 x
// "ㅁ" = 문자열
int main(void)
{
	printf("goot\bd\tchance\n");
	printf("정수출력: %d\n", 3);
	printf("실수출력: %f\n", 3.141592f);
	printf("문자 출력: %c\n", 'A');
	printf("문자열 출력: %s\n", "abcvknzlclv");


	printf("10진수:%d\n", 10);
	printf("8진수:%d\n", 010);
	printf("16진수 :%d\n", 0x10);

	printf("65 문자 출력 :%c\n", 65);
	printf("A 정수 출력 :%d\n", 'A');

	return 0;

	
}
// **서식문자
//\\ =\ 표현
//\t =tab 표현(탭한번만큼 점프)
//\b = backspace(삭제)