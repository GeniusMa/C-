#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main() //������
//{
//	printf("F the W\n");
//	return 0;
//}


//#include <stdio.h>//ʹ��C���Կ⺯������ͷ�ļ�
//printfһ��



//char     //�ַ���������
//short    //������
//int      //����
//long	   //������
//long long//����������
//float	   //�����ȸ�����
//double   //˫���ȸ�����                   ���ڴ�����ռ䴴������
//short int  ������


int main() 
{
	//char ch = 'A';
	//printf("%c\n",ch);//%c��ӡ�ַ���ʽ����
	//int age = 20;
	//printf("%d\n", age);//%d��ӡʮ��������  ����int long
	//%f ��ӡ������ С��
	//%p �Ե�ַ��ʽ��ӡ
	//%x ��ӡ16��������
	//%s ��ӡ�ַ���
	
	//float f = 5.5;
	//printf("%f\n", f);
	
	//double f = 5.14;
	//printf("%lf\n", f);
	
	//printf("%d\n", sizeof(char));//1
	//printf("%d\n", sizeof(short));//2
	//printf("%d\n", sizeof(int));//4
	//printf("%d\n", sizeof(long));//4
	//printf("%d\n", sizeof(long long));//8
	//printf("%d\n", sizeof(float));//4
	//printf("%d\n", sizeof(double));//8
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	scanf("%d%d",&num1,&num2);//&ȡ��ַ    scanf���뺯�����������ݣ�        ��num1��num2ȡ��ַ�����ڴ�
	num3 = num1 + num2;
	printf("��Ϊ %d\n", num3);

	return 0;
}













