#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() 
{
	char arr[] = "abcdef";
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr+0));//不是单独放入，为首元素地址 4或者8字节
	printf("%d\n", sizeof(*arr));//首元素地址解引用为首元素 1
	printf("%d\n", sizeof(&arr));//4
	printf("%d\n", sizeof(arr[1]));//1
	printf("%d\n", sizeof(&arr+1));//4
	printf("%d\n", sizeof(&arr[2]+1));//4

	char* p = "abcdef";
	printf("%d\n", sizeof(p[0]));//1  arr[0]==*(arr+0)    p[0]==*(p+0)=='a'
	printf("%d\n", sizeof(&p[0] + 1));//4/8  b的地址 p[0]==a ,&p[0]==a的地址,+1为b的地址

	return 0;
}

