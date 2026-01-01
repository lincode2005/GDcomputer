#include <stdio.h>

int main()
{
    int a=10,b=20, t;
    int *p1=&a, *p2=&b;
    t=*p1;
    *p1=*p2;
    *p2=t;
    printf("a=%d, b=%d\n", a, b);
    return 0;
}

