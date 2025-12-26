#include <stdio.h>

void f()
{
    extern int b=200; // 不可以再次赋值
    printf("b=%d\n", b);
}
int main()
{
    f();
}
int b=100;

