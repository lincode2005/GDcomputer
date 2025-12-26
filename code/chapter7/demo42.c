#include <stdio.h>

extern int b;
void f()
{
    printf("b=%d\n", b);
}

int main()
{
    printf("b=%d\n", b);
    f();
}
int b=100;

