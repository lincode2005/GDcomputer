#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;
    if(a>b)
        if(a>c)
            printf("最大值为: %d\n", a);
        else
            printf("最大值为: %d\n", c);
    else
        if(b>c)
            printf("最大值为: %d", b);
        else
            printf("最大值为: %d", c);
    return 0;
}

