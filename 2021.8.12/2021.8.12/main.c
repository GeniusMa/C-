#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//void printf1(int (*p)[5],int x,int y) 
//{
//	int i = 0;
//	int j = 0;
//	for(i=0;i<x;i++)
//	{
//		for (j = 0; j < y; j++) 
//		{
//			//printf("%d ", (*(p + i))[j]);//等价
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main() 
//{
//	int arr1[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	printf1(arr1, 3, 5);
//	return 0;
//}

void test(int* p) 
{

}

int main() 
{
	int a = 10;
	int* p1 = &a;
	test(&a);
	test(p1);//一级指针传参类型

	return 0;
}

//函数指针