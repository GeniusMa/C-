#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//int main() //�ַ�ָ��
//{
//	char ch[] = "wgsgsgs";
//	char* pc =ch;
//	printf("%s\n", ch);//������Ϊ��Ԫ�ص�ַ
//	printf("%s\n", pc);
//	return 0;
//}

//����
//int main() 
//{
//	const char* pc1 = "123456";//�����ַ����������޸� ֻ�����ڴ��д�һ��
//	const char *pc2 = "123456";
//	if (pc1 == pc2)
//	{
//		printf("same");
//	}
//	else 
//	{
//		printf("different");
//	}
//	return 0;
//}





////ָ������
////���ָ��
//int main()
//{
//	int arr[10] = { 0 };//�������� �������
//	char ch[5] = { 0 };//�ַ����� ����ַ�
//	int* parr[4];//ָ������
//	return 0;
//}

//int main() //������ �ͼ�
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++) 
//	{
//		printf("%d\t", *(arr[i]));
//	}
//	return 0;
//}


int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++) 
	{
		int j = 0;
		for (j = 0; j < 5; j++) 
		{
			printf("%d ", *(parr[i] + j)); 
		}
		printf("\n");
	}
	return 0;
}