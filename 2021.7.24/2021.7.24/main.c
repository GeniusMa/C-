#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//(1)
//struct stu //定义结构体类型
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//三个全局的结构体变量
//
//int main()
//{
//	//struct stu s;//定义一个结构体变量为S（局部变量）
//	s1.age = 18;
//	s2.age = 12;
//	printf("%d\n%d\n", s1.age, s2.age);
//	return 0;
//}

////(2)
//typedef struct stu 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//Stu是类型，与s1变量不同,因为多了typedef
//
//int main() //两种定义结构体变量方式
//{
//	struct stu s1;//定义一个结构体变量为S（局部变量）
//	Stu s2;//定义一个结构体变量为S（局部变量）
//	return 0;
//}

//typedef struct GPIO_Config //例
//{
//	char GPIO_Mode[20];
//	char GPIO_Speed[20];
//}GPIO_InitTypeDef;
//int main() 
//{
//	GPIO_InitTypeDef GPIO_Struct;
//	return 0;
//}


//(3)结构体成员初始化
//typedef struct stu 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[8];
//}Stu;//Stu是类型，与s1变量不同,因为多了typedef
//
//int main() //两种定义结构体变量方式
//{
//	struct stu s1 = {"张三",18 ,"18324539722","男"};//定义一个结构体变量为S（局部变量）
//	Stu s2 = {"李四",21,"18303331742","男"};//定义一个结构体变量为S（局部变量）
//
//	return 0;
//}


//struct s 
//{
//	int a;
//	int b;
//};
//
//struct T 
//{
//	char arr[20];
//	struct s S;
//	char  *pc;
//};
//
//int main()
//{
//	char arr[] = "rain";
//	struct T t = { "olofmeister",{1,2} ,arr };//arr数组名是首元素地址不需要取地址&
//	printf("%d", t.S.b);
//	return 0;
//}

//%s 字符串
//%d 整形
//%lf 浮点数



typedef struct stu //定义结构体类型
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name = %s\n", tmp.name);
	printf("age = %d\n", tmp.age);
	printf("tele = %s\n", tmp.tele);
	printf("sex = %s\n", tmp.sex);
}

void Print2(Stu* ps) 
{
	printf("name = %s\n", ps->name);
	printf("age = %d\n", ps->age);
	printf("tele = %s\n", ps->tele);
	printf("sex = %s\n", ps->sex);
}

int main() 
{
	Stu s = { "olofmeister",30,"i dont know","男" };
	Print1(s);
	Print2(&s);
	return 0;
}