#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

////VS环境调试技巧
//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 100; i++) 
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}


////debug 与 release不同   release进行优化 可能有功能上的缺失，此代码debug不能运行 ralease可以运行
//int main() 
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i <= 12; i++) 
//	{
//		printf("hhhh\n");
//		arr[i] = 0;
//	}
//	return 0;
//}


////F9设置调试断点
////F5调试代码运行到断点处
////F10逐过程调试代码
////F11逐语句调试代码 （进入函数内）
////shift+F11跳出函数
//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 100; i++) 
//	{
//		printf("%d\n", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", 10-i);
//	}
//	return 0;
//}

int main() 
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) 
	{
		arr[i] = i+1;
		printf("%d\n", arr[i]);
	}
	return 0;
}