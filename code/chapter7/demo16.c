#include <stdio.h>
void b()
{
    printf("b\n");
}
void a()
{
    printf("a\n");
    b();
}
int main()
{
    a();
    return 0;
}

