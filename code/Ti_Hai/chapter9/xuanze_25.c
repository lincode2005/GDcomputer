#include <stdio.h>

int main()
{
    int **pp, *p, a = 10, b = 20;
    pp = &p;
    p = &a;
    p = &b;
    printf("%d %d", *p, **pp);
    return 0;
}