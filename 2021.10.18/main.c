#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void text1() 
{
    const char* p1 = "abcdef";
    const char* p2 = "cde";
    char* p = strstr(p1, p2);
    if (p == NULL)
    {
        printf("×Ö´®²»´æÔÚ");
    }
    else
    {
        printf("%s\n", p);
    }
}

my_strstr(const char* p1,const char* p2) 
{
    char* s1 = p1;
    char* s2 = p2;
    char* cur = p1;
    if (*p2 == '\0')
    {
        return p1;
    }
    while (*cur) 
    {
        s1 = cur;
        s2 = p2;
        while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) 
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0') 
        {
            return cur;
        }
        cur++;
    }
}

int main()
{
    text1();
    char* p1 = "abbbcdef";
    char* p2 = "bbc";
    char* ret = my_strstr(p1, p2);
    printf("%s\n", ret);
    return 0;
}