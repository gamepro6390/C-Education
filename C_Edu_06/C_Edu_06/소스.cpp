/*
Chapter 06
*/

#include <stdio.h>

int main(void)
{
	//�ݺ���
	//������ ���ѷ��� �����϶�
	while (true)
	{
		//Ż���� �� �ִ� ��Ұ� �ʿ�.
		if (true)
			break;
	}
	int i = 0; //�ʱ⹮
	while (i<10) //���ǹ�
	{
		printf("�ݺ��� %d \n", i + 1);
		++i; //������
	}
	//�ʱ⹮,���ǹ�,������ �� ������ ��Ұ� �ʿ�
	printf("\n\n");
	for (i = 0; i < 10; ++i)
	{
		printf("�ݺ��� %d \n", i + 1);
	}

	return 0;
}