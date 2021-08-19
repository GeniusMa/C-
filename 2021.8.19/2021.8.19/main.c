#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(int x,int y) 
{
	if (x == 1 && y == 1) 
	{
		printf("test successed!");
	}
	//...
}

//int main() 
//{
//	int* arr[10];//指针数组
//	int* (*pa)[10] = &arr;//数组指针
//	void(*p)(int, int) = test;
//	p(1, 1);
//	return 0;
//}


//void bubble_sort(int *p, int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) 
//		{
//			if (*(p + j) > *(p + (j + 1)))
//			{
//				int tmp = *(p + j);
//				*(p + j) = *(p + (j + 1));
//				*(p + (j + 1)) = tmp;
//			}
//		}
//	}
//}
//
//int main() 
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
};

int main() 
{
	struct Stu s[3] = { {"张三",10},{"李三",20},{"王五",30} };
	
	return 0;
}