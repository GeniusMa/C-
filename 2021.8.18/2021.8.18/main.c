#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void print(char *str) 
{
	printf("%s\n", str);
}

void test(void (*p)(char*))
{
	p("o1ofmeister");
}

//»Øµ÷º¯Êý
int main() 
{
	test(print);
	return 0;
}