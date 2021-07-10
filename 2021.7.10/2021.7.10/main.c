#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	int a = 10;
//	char b = 'x';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));//1
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(int [10]));
//	return 0;
//}

//int main() 
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s=a + 5));//4
//	printf("%d\n", s);//0
//	return 0;
//}

//int main() 
//{
//	int a = 0;
//	//0000 0000 0000 0000 0000 0000 0000 0000 正数 原码反码补码相同
//	//1111 1111 1111 1111 1111 1111 1111 1111 内存中存放的补码按位取反后
//	//1111 1111 1111 1111 1111 1111 1111 1110 符号位不变 减一取反变为源码（现为反码）
//	//1000 0000 0000 0000 0000 0000 0000 0001 按位取反后的a（-1）
//	printf("%d", ~a);
//	return 0;
//}

//int main() 
//{
//	int a = 11;//将其二进制后二位全变为1  11=1011
//	a = a | (1 << 2);
//	printf("%d\n", a); 
//	a = a & (~(1 << 2));//变回原样
//	printf("%d\n", a);
//	return 0;
//}

//int main() 
//{
//	int a = (int)3.14;//强制类型转换
//	printf("%d", a);
//}

//数组传参传首元素地址 默认以指针形式接受 指针大小为4/8   32位平台为4 64位平台为8
//int main() 
//{
//	int a = 6;
//	int b = 0;
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//	//等价于
//	b=(a > 5 ? 3 : -3);
//	printf("%d", b);
//}

struct student
{
	char name[20];
	int age;
	char id[20];
};

int main() 
{
//	s1.age = 20;
	struct student s1 = { "张三",20,"192020425" };
	struct student* ps = &s1;
	//printf("%s\n", s1.name);
	//printf("%d\n", s1.age);
	//printf("%s\n", s1.id);
	//printf("%d\n",(*ps).age );
	//printf("%s\n",(*ps).id );
	//printf("%s\n", (*ps).name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);
	printf("%s\n", ps->name);
	return 0;
}