#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int Count(unsigned int a) //求一个二进制数中一的个数(实际为求补码中的个数，规定正数反码补码一样，补码是用于负数（符号位不变）)
//{
//	int c = 0;
//	while (a)  
//	{
//		int i = 0;
//		int n = 0;
//		i = a % 2;
//		a = a / 2;
//		if (i == 1) 
//		{
//			c++; 
//		}
//	}
//	return c;
//}

//int Count(int a) 
//{
//	int c = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++) 
//	{
//		if (((a >> i) & 1) == 1) 
//		{
//			c++;
//		}
//	}
//	return c;
//}

int Count(int a) 
{
	int c = 0;
	while (a) 
	{
		a = a & (a - 1);
		c++;
	}
	return c;
}


//int main() 
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count=Count(a);
//	printf("%d", count);
//	return 0;
//}

int get_diff_bit(int m,int n) //两个二进制数中不同位数
{
	int tmp = m ^ n;
	return  Count(tmp);

}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m,n);
//	printf("%d", count);
//	return 0;
//}


//int main()//不创建变量交换数值
//{
//	int a, b;
//	a = 5;
//	b = 7;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}
///*
// 0101  5a
// 0111  7b
// 
// 0010a
//
// 0101b
//
// 0111a
// */

int main() //乘法口诀表
{

	return 0;
}