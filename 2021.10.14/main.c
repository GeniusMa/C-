#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int is_left_move(char* str1,char* str2 ) 
{
    //strcat(str1, str1);//�ַ���׷�Ӻ���  �Լ����Լ�׷�Ӳ������������
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if(len1 != len2)
        return 0;
    strncat(str1, str1, len1);//�ַ���׷�Ӻ��� ����׷���Լ�
    char* ret=strstr(str1, str2);
    if (ret == NULL)
        return 0;
    else
        return 1;
}

void text1() 
{
    char arr1[30] = "abcdef";
    char arr2[] = "cdefab";
    int ret=is_left_move(arr1,arr2);
    if (ret == 1)
        printf("YES");
    else
        printf("NO");
}



void text2() 
{
    int switch_Num = 4;
    int arr[3][3] = { {1,2,3},{2,3,4},{3,4,5} };
    int i = 0;
    for (i = 0; i < 3; i++) 
    {
        if (switch_Num == arr[i][2]) 
        {
            printf("λ��%d��3��\n", i+1);
        }
        else if (switch_Num < arr[i][2]) 
        {
            int j = 0;
            for (j = 0; j < 3; j++) 
            {
                if (arr[i][j] == switch_Num) 
                {
                    printf("λ��%d��%d��\n", i + 1, j + 1);
                }
                else 
                {
                    printf("���ڸ���������\n");
                }
            }
        }
    }
}

int main()
{
    //text1();
    text2();

    return 0;
}