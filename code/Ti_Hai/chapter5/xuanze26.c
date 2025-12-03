#include <stdio.h>

int main()
{
    int x = 5, y;
    y = 2.75 + x/2;
    printf("%zu\n", sizeof(y));
    printf("%d\n", y);
    return 0;
}