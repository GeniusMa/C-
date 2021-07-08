#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15随机数
//	return 0;
//}

//int main() 
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i; i <= sz; i++)  
//	{
//		printf("&arr[% d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}

int main() 
{
	int arr[2][4] = { {1,2,3}, {4,5,6} };//1230  4560  二维数组
	int arr1[][3] = {1,2,3,4,5,6,7};//二维数组行可以省略 列不可以省略
	return 0;
}
