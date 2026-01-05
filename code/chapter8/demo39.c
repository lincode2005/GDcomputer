#include <stdio.h>

int main()
{
    char a[20] = "abcdefg";
    char b[20];
    char *p1=a, *p2=b;
    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
    puts(b);  
    return 0;
}

