#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int Add(int x, int y) 
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main() 
{
	int* arr[5];//ָ������

	int(*pa)(int, int) = Add;//sub/mul/div
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
	int i = 0;
	printf("%d\n", pa(3, 5));
	for (i = 0; i < 4; i++) 
	{
		printf("%d\n", parr[i](3,5));
	}
	return 0;
}

//P34 ��ҵ
char* my_strcpy(char* x, const char* y);


char* (*pf)(char*, const char*) = my_strcpy;
char* (*pf[4])(char*, const char*);

















/**********************************************
				   ���
				 o1ofmeister
**********************************************/