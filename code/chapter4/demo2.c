#include <stdio.h>

int main()
{
    int a = 10, b = 0;
    printf("表达式的值: %d\n", a||b++);
    printf("变量b的值: %d", b);
    return 0;
}

