#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	char arr[] = { 'a','b','c','d','e' };
	printf("%d\n", sizeof(arr));//5*1
	printf("%d\n", sizeof(arr+0));// 4/8 һ����ַ��С
	printf("%d\n", sizeof(*arr));// ��Ԫ�ش�С 1
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[0]+1));//4
	return 0;
}




/**********************************************
				   ���
				 o1ofmeister
**********************************************/