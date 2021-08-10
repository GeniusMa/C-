#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main() //字符指针
//{
//	char ch[] = "wgsgsgs";
//	char* pc =ch;
//	printf("%s\n", ch);//数组名为首元素地址
//	printf("%s\n", pc);
//	return 0;
//}

//例题
//int main() 
//{
//	const char* pc1 = "123456";//常量字符串，不可修改 只需在内存中存一份
//	const char *pc2 = "123456";
//	if (pc1 == pc2)
//	{
//		printf("same");
//	}
//	else 
//	{
//		printf("different");
//	}
//	return 0;
//}





////指针数组
////存放指针
//int main()
//{
//	int arr[10] = { 0 };//整型数组 存放整形
//	char ch[5] = { 0 };//字符数组 存放字符
//	int* parr[4];//指针数组
//	return 0;
//}

//int main() //不会用 低级
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++) 
//	{
//		printf("%d\t", *(arr[i]));
//	}
//	return 0;
//}


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++) 
	{
		int j = 0;
		for (j = 0; j < 5; j++) 
		{
			printf("%d ", *(parr[i] + j)); 
		}
		printf("\n");
	}
	return 0;
}