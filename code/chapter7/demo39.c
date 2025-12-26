#include <stdio.h>

int f(int n)
{
    static int x=1;
    x=x*n;
    return x;
}

int main()
{
    int i, x=0;
    for(i=1;i<=5;i++)
        x=f(i);
    printf("5! = %d", x);
    return 0;
}

