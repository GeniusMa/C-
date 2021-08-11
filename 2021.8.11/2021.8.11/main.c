#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//指针数组 是数组 用来存放指针
//数组指针 是指针 
//int main() 
//{
//	int *p = NULL;// 整形指针 指向整形的指针 存放整形的地址
//	char* pc = NULL;// 字符指针 指向字符的指针 存放字符的地址
//	//数组指针 指向数组的指针 存放数组的地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*
//	arr 首元素地址
//	&arr[0] 首元素地址
//	&arr 数组的地址
//	*/
//	int (*p)[10]= &arr;//p 就是数组指针 *p说明是个指针 [10]说明指向一个数组 （）因为[]比*优先级高会把*p[10]看作一个数组
//	return 0;
//}

//int main() //因为arr数组中每个元素类型是char* 所以是char* (*pc)[50]
//{
//	char* arr[5];
//	char* (*pc)[50] = &arr;
//	return 0;
//}


//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p+i));//*p == arr
//	}
//	/*for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	return 0;
//}

void printf1(int arr[3][5],int x,int y) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++) 
	{
		for (j = 0; j < y; j++) 
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void printf2(int (*p)[5] ,int x,int y) //arr是首元素地址 为这个二维数组第一个数组{1，2，3，4，5}的地址 ，是数组地址，
                                       //所以用数组指针来接收
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++) 
	{
		for (j = 0; j < y; j++) 
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main() 
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	printf1(arr, 3, 5);
	printf2(arr, 3, 5);
	return 0;
}










//void print(int* p,int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++) 
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()                                                //个人练习
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr, 5);
//	return 0;
//}