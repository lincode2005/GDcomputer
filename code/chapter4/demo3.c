#include <stdio.h>

int main()
{
    int a = 0, b = 1, c = 0;
    printf("表达式的值: %d\n", !a+0 && b || c++);
    printf("变量c的值: %d", c);
    return 0;
}

