#include "stdio.h"

int main()
{
    char a[10] = {9,8,7,6,5,4,3,2,1,0};
    char *p = a+5;
    printf("%d", *--p);
    return 0;
}

