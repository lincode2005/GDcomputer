#include <stdio.h>

int f(int n)
{
    if(n==1)
        return 1;
    else
        return f(n-1)*n;
}
int main()
{   
    int i=5;
    printf("%d!=%d", i, f(i));
    return 0;
}

