#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	int i = 0;
//	do 
//	{
//		if (i == 5)
//			break;
//		printf("%d\n", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//int main() 
//{
//	int n = 0;
//	int s = 0;
//	int reg = 1;
//	scanf("%d",&n);
//	for (s = 1; s <= n; s++)
//	{
//		reg = reg * s;
//	}
//	printf("%d",reg); 
//	return 0;
//}

int Count(int i)//n阶乘与n-1阶乘 ...累加
{
	int n = 0;
	int s = 0;
	int sum = 0;
	for (n = 1; n <= i; n++)
	{
		int reg = 1;
		for (s = 1; s <= n; s++)
		{
			reg = reg * s;
		}
		sum = sum + reg;
	}
	return sum;
}
//
//int main()
//{
//	int x= Count(4);
//	printf("%d",x);
//	return 0;
//}
//
//int main() 
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int k = 7;
//	int n = 0;
//	int i = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (n<=sz)
//	{
//		if (arr[n] == i)
//		{
//			printf("数组第%d位为7\n", n);
//			break;
//		}
//		n++;
//	}
//	return 0;
//}
//

//int main()//求数组最大值
//{
//	int arr[] = { 1,232,4,5,6,7,8,9,7,99,55 };
//	int i = 0;
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <= 10; i++) 
//	{
//		if (max < arr[i]) 
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d", max);
//	return;
//}

//int main() //1/1-1/2+1/3-1/4.....1/100
//{
//	int i = 0;
//	double count = 0.0;
//	int flag = 1;
//	for (i=1; i <= 100; i++) 
//	{
//		count+= flag*(1.0/i);
//		flag = -flag;
//	}
//	printf("%lf", count);
//	return 0;
//}


int main() 
{
	int i = 0;
	for (i = 1; i <= 9; i++) 
	{
		int j = 1;
		for (j; j <= i; j++) 
		{
			printf("%dX%d=%-2d\t",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}





