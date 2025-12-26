#include <stdio.h>

int a=10, b=20;
int main()
{
    void fun(int, int); // º¯ÊıÉùÃ÷
    int c=30, d=40;
    fun(c, d);
    printf("%d %d %d %d\n", a, b, c, d);
    fun(b, a);
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}

void fun(int x, int y)
{
    a = x;
    x = y;
    y = a;
}

