#include <stdio.h>

int main()
{
    int a[8] = {1,3,5,7,9,2,4,6}, *p;
    p = &a[1];
    printf("%d\n", *p++);
    printf("%d\n", ++(*p));
    printf("%d\n", p[3]);
    printf("%d\n", *(p+2));
}

