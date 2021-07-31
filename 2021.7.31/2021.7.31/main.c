#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() //证明浮点型和整形存储形式不同
{
	int a = 9;
	float *p = (float *)&a;
	printf("%d\n", a);
	printf("%f\n", *p);

	*p = 9.0;
	printf("%d\n", a);
	printf("%f\n", *p);
	return 0;
}