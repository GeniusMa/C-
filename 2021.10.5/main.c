#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() 
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));//���ǵ������룬Ϊ��Ԫ�ص�ַ 4����8�ֽ�
	printf("%d\n", sizeof(*arr));//��Ԫ�ص�ַ������Ϊ��Ԫ�� 1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[2]+1));//4

	char* p = "abcdef";
	printf("%d\n", sizeof(p[0]));//1  arr[0]==*(arr+0)    p[0]==*(p+0)=='a'
	printf("%d\n", sizeof(&p[0] + 1));//4/8  b�ĵ�ַ p[0]==a ,&p[0]==a�ĵ�ַ,+1Ϊb�ĵ�ַ

	return 0;
}

