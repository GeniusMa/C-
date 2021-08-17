#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void menu() 
{
	printf("*************************\n");
	printf("***  1.�ӷ�   2.����  ***\n");
	printf("***  3.�˷�   4.����  ***\n");
	printf("*******   0.�˳�  *******\n");
	printf("*************************\n");
}

int Add(int x, int y) 
{
	return x + y;
}

int Div(int x, int y)
{
	return x / y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Sub(int x, int y)
{
	return x - y;
}

//int main() //���������
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1:
//			printf("�������������֣�");
//			scanf("%d %d", &x, &y);
//			printf("���:%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("�������������֣�");
//			scanf("%d %d", &x, &y);
//			printf("���:%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("�������������֣�");
//			scanf("%d %d", &x, &y);
//			printf("���:%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("�������������֣�");
//			scanf("%d %d", &x, &y);
//			printf("���:%d\n", Div(x, y));
//			break;
//		case 0:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}



int main() //����ָ�����������
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*pfarr[5])(int, int) = { 0,Add,Sub ,Mul ,Div };
	do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		default:
			printf("�������������֣�\n");
			scanf("%d %d", &x, &y);
			int ret = pfarr[input](x, y);
			printf("�����:%d\n", ret);
			break;
		}
	} while (input);
	return 0;
}