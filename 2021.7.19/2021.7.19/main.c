#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void print_table(int n) 
{
	int i = 0;
	for (i = 01; i <= n; i++) 
	{
		int j = 0;
		for (j = 1; j <= i; j++) 
		{
			printf("%d * %d = %d\t", i , j , i*j);
		}
		printf("\n");
	}
}

//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

int my_strlen(char* p) 
{
	int c = 0;
	while (*p != '\0')
	{
		c++;
		p++;
	}
	return c;
}

void reverse_str(char arr[]) 
{
	int left = 0;
	int right = my_strlen(arr)-1;
	int tmp = 0;
	while (left <= right) 
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}



//int main() 
//{
//	char arr[] = "abcdefg";
//	reverse_str(arr);
//	printf("%s\n", arr);
//	return 0;
//
//}

int DigitSum(unsigned int num)//¸÷Î»ÀÛ¼Ó
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else 
	{
		return num;
	}
}

//int main() 
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d", ret);
//	return 0;
//}

double Pow(int n, int k) 
{
	if (k < 0)
		return (1.0 / (Pow(n, -k)));
	else if (k == 0)
		return 1;
	else
		return n * (Pow(n, k - 1));
}

int main() 
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}