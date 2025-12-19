#include <stdio.h>

int fun(int x, int y)
{
    printf("x=%d, y=%d\n", x, y);
    return x+y;
}

int main()
{
    int c;
    c = fun(10, 20);
    printf("%d", c);
    return 0;
}

