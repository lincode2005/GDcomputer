#include <stdio.h>

void Mystrcat(char *dest, char *src)
{
    while(*dest != '\0')
        dest++;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char s1[20] = "123";
    char s2[20] = "hello";
    char *p1=s1, *p2=s2;
    Mystrcat(p1, p2);
    puts(s1);
    return 0;
}

