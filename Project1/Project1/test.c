#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//#include <stdio.h>  C����ͷ�ļ�
//#include <string.h>  strlen����ͷ�ļ�//strlen �ַ�������
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d",&num1,&num2);
//	sum = num1 + num2;
//	printf("sum= %d",sum);
//
//	return 0;
//}

//int main() 
//{
//	const int num = 4;//const��ʾnumΪ������ ���ٱ仯  ���г����Եı���	 �����Ǳ���
//}

//#define ����ı�ʶ������


//enumö�ٳ��� 
//enum SEX
//{
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	enum SEX s = MALE; 
//	return 0;
//}

//int main() 
//{
//	char arr1[] = "abc";//ʵ��Ϊ'a''b''c''\0'    \0 �ַ���������־
//	char arr2[] = {'a','b','c',0};//����0��������
//	printf("%s\n",arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr2));//����0����³������ֵ
//	printf("%d\n", strlen(arr1));//���ȹ̶�3
//}
//strlen �ַ�������
//
//int main() 
//{
//	printf("abc\n\n\n\n\n");
//	/*********
//	ת���
//	/n ����
//	/t һ��tab
//	...�����ٶ�
//	*********/
//	return 0;
//}

//
//int main() 
//{
//	int input = 0;
//	printf("weather you well?choose 0/1:");
//	scanf("%d",&input);
//	if (input == 1)
//		printf("good\n");
//	else
//		printf("^_^/n");
//	return 0;
//}

//int main() 
//{
//	int line = 0;
//	int times = 1;
//	printf("go \n");
//	while (line < 50000)
//	{
//		printf("study %d\n",times);
//		line++;
//		times++;
//	}
//	printf("��ʱ��Ϊ��������� \n");
//	return 0;
//}

//int SUM(int x, int y )
//{
//	int z = y + x;
//	return z;
//}
//
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("��������������\n");
//	scanf("%d%d", &num1,&num2);
//	sum = SUM(num1, num2);
//	printf("sum= %d",sum);
//
//	return 0;
//}
//
//
//int main() 
//{
//	int arr[10] = {10,1,2,3,4,5,6,7,8,9};
//	/*char ch[5];*/
//	int i = 0;
//	while (i < 10) 
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}

// = ��ֵ
// == �ж�

//int MAX(int a,int b) 
//{
//	int c;
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//
//int main() 
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d",&num1,&num2);//scanf���������&ȡ��ַ
//	max = MAX(num1,num2);
//	printf("���ֵΪ%d\n",max);
//	return 0;
//}


//exp1 ? exp2 : exp3;    ��ϵ������
int main() 
{
	int a = 10;
	int b = 20;
	int max=0;
	max = (a > b ? a : b);
	printf("%d",max);
}











/**************************
���
olofmeister
**************************/


