#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int text1() 
{
	unsigned char a = 100;
	unsigned char b = 200;
	unsigned char c = 0;
	c = a + b;
	printf("%d %d\n", a + b, c);//输出 300 44  
	//300 == 0001 0010 1100 超过了一个unsigned char 最大255 整型提升读取 0010 1100==44
	return 0;
}

void text2() 
{
	unsigned int a = 0x1234;
	unsigned char b = 0;
	b = *(unsigned char*)&a;
	/*
	  大端存储字节序00 00 12 34                      小端存储字节序34 12 00 00 
	低地址                                                                 高地址
	*/
	printf("%d\n", b);//小端存储读出52 为十进制的0x34            大端存储读出为0x00
}

void text3()
{
	char a[1000] = { 0 };
	int i = 0;
	for (i = 0; i < 1000; i ++) 
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));
}

void text4() 
{
	int killer = 0;
	for (killer = 'a'; killer < 'd'; killer++) 
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) 
		{
			printf("killer = %c\n", killer);
		}
	}
}

int main() 
{
	text1();
	text2();
	text3();
	text4();
	return 0;
}