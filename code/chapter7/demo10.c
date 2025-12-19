#include <stdio.h>

int fun(float a, float b)
{
    float f = a+b;
    return f;
}

int main()
{
    printf("%d", fun(3.14, 4.94));
    return 0;
}

