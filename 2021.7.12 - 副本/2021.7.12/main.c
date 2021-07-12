#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main() 
//{
//	//int* p;//不初始化，野指针,不如需使用
//	int a[10] = { 10 };
//	int i = 0;
//	int* p = &a;
//	for (i = 0; i < 12; i++) //越界访问，也属于野指针
//	{
//		//*p = i;
//		//p++;
//		*p++=i;
//	}
//	return 0;
//}

//int* tset() 
//{
//	int a = 10;
//	return &a;
//}
//
//int main() //指针申请空间被释放
//{
//	int* p= tset();
//	printf("%d\n", *p);
//	printf("%p\n", p);
//	return 0;
//}

//int main() //一定初始化指针,不知道初始化什么时，初始化为空指针NULL
//{
//	//int* p = NULL;
//	int a = 10;
//	int*pa = &a;
//	*pa = 20;
//	//不使用时，将指针赋值为空指针
//	*pa = NULL;
//	//*pa = 10;//不能使用发生冲突，代码不能正常运行
//	if (pa != NULL) 
//	{
//		
//	}
//
//	return 0;
//}

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* pa = &arr;
//	int* pa = &arr[9];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", *pa);
//		pa--;
//		//printf("%d\n", *pa);	
//		//pa++;
//	}
//	return 0;
//}

//指针减指针得出的绝对值为中间元素个数

//int my_strlen(char* str) 
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') 
//	{
//		end++;
//	}
//	return (end - start);
//}
//
//int main() 
//{
//	char arr[] = { "olofmeister" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//笔记 :*p为解引用操作 ，进行赋值操作；p为指针 表示地址
//***允许指针指向数组组后一个元素的尾部地址，但不允许只想首元素地址的前一个地址***

/*******************************************
                  马海淇
			    olofmeister
*******************************************/

//int main() 
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr);
//	printf("%d\n", arr+1);
//
//	printf("%d\n", &arr[0]);
//	printf("%d\n", &arr[0]+1);
//
//	printf("%d\n", &arr);
//	printf("%d\n", &arr+1);
//	return 0;
//}

//int main() 
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%p      %p\n", p + i, &arr[i]); 
//	}
//}

//int main() 
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;//二级指针
//
//	return 0;
//}

int main() 
{
	int i = 0;
	int a = 10;
	int b = 11;
	int c = 12;
	//int *pa = &a;
	//int*pb = &b;
	//int*pc = &c;
	int* arr[3] = { &a,&b,&c };
	for (i = 0; i < 3; i++) 
	{
		*(arr[i]) = i;
		printf("%d\n", *(arr[i]));
	}

	return 0;
}