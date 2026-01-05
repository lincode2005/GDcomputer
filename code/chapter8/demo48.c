#include <stdio.h>

int main()
{
    int a[2][2] = {{1,2}, {3,4}};
    int b = 100;
    int *p[3];
    p[0] = a[0];
    p[1] = a[1];
    p[2] = &b;
    printf("%d, %d, %d\n", *p[0], *p[1], *p[2]);
    return 0;
}

