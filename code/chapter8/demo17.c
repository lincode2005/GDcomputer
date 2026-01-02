#include <stdio.h>

int main()
{
    int a[5] = {3,7,8,5,6};
    int *p = a;
    ++p;
    printf("%d", p[1]);
    return 0;
}

