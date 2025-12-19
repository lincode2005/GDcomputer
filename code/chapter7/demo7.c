#include <stdio.h>

int fun(int a, int b)
{
    return a*b;
    return a+b;
}

int main()
{
    int a=10, b=20;
    printf("%d", fun(a, b));
    return 0;
}

