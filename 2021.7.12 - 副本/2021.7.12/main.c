#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main() 
//{
//	//int* p;//����ʼ����Ұָ��,������ʹ��
//	int a[10] = { 10 };
//	int i = 0;
//	int* p = &a;
//	for (i = 0; i < 12; i++) //Խ����ʣ�Ҳ����Ұָ��
//	{
//		//*p = i;
//		//p++;
//		*p++=i;
//	}
//	return 0;
//}

//int* tset() 
//{
//	int a = 10;
//	return &a;
//}
//
//int main() //ָ������ռ䱻�ͷ�
//{
//	int* p= tset();
//	printf("%d\n", *p);
//	printf("%p\n", p);
//	return 0;
//}

//int main() //һ����ʼ��ָ��,��֪����ʼ��ʲôʱ����ʼ��Ϊ��ָ��NULL
//{
//	//int* p = NULL;
//	int a = 10;
//	int*pa = &a;
//	*pa = 20;
//	//��ʹ��ʱ����ָ�븳ֵΪ��ָ��
//	*pa = NULL;
//	//*pa = 10;//����ʹ�÷�����ͻ�����벻����������
//	if (pa != NULL) 
//	{
//		
//	}
//
//	return 0;
//}

//int main() 
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int* pa = &arr;
//	int* pa = &arr[9];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++) 
//	{
//		printf("%d\n", *pa);
//		pa--;
//		//printf("%d\n", *pa);	
//		//pa++;
//	}
//	return 0;
//}

//ָ���ָ��ó��ľ���ֵΪ�м�Ԫ�ظ���

//int my_strlen(char* str) 
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') 
//	{
//		end++;
//	}
//	return (end - start);
//}
//
//int main() 
//{
//	char arr[] = { "olofmeister" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//�ʼ� :*pΪ�����ò��� �����и�ֵ������pΪָ�� ��ʾ��ַ
//***����ָ��ָ���������һ��Ԫ�ص�β����ַ����������ֻ����Ԫ�ص�ַ��ǰһ����ַ***

/*******************************************
                  ���
			    olofmeister
*******************************************/

//int main() 
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr);
//	printf("%d\n", arr+1);
//
//	printf("%d\n", &arr[0]);
//	printf("%d\n", &arr[0]+1);
//
//	printf("%d\n", &arr);
//	printf("%d\n", &arr+1);
//	return 0;
//}

//int main() 
//{
//	int arr[10] = { 0 };
//	int* p = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++) 
//	{
//		printf("%p      %p\n", p + i, &arr[i]); 
//	}
//}

//int main() 
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa = &pa;//����ָ��
//
//	return 0;
//}

int main() 
{
	int i = 0;
	int a = 10;
	int b = 11;
	int c = 12;
	//int *pa = &a;
	//int*pb = &b;
	//int*pc = &c;
	int* arr[3] = { &a,&b,&c };
	for (i = 0; i < 3; i++) 
	{
		*(arr[i]) = i;
		printf("%d\n", *(arr[i]));
	}

	return 0;
}