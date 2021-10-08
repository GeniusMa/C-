#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void text()
{
	int a[] = { 0,1,2,3,4 };
	int* p = (int*)(&a + 1);
	printf("%d,%d", *(a +1), *(p - 1));//输出结果为1和4
/***********************************************************************************
a为数组名 是首元素地址，+1后解引用对应数组里的1
p为&a（数组的地址）+1后成为跳过该数组，后一位的地址，-1解引用后为该数组最后一个元素。
***********************************************************************************/	
}

//int main()
//{
//	//text();
//
//	return 0;
//}

struct Text 
{
	int Num;
	char* pcName;
	short sData;
	char cha[2];
	short sBa[4];
}*p;
//该结构体大小为20个字节
int main() 
{
	p = (struct Text*)0x100000;
	printf("%p\n", p);	
	printf("%p\n", p + 0x1);//指针+一个结构体大小
	printf("%p\n", (unsigned long)p + 0x1);//指针+一个整形大小
	printf("%p\n", (unsigned int*)p + 0x1);//指针加一个指针大小
	//指针+- 取决于指针类型
	return 0;
}



//int main() 
//{
//
//	return 0;
//}












/************************************************
                     马海淇
				  o1ofmeister
************************************************/
