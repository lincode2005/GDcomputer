#include <stdio.h>

int main()
{
    int a=100;
    int *p = &a;    // 指针变量p指向了变量a的地址
    *p = 20;
    printf("%d", a);
    return 0;
}
