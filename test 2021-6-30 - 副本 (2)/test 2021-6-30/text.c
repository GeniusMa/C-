#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() //主函数
//{
//	printf("F the W\n");
//	return 0;
//}


//#include <stdio.h>//使用C语言库函数包含头文件
//printf一类



//char     //字符数据类型
//short    //短整型
//int      //整形
//long	   //长整型
//long long//更长的整形
//float	   //单精度浮点数
//double   //双精度浮点数                   向内存申请空间创建变量
//short int  短整型


int main() 
{
	//char ch = 'A';
	//printf("%c\n",ch);//%c打印字符格式数据
	//int age = 20;
	//printf("%d\n", age);//%d打印十进制整形  包括int long
	//%f 打印浮点数 小数
	//%p 以地址形式打印
	//%x 打印16进制数字
	//%s 打印字符串
	
	//float f = 5.5;
	//printf("%f\n", f);
	
	//double f = 5.14;
	//printf("%lf\n", f);
	
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%d%d",&num1,&num2);//&取地址    scanf输入函数（输入数据）        把num1和num2取地址放入内存
	num3 = num1 + num2;
	printf("和为 %d\n", num3);

	return 0;
}













