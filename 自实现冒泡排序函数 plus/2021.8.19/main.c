#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void test(int x,int y) 
{
	if (x == 1 && y == 1) 
	{
		printf("test successed!");
	}
	//...
}

//int main() 
//{
//	int* arr[10];//ָ������
//	int* (*pa)[10] = &arr;//����ָ��
//	void(*p)(int, int) = test;
//	p(1, 1);
//	return 0;
//}


//void bubble_sort(int *p, int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++) 
//		{
//			if (*(p + j) > *(p + (j + 1)))
//			{
//				int tmp = *(p + j);
//				*(p + j) = *(p + (j + 1));
//				*(p + (j + 1)) = tmp;
//			}
//		}
//	}
//}
//
//int main() 
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\t", arr[i]);
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_int(const void* e1, const void* e2) 
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//int main() 
//{
//	int arr[] = { 9,8,7,66,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct Stu s[3] = { {"����",10},{"����",20},{"����",30} };
//	//void* �����͵�ָ��,���Խ����������͵�ַ
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//��һ������ �Ǵ������������Ԫ�ص�ַ
//	//�ڶ������� ����Ԫ�ظ���
//	//���������� ÿ��Ԫ����ռ�ռ䣬��λ�ֽ�
//	//���ĸ����� ����ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ�����Լ�ʵ��
//	//            ���������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ   
//	for (int i = 0; i < sz; i++) 
//	{
//		printf("%d\t", arr[i]);
//	} 
//	return 0;
//}

int cmp_int( void* e1,  void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

Swap(char* e1, char* e2,int width)
{
	int i = 0;
	for (int i = 0; i < width; i++) 
	{
		char tmp = *(e1+i);
		*(e1 + i) = *(e2 + i);
		*(e2 + i) = tmp;
	}
}

void bubble_sort(void* base,int sz,int width,int (*cmp)(void* e1,void* e2)) 
{
	int i = 0;
	for (i = 0; i < sz - 1; i++) 
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) 
		{
			if (cmp((char*)base+j* width,(char*)base+(j+1)*width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1)*width, width);
			}
		}
	}
}

//int cmp_int(void* e1, void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}
//
//void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2)) //�Լ���дһ�飬��ϰ���ã��ɶ��Բ����һ��
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) 
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) 
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) 
//			{
//				int k = 0;
//				for (k = 0; k < width; k++) 
//				{
//					char tmp = 0;
//					tmp = *(((char*)base + (j + 1) * width)+k);
//					*(((char*)base + (j + 1) * width)+k) = *(((char*)base + j * width)+k);
//					*(((char*)base + j * width)+k) = tmp;
//				}
//			}
//		}
//	}
//}

int main() 
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++) 
	{
		printf("%d\t", arr[i]);
	} 
}


