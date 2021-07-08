#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>;
#include<string.h>;

//int main() 
//{
//	int a = 0;
//	int b = 1;
//	if (a == 1)
//	//{ 
//		if (b == 1)
//			printf("M");
//	//}
//		else
//			printf("m");//else 就近原则  与最近的if所搭配 不看对齐与否 加上大括号后才与第一个if搭配
//	return 0;
//}

//int main() 
//{
//	int x = 0;
//	scanf("%d",&x);
//	if (x % 2 == 0)
//		printf("偶数");
//	else
//		printf("奇数");
//
//	return 0;
//}

//int main()
//{
//	int x = 1;
//	while (x < 100) 
//	{
//		if (x % 2 == 0)
//			printf("%d偶数\n",x);
//		else
//			printf("%d奇数\n",x);
//		x++;
//	}
//
//	return 0;
//}

//int main() 
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day) //整形表达式，参数必须是整形
//	{
//	case 1:
//		printf("1"); 
//		break;
//	case 2:
//		printf("2");
//		break;
//	case 3:
//		printf("3");
//		break;
//	default:
//		printf("非可用输入");
//	} 
//	return 0;
//}

//int main() 
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) 
//	{	
//		putchar(ch); 
//	}
//	return 0;
//}

//int main() 
//{
//	int ms = 0;
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", password);
//	while ((getchar())!='\n')  
//	{
//		;
//	}
//	printf("请确认(Y/N)");
//	//scanf("%d", ms);//密码中有空格用这句替换gatcgar();
//	ms = getchar();
//	if (ms == 'Y')
//	{
//		printf("确认成功\n");
//		printf("密码为%s\n",password);
//	}
//	else
//		printf("放弃确认");
//	return 0;
//}

int main() 
{
	for (int i = 0; i < 10000; i++)
		printf("%d\n",i);
	return 0;
}


/**************
马海淇
olofmeister
**************/
