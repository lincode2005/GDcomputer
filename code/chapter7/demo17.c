#include <stdio.h>

int a(int x, int y)
{
    return x+y;
}
int main()
{
    printf("%d", a(10, a(20, 10)));
    return 0;
}

