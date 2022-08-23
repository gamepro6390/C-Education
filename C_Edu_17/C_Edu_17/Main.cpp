/*
Chapter 17
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main()
{
	{
		//개별 초기화 방법
		char Array[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n%s\n\n\n", Array);

	}
	{
		//문자열 초기화 방법
		char Array[10] = { "ABCDEFGHI" };
		
		for (int i = 0; i < 10; ++i)
		{
			printf("%c", Array[i]);
		}
		printf("\n%s\n\n\n", Array);

		//문자열 초기화 시에는 마지막 문자열이 끝나는 지점에 NULL값이 들어가야 한다.
		//NULL 값의 공간이 1byte 만큼 필요하므로 개별초기화 방법보다 문자가 1개 더 필요.
	}

	{
		//널 문자
		NULL;
		'\0';
	}
	
	//{
	//	//문자열 배열 초기화
	//	char Buffer[] = "ABCDEFGHIJ";  //문자열 변환, 상수라 변경이 안됨. 각각 초기화 하면 됨.

	//	//Buffer의 주소를 str1으로 대입
	//	char* str1 = Buffer;
	//	char* str2 = (char*)"ABCDEFGHIJ";
	//	printf("%p\n", str2);
	//	char* str3 = str2;
	//	printf("%p\n", str3);
	//	

	//	int* Pointer = (int*)malloc(sizeof(int));
	//	

	//}

	{
		//파일 저장하기
		FILE* pf = fopen("../Data/Data.txt", "w");

		if (pf == NULL)
			printf("파일을 열지 못했습니다.");
		else
		{
			int Age = 32;
			char Name[128] = "홍길동";


			int n = fscanf(pf, "%s", &Age);
			fgets(Name, sizeof(Name), pf);
			fprintf(pf,"%s:%d",Name,Age);
			fclose(pf);
		}
		
	}
	{
		//파일 불러오기
		FILE* pf = fopen("../Data/Data.txt", "r");
		int Age[20];
		char Name[128];

		int Count = 0;
		while (fgetc(pf) != NULL)
		{
			fgets(Name, sizeof(Name), pf);
			printf("%s\n", Name);
			fflush(pf);
		}

	}


	return 0;
}