#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void menu() 
{
	printf("*************************\n");
	printf("***  1.加法   2.减法  ***\n");
	printf("***  3.乘法   4.除法  ***\n");
	printf("*******   0.退出  *******\n");
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

//int main() //常规计算器
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do 
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input) 
//		{
//		case 1:
//			printf("请输入两个数字：");
//			scanf("%d %d", &x, &y);
//			printf("结果:%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个数字：");
//			scanf("%d %d", &x, &y);
//			printf("结果:%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个数字：");
//			scanf("%d %d", &x, &y);
//			printf("结果:%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个数字：");
//			scanf("%d %d", &x, &y);
//			printf("结果:%d\n", Div(x, y));
//			break;
//		case 0:
//			break;
//		default:
//			break;
//		}
//	} while (input);
//	return 0;
//}



int main() //函数指针数组计算器
{
	int input = 0;
	int x = 0;
	int y = 0;
	int (*pfarr[5])(int, int) = { 0,Add,Sub ,Mul ,Div };
	do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			break;
		default:
			printf("请输入两个数字：\n");
			scanf("%d %d", &x, &y);
			int ret = pfarr[input](x, y);
			printf("结果是:%d\n", ret);
			break;
		}
	} while (input);
	return 0;
}