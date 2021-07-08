#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("你的电脑将在60s后关机，请输入 我是猪 解除\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
	}
	return 0;
}
//入口参数是将 a取地址赋值给 int*类型的指针变量pa  int* pa = &a 
void Swap(int* pa,int* pb) //交换值函数
{
	int tem = 0;
	tem = *pa;
	*pa = *pb;
	*pb = tem;
}

//int main() 
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main() 
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量(用来接收地址) 类型为int*
//	*pa=20;//解引用操作
//	printf("%d",a);	
//}

int is_leap_year(int a) 
{
	if ((a % 4 == 0 && a%100!=0)||(a%400==0))
	{
		return 1;
	}
}

//int main() 
//{
//	int year = 0;
//	for (year = 1000; year <= 2000;year++) 
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d\t", year);
//		}
//	}
//	return;
//}

int binary_search(int arr[], int k,int sz)//二分查找
{
	int left = 0;
	int right = sz - 1;
	while (left<=right) 
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
/*
	1 2 3 4 5 6 7 8 9 10
	0 1 2 3 4 5 6 7 8 9
*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//数组传参传的只是第一个元素的地址
//	if (ret == -1) 
//	{
//		printf("找不到\n");	
//	}
//	else 
//	{
//		printf("找到了 下标是%d\n",ret);
//	}
//}

void ABAB(int* num) 
{
	*num = *num + 1;
}

//int main() 
//{
//	int num = 0;
//	ABAB(&num);
//	printf("调用%d次\n", num);
//	ABAB(&num);
//	printf("调用%d次\n", num);
//	ABAB(&num);
//	printf("调用%d次\n", num);
//	ABAB(&num);
//	printf("调用%d次\n", num);
//	ABAB(&num);
//	printf("调用%d次\n", num);
//	return 0;
//}

