#include <stdio.h>

int fun(int a, int b)
{
    printf("%d", a+b);
    return 0;
}

int main()
{
    float x=3.5, y=2.4;
    fun(x, y);
    return 0;
}

