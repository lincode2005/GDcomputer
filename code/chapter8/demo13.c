#include <stdio.h>

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main()
{
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    swap(p1, p2);
    printf("a=%d, b=%d", a, b);
    return 0;
}

