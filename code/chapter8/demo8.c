#include <stdio.h>

int main()
{
    int a=100, *p1=&a;
    int *p2=p1;
    printf("%d", *p2);
    return 0;
}

