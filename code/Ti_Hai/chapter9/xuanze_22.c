#include <stdio.h>

int main()
{
    int a[2][3] = {{1,2,3}, {4,5,6}};
    int (*pa)[3];
    pa = a;
    printf("%d\n", *(pa[1]+2));
    return 0;
}

