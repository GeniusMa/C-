#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

//void my_strcpy(char* dest,char* src) 
//{
//	while (*src != '\0') 
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

void my_strcpy(char* dest,const char* src)//const�����α��������޸�
{
	assert(dest != NULL);//����  Ϊ��ʲô������������������δ�ٱ���
	assert(src != NULL);//����
	while (*dest++ = *src++)
	{
		;
	}
}

int main()
{
	char arr1[] = "#####################";
	char arr2[] = "o1ofmeister";
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}


/*********************************************
                 ���
			   o1ofmeister
*********************************************/