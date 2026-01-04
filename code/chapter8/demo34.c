#include <stdio.h>

int main()
{
    int a[3][3] = {{1,2,6}, {5,0,3}, {7,4,9}};
    int *p = a[2];
    printf("%d", *(p+1));
    return 0;
}



