#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

int my_strlen(const char* str) 
{
    int count = 0;
    assert(str != NULL);
    while (*str) 
    {
        count++;
        str++;
    }
    return count;
}

char* my_strcpy(char *dest,const char* src) 
{
    assert(dest != NULL);
    assert(src != NULL);
    char* ret = dest;
    while (*dest++ = *src++);
    return ret;
}

char* my_strcat(char* dest,const char* src) 
{
    assert(dest && src);
    char* ret = dest;
    while (*dest) 
    {
        dest++;
    }
    while (*dest++ = *src++);
    return ret;
}

int main()
{
    int len = my_strlen("abcdef");
    printf("%d\n", len);


    char arr1[] = { "abcdefdasdadada" };
    char arr2[] = { "olofmeister" };
    my_strcpy(arr1, arr2);
    printf("%s\n", arr1);

    char cat_arr1[30] = { "XANTARES " };
    char cat_arr2[] = { "PEEK" };
    my_strcat(cat_arr1, cat_arr2);
    printf("%s\n", cat_arr1);
    return 0;
}
