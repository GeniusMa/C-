#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main() //֮���Ǹ�����������ŵ�ַ
//{
//	int a = 10;//���ڴ��д���һ������
//	int* p = &a;//ȡa�ĵ�ַΪp  ָ�����int*
//	printf("%p\n",p); 
//	*p=20;//�����ò�����   *p�͵ȼ���a �ı�ֵ���ı��ַ
//	printf("a=%d\n",a);
//	return 0;
//}

/*
static���ξֲ����� �������ڱ䳤
static����ȫ�ֱ��� �ı���������򣨽��������ļ�����Ч��
%p ��ӡ��ַ
*/

//int main() 
//{
//	char ch = 'm';
//	char* p = &ch;
//	printf("chΪ%c\n",ch);
//	printf("ch�ĵ�ַΪ%p\n",p);
//	*p = 's';
//	printf("ch��Ϊ%c\n",ch);
//	printf("��ַ��ռ�ڴ�ռ��СΪ%d�ֽ�\n",sizeof p);
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
	struct BOOK b1 = {"C�������",55};
	printf("������%s\n���ۣ�%d\n",b1.name,b1.price);
	b1.price = 40;//ֻ��ֱ�Ӹ��ı���
	printf("������%s\n���ۣ�%d\n", b1.name, b1.price);
	struct BOOK* p = &b1 ;
	printf("b1��ַΪ%p\n", p);
	strcpy(b1.name,"C++");//name Ϊ������ Ϊ����
	printf("������%s\n���ۣ�%d\n", b1.name, b1.price);
	return 0;
}

/***********************
���
olofmeister
***********************/
