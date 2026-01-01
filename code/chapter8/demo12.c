#include <stdio.h>

int main()
{
    int a=10, b=20;
    int *p1=&a, *p2=&b, *t;
    t=p1;
    p1=p2;
    p2=t;
    printf("a=%d, b=%d\n", a, b);
    printf("*p1=%d, *p2=%d", *p1, *p2);
    return 0;
}

