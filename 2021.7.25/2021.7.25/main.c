#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

////VS�������Լ���
//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 100; i++) 
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}


////debug �� release��ͬ   release�����Ż� �����й����ϵ�ȱʧ���˴���debug�������� ralease��������
//int main() 
//{
//	int i = 0;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (i = 0; i <= 12; i++) 
//	{
//		printf("hhhh\n");
//		arr[i] = 0;
//	}
//	return 0;
//}


////F9���õ��Զϵ�
////F5���Դ������е��ϵ㴦
////F10����̵��Դ���
////F11�������Դ��� �����뺯���ڣ�
////shift+F11��������
//int main() 
//{
//	int i = 0;
//	for (i = 0; i < 100; i++) 
//	{
//		printf("%d\n", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", 10-i);
//	}
//	return 0;
//}

int main() 
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++) 
	{
		arr[i] = i+1;
		printf("%d\n", arr[i]);
	}
	return 0;
}