#include <stdio.h>

int main()
{
    int a[5] = {3,7,8,5,6};
    int *p1 = &a[0], *p2=&a[4];
    printf("%lld", p2-p1);
    return 0;
}

