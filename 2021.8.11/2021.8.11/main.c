#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ָ������ ������ �������ָ��
//����ָ�� ��ָ�� 
//int main() 
//{
//	int *p = NULL;// ����ָ�� ָ�����ε�ָ�� ������εĵ�ַ
//	char* pc = NULL;// �ַ�ָ�� ָ���ַ���ָ�� ����ַ��ĵ�ַ
//	//����ָ�� ָ�������ָ�� �������ĵ�ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*
//	arr ��Ԫ�ص�ַ
//	&arr[0] ��Ԫ�ص�ַ
//	&arr ����ĵ�ַ
//	*/
//	int (*p)[10]= &arr;//p ��������ָ�� *p˵���Ǹ�ָ�� [10]˵��ָ��һ������ ������Ϊ[]��*���ȼ��߻��*p[10]����һ������
//	return 0;
//}

//int main() //��Ϊarr������ÿ��Ԫ��������char* ������char* (*pc)[50]
//{
//	char* arr[5];
//	char* (*pc)[50] = &arr;
//	return 0;
//}


//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*p+i));//*p == arr
//	}
//	/*for (i = 0; i < 10; i++) 
//	{
//		printf("%d ", (*p)[i]);
//	}*/
//	return 0;
//}

void printf1(int arr[3][5],int x,int y) 
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++) 
	{
		for (j = 0; j < y; j++) 
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void printf2(int (*p)[5] ,int x,int y) //arr����Ԫ�ص�ַ Ϊ�����ά�����һ������{1��2��3��4��5}�ĵ�ַ ���������ַ��
                                       //����������ָ��������
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++) 
	{
		for (j = 0; j < y; j++) 
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}

int main() 
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	printf1(arr, 3, 5);
	printf2(arr, 3, 5);
	return 0;
}










//void print(int* p,int x)
//{
//	int i = 0;
//	for (i = 0; i < x; i++) 
//	{
//		printf("%d ", *(p + i));
//	}
//}
//
//int main()                                                //������ϰ
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr, 5);
//	return 0;
//}