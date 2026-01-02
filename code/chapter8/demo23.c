#include <stdio.h>

int main()
{
    int a[10] = {1,3,5,7,9,11,13,15,17,19};
    int *p1 = a, *p2=&a[5];
    printf("%lld", p2-p1);
    return 0;
}


