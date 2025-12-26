#include <stdio.h>

int b;
void f(int a)
{
    b = 2;  // 全局变量b的值为2
    printf("%d\n", ++a);
}

int main()
{
    int a=100;
    f(a);
    printf("%d %d\n", a, b);
}

