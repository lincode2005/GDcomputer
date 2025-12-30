#include <stdio.h>

int main()
{
    int a=100, *p=&a;
    printf("%d", *&*p);
}
