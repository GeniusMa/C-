#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main() //之真是个变量用来存放地址
//{
//	int a = 10;//在内存中创建一个变量
//	int* p = &a;//取a的地址为p  指针变量int*
//	printf("%p\n",p); 
//	*p=20;//解引用操作符   *p就等价于a 改变值不改变地址
//	printf("a=%d\n",a);
//	return 0;
//}

/*
static修饰局部变量 生命周期变长
static修饰全局变量 改变变量作用域（仅在所在文件中有效）
%p 打印地址
*/

//int main() 
//{
//	char ch = 'm';
//	char* p = &ch;
//	printf("ch为%c\n",ch);
//	printf("ch的地址为%p\n",p);
//	*p = 's';
//	printf("ch又为%c\n",ch);
//	printf("地址所占内存空间大小为%d字节\n",sizeof p);
//	return 0;
//}
/*****************

*****************/
struct BOOK
{
	char name[20];
	short price;
}; 

int main() 
{
	struct BOOK b1 = {"C语言设计",55};
	printf("书名：%s\n定价：%d\n",b1.name,b1.price);
	b1.price = 40;//只能直接更改变量
	printf("书名：%s\n定价：%d\n", b1.name, b1.price);
	struct BOOK* p = &b1 ;
	printf("b1地址为%p\n", p);
	strcpy(b1.name,"C++");//name 为数组名 为常量
	printf("书名：%s\n定价：%d\n", b1.name, b1.price);
	return 0;
}

/***********************
马海淇
olofmeister
***********************/
