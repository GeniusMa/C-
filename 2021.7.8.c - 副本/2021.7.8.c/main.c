#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "arr.h"

int main() 
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);/*�������δ�������ʱֻ��
	                                      �ݵ�һ��Ԫ�صĵ�ַ&arr[0]
										  ������������Ԫ�ص�ַ arr=&arr[0]
										  ��������
										  1.sizeof(arr)��ʾ��������Ĵ�С
										  2.&arrȡ����������ĵ�ַ*/
	bubble_sort(arr,sz);
	for (int i = 0; i <= sz - 1; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
