#include <stdio.h>

int main()
{
    void fun(int a, int b);
    fun(10, 20);
    return 0;
}

void fun(int a, int b)
{
    printf("%d", a+b);
}

