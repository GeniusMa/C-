#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("��ĵ��Խ���60s��ػ��������� ������ ���\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else 
	{
		goto again;
	}
	return 0;
}
//��ڲ����ǽ� aȡ��ַ��ֵ�� int*���͵�ָ�����pa  int* pa = &a 
void Swap(int* pa,int* pb) //����ֵ����
{
	int tem = 0;
	tem = *pa;
	*pa = *pb;
	*pb = tem;
}

//int main() 
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}


//int main() 
//{
//	int a = 10;
//	int* pa = &a;//paָ�����(�������յ�ַ) ����Ϊint*
//	*pa=20;//�����ò���
//	printf("%d",a);	
//}

int is_leap_year(int a) 
{
	if ((a % 4 == 0 && a%100!=0)||(a%400==0))
	{
		return 1;
	}
}

//int main() 
//{
//	int year = 0;
//	for (year = 1000; year <= 2000;year++) 
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d\t", year);
//		}
//	}
//	return;
//}

int binary_search(int arr[], int k,int sz)//���ֲ���
{
	int left = 0;
	int right = sz - 1;
	while (left<=right) 
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
/*
	1 2 3 4 5 6 7 8 9 10
	0 1 2 3 4 5 6 7 8 9
*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//���鴫�δ���ֻ�ǵ�һ��Ԫ�صĵ�ַ
//	if (ret == -1) 
//	{
//		printf("�Ҳ���\n");	
//	}
//	else 
//	{
//		printf("�ҵ��� �±���%d\n",ret);
//	}
//}

void ABAB(int* num) 
{
	*num = *num + 1;
}

//int main() 
//{
//	int num = 0;
//	ABAB(&num);
//	printf("����%d��\n", num);
//	ABAB(&num);
//	printf("����%d��\n", num);
//	ABAB(&num);
//	printf("����%d��\n", num);
//	ABAB(&num);
//	printf("����%d��\n", num);
//	ABAB(&num);
//	printf("����%d��\n", num);
//	return 0;
//}

