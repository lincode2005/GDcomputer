#include <stdio.h>

void Mystrcpy(char *dest, char *src)
{
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
    char s1[20];
    char s2[20] = "abcdefg";
    char *p1=s1, *p2=s2;
    Mystrcpy(p1, p2);
    puts(s1);
    return 0;
}

