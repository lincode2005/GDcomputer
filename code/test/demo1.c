#include <stdio.h>


int main()
{
    int a;
    int b = (a=3*5, a*4);
    printf("%d", a);
    return 0;
}

