#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main() 
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main() 
//{
//	//printf("%d\n", sizeof(char*));//4
//	//printf("%d\n", sizeof(short*));//4
//	//printf("%d\n", sizeof(int*));//4
//	//printf("%d\n", sizeof(double*));//4
//
//
//	int a = 0x11223344;
//	int *pa = &a;
//	char* pc = &a;
//	//printf("%p\n",pa);
//	//printf("%p\n", pc);//�����ַ��ͬ
//	//*pa = 0;//��������
//	//*pc = 0;//ֻ����һ���ֽ�
//	//ָ�����;�����ָ���ڽ��н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//	//int* p;   *p �ĸ��ֽ�
//	//char* p;    *pһ���ֽ�
//
//	return 0;
//}




//int main() 
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	//ָ�벽��
//	//int* p; p+1-->4
//	//char* p; p+1-->1
//	return 0;
//}

int main() 
{
	int arr[10] = { 0 };
	int i = 0;
	int* p = &arr;
	//char*p = &arr;//һ�θ���һ���ֽ� ֮����������������
	for (i = 0; i < 10; i++) 
	{
		*(p + i) = 1;
	}
	for (i = 0; i < 10; i++) 
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}

//int main() 
//{
//	int *p;//�ֲ���ָ�����������ʼ��Ϊ���ֵ(Ұָ��)�Ƿ�
//	return 0;
//}