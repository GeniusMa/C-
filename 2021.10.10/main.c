#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//int main() 
//{
//	int  arr[] = { 0,2,4,6,8 };
//	int* p = arr;
//	*(p + 3) += 3;
//	printf("%d,%d\n", *p, *(p + 3));
//	return 0;
//}

void char_reverse(char* str) //abcdef->fedcba
{
	assert(str);
	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left< right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s",arr);//不能读取空格
//	gets(arr);//读取一行
//	char_reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}

int main() //计算自幂数
{
	int i = 0;
	for (i=0; i <= 100000; i++) 
	{
		int n = 1;
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		while (tmp) 
		{
			sum += pow(tmp % 10, n);
			tmp /= 10;
		}
		if (i == sum) 
		{
			printf("%d\n", i);
		}

	}
	return 0;
}