#include <stdio.h>

int fun(char *s)
{
    char *t;
    t = s;
    while(*t)
        t++;
    return (t-s);
}

int main()
{
    char str[] = "abcdef", *p=str;
    int length = fun(p);
    printf("%d", length);
    return 0;
}