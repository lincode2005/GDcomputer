#include <stdio.h>

int main()
{
    int a=100;
    int *p;
    p = &a;
    *p = 20;
    printf("%d", a);
    return 0;
}

