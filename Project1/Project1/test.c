#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//#include <stdio.h>  C语言头文件
//#include <string.h>  strlen函数头文件//strlen 字符串长度
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum= %d",sum);
//
//	return 0;
//}

//int main() 
//{
//	const int num = 4;//const表示num为常变量 不再变化  具有常属性的变量	 本质是变量
//}

//#define 定义的标识符常量


//enum枚举常量 
//enum SEX
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	enum SEX s = MALE; 
//	return 0;
//}

//int main() 
//{
//	char arr1[] = "abc";//实际为'a''b''c''\0'    \0 字符串结束标志
//	char arr2[] = {'a','b','c',0};//不加0出现乱码
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));//不加0情况下长度随机值
//	printf("%d\n", strlen(arr1));//长度固定3
//}
//strlen 字符串长度
//
//int main() 
//{
//	printf("abc\n\n\n\n\n");
//	/*********
//	转义符
//	/n 换行
//	/t 一个tab
//	...其他百度
//	*********/
//	return 0;
//}

//
//int main() 
//{
//	int input = 0;
//	printf("weather you well?choose 0/1:");
//	scanf("%d",&input);
//	if (input == 1)
//		printf("good\n");
//	else
//		printf("^_^/n");
//	return 0;
//}

//int main() 
//{
//	int line = 0;
//	int times = 1;
//	printf("go \n");
//	while (line < 50000)
//	{
//		printf("study %d\n",times);
//		line++;
//		times++;
//	}
//	printf("是时候为人民服务了 \n");
//	return 0;
//}

//int SUM(int x, int y )
//{
//	int z = y + x;
//	return z;
//}
//
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("请输入两个数字\n");
//	scanf("%d%d", &num1,&num2);
//	sum = SUM(num1, num2);
//	printf("sum= %d",sum);
//
//	return 0;
//}
//
//
//int main() 
//{
//	int arr[10] = {10,1,2,3,4,5,6,7,8,9};
//	/*char ch[5];*/
//	int i = 0;
//	while (i < 10) 
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

// = 赋值
// == 判断

//int MAX(int a,int b) 
//{
//	int c;
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d",&num1,&num2);//scanf函数必须加&取地址
//	max = MAX(num1,num2);
//	printf("最大值为%d\n",max);
//	return 0;
//}


//exp1 ? exp2 : exp3;    关系操作符
int main() 
{
	int a = 10;
	int b = 20;
	int max=0;
	max = (a > b ? a : b);
	printf("%d",max);
}











/**************************
马海淇
olofmeister
**************************/


