#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void game() 
{
	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;//����rand��������һ�������
	while (1) 
	{
		printf("�������\n");
		scanf("%d",&guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else 
		{
			system("cls");
			printf("��ϲ��¶���\n");
			break;
		}
	}
}


void menu()
{
	printf("************************************\n");
	printf("****  1.��ʼ��Ϸ    0.�˳���Ϸ  ****\n");
	printf("************************************\n");
}

int main() 
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}