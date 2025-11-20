#include <stdio.h>

int main()
{
    int a=10, b=20, y;
    y = (a, a+5, b++, a+b);
    printf("%d", y);
    return 0;
}
