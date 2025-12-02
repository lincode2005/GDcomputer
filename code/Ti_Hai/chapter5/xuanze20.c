#include <stdio.h>

int main()
{
    int a = 3, b = 2, c = 1;
    c = 5?a++:b--;
    printf("%d\n", c);
    return 0;
}