#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main() 
//{
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(short*));//4
//	//printf("%d\n", sizeof(int*));//4
//	//printf("%d\n", sizeof(double*));//4
//
//
//	int a = 0x11223344;
//	int *pa = &a;
//	char* pc = &a;
//	//printf("%p\n",pa);
//	//printf("%p\n", pc);//输出地址相同
//	//*pa = 0;//正常更改
//	//*pc = 0;//只更改一个字节
//	//指针类型决定了指针在进行解引用操作的时候，能够访问空间的大小
//	//int* p;   *p 四个字节
//	//char* p;    *p一个字节
//
//	return 0;
//}




//int main() 
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	//指针步长
//	//int* p; p+1-->4
//	//char* p; p+1-->1
//	return 0;
//}

int main() 
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = &arr;
	//char*p = &arr;//一次更改一个字节 之更改了两个半整形
	for (i = 0; i < 10; i++) 
	{
		*(p + i) = 1;
	}
	for (i = 0; i < 10; i++) 
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

//int main() 
//{
//	int *p;//局部的指针变量，被初始化为随机值(野指针)非法
//	return 0;
//}