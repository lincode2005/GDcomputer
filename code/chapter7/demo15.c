#include <stdio.h>
void g();
void f()
{
    printf("f\n");
    g();
}

int main()
{
    f();
    g();
    return 0;
}
void g()
{
    printf("g");
}
