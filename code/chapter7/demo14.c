#include <stdio.h>

void f()
{
    void g();
    printf("f\n");
    g();
}

int main()
{
    void g();
    f();
    g();
    return 0;
}
void g()
{
    printf("g");
}

