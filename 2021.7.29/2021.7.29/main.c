#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//小端存储 倒着存
//大端存储 正着存
//int main() //判断当前字节的字节序
//{
//	int a = 1;
//	char*p = &a;
//	if (*p == 00)
//		printf("大端存储\n");
//	else if (*p == 01)
//		printf("小端存储\n");
//	return 0;
//}

//int main() 
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d  %d  %d", a, b, c);
//	return 0;
//}


//int main() 
//{
//	int a = -128;
//	printf("%u", a);
//	return 0;
//}

//int main() 
//{
//	int a = 128;//128一个char 放不下 相当于127+1为 1000 0000 C语言规定此数在有符号情况下为-128
//	printf("%u", a);
//	return 0;
//}

//4294967168
//4294967168



/*
无符号char的范围是 0->255
有符号char的范围是 -128->127
*/