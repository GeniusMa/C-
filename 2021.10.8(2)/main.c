#define _CRT_SECURE_MO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void test1() 
{
	int a[] = { 1,2,3,4 };
	int* p1 = (int*)(&a + 1);
	int* p2 = (int*)((int)a + 1);
	/*
	aӦΪ0x 00 00 00 04 00 00 00 03 00 00 00 02 00 00 00 01  
	���ڴ��д洢Ϊ0x 01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
	aΪ��Ԫ�ص�ַת��Ϊ����+1���Ǽ�һ ƫ��һ���ֽ�0x 01|00 00 00 02 00 00 00 03 00 00 00 04
													^
													|
	ת��Ϊָ�����ָ���λ�ã�����ָ�����������ȡ�ĸ��ֽھ��� 0x 00 00 00 02
	��ӡ��������0x 02 00 00 00
	*/
	printf("%x,%x", p1[-1], *p2);//p1[-1]==*(p1+(-1))
}

void test2() 
{
	int a[3][2] = { (0,1),(2,3),(4,5) };//���ű��ʽ ���Ϊ���ߣ������ʼ��Ϊ1��3��5
	int* p;
	p = a[0];
	printf("%d\n", p[2]);		
}

void test3() 
{
	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//�����P44 20:40
}

void test4() 
{
	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p1 = (int*)(&aa + 1);
	int* p2 = (int*)(*(aa + 1));
	printf(" %d,%d\n", *(p1 - 1), *(p2 - 1));
}

void test5() 
{
	char *a[] = { "play","at","faze" };//�ַ�ָ�������
	char* *p = a;
	p++;//pa����һ��char*�ĳ���
	printf("%s\n", *p);
}

void test6() 
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char* *cp[] = { c + 3,c + 2,c + 1,c };
	char** *cpp = cp;
	/*
	P45���һ��
	*/
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//++��cpp�ᱣ�������Ը���++cppΪcpp+1+1   ���ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//==(c+2)[-1]+1==*(c+2-1)+2==c[1]+2==EW
}

int main() 
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();
	return 0;
}