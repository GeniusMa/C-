#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	{
//		int a = 10;
//	}
//	printf("%d", a);//不能使用,
//	return 0;
//}

void Init(int arr[],int sz )
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++) 
	{
		printf("第%d个元素为%d\n", i + 1, arr[i]);
	}
}

void Reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

//int main() //数组前后交换
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main() //两数组交换数据
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int tmp = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print(arr1, sz);
//	printf("\n");
//	Print(arr2, sz);
//	return 0;
//}

//int main() //强制转换类型指针操作
//{
//	int arr[] = { 1,2,3,4,5 };
//	int i = 0;
//	short*p = (short*)arr;
//	for (i = 0; i < 4; i++) 
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x", a);
//	return 0;
//}

int main() 
{

	return 0;
}

//        sizeof返回的数是无符号数，当sizeof与其他数字比较是，会将比较数字先转化为无符号数，负数转化完后会非常大


/*************************************************
					马海淇				  
				  olofmeister
*************************************************/