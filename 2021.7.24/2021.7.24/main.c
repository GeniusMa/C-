#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//(1)
//struct stu //����ṹ������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//����ȫ�ֵĽṹ�����
//
//int main()
//{
//	//struct stu s;//����һ���ṹ�����ΪS���ֲ�������
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
//}Stu;//Stu�����ͣ���s1������ͬ,��Ϊ����typedef
//
//int main() //���ֶ���ṹ�������ʽ
//{
//	struct stu s1;//����һ���ṹ�����ΪS���ֲ�������
//	Stu s2;//����һ���ṹ�����ΪS���ֲ�������
//	return 0;
//}

//typedef struct GPIO_Config //��
//{
//	char GPIO_Mode[20];
//	char GPIO_Speed[20];
//}GPIO_InitTypeDef;
//int main() 
//{
//	GPIO_InitTypeDef GPIO_Struct;
//	return 0;
//}


//(3)�ṹ���Ա��ʼ��
//typedef struct stu 
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[8];
//}Stu;//Stu�����ͣ���s1������ͬ,��Ϊ����typedef
//
//int main() //���ֶ���ṹ�������ʽ
//{
//	struct stu s1 = {"����",18 ,"18324539722","��"};//����һ���ṹ�����ΪS���ֲ�������
//	Stu s2 = {"����",21,"18303331742","��"};//����һ���ṹ�����ΪS���ֲ�������
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
//	struct T t = { "olofmeister",{1,2} ,arr };//arr����������Ԫ�ص�ַ����Ҫȡ��ַ&
//	printf("%d", t.S.b);
//	return 0;
//}

//%s �ַ���
//%d ����
//%lf ������



typedef struct stu //����ṹ������
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
	Stu s = { "olofmeister",30,"i dont know","��" };
	Print1(s);
	Print2(&s);
	return 0;
}