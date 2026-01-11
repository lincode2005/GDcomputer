#include <stdio.h>

int main()
{
    int a = 100;
    int *p = &a;
    int **q;
    q = &p;
    printf("%d", **q);
    return 0;
}

