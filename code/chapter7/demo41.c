#include <stdio.h>

void f()
{
    extern int b;
    printf("b=%d\n", b);
}

int main()
{
    printf("b=%d\n", b);
    f();
}

int b=100;

