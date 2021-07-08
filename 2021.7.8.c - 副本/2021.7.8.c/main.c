#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include "arr.h"

int main() 
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);/*函数传参传递数组时只传
	                                      递第一个元素的地址&arr[0]
										  数组名就是首元素地址 arr=&arr[0]
										  两个例外
										  1.sizeof(arr)表示整个数组的大小
										  2.&arr取出整个数组的地址*/
	bubble_sort(arr,sz);
	for (int i = 0; i <= sz - 1; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
