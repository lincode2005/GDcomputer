#include <stdio.h>

int f(int x, int y)
{
    return x;
}
int main()
{   
    int a = 100;
    printf("%d", f(f(a++, a++), f(a++, a++)));
    return 0;
}

