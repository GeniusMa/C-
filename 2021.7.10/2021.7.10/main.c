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
//	//0000 0000 0000 0000 0000 0000 0000 0000 ���� ԭ�뷴�벹����ͬ
//	//1111 1111 1111 1111 1111 1111 1111 1111 �ڴ��д�ŵĲ��밴λȡ����
//	//1111 1111 1111 1111 1111 1111 1111 1110 ����λ���� ��һȡ����ΪԴ�루��Ϊ���룩
//	//1000 0000 0000 0000 0000 0000 0000 0001 ��λȡ�����a��-1��
//	printf("%d", ~a);
//	return 0;
//}

//int main() 
//{
//	int a = 11;//��������ƺ��λȫ��Ϊ1  11=1011
//	a = a | (1 << 2);
//	printf("%d\n", a); 
//	a = a & (~(1 << 2));//���ԭ��
//	printf("%d\n", a);
//	return 0;
//}

//int main() 
//{
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d", a);
//}

//���鴫�δ���Ԫ�ص�ַ Ĭ����ָ����ʽ���� ָ���СΪ4/8   32λƽ̨Ϊ4 64λƽ̨Ϊ8
//int main() 
//{
//	int a = 6;
//	int b = 0;
//	/*if (a > 5)
//		b = 3;
//	else
//		b = -3;*/
//	//�ȼ���
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
	struct student s1 = { "����",20,"192020425" };
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