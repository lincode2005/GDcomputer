#include <stdio.h>

void f(int n)
{
    int i=n/10;
    if(i!=0)
        f(i);
    putchar('0'+n%10);
}

int main()
{
    f(12);
}

