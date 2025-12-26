#include <stdio.h>

void f()
{
    extern int b; 
    int b=300;
    printf("b=%d\n", b);
}
int main()
{
    f();
}
int b=100;

