#include <stdio.h>

int main()
{
    int a = 20;
    int *p;
    p = &a;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", *&a);
    return 0;
}

