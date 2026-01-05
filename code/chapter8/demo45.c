#include <stdio.h>

int Mystrcmp(char *s, char *t)
{
    while (*s == *t)
    {
        s++;
        t++;       
    }
    return (*s - *t);
    
}

int main()
{
    char str1[10] = "HELLO";
    char str2[10] = "HELLM";
    char *p1 = str1, *p2 = str2;
    if (Mystrcmp(p1, p2) > 0)
    
        printf("%s > %s\n", p1, p2);
    else if(Mystrcmp(p1, p2) == 0)
        printf("%s = %s\n", p1, p2);
    else
        printf("%s < %s\n", p1, p2);
    return 0;
}