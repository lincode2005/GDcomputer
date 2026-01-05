#include <stdio.h>

int f(int a, int b)
{
    return a+b;
}

int main()
{
    int (*p)(int, int);
    p = f; // 指向函数的入口地址
    int c = (*p)(10, 20);
    printf("%d", c);
    return 0;
}

