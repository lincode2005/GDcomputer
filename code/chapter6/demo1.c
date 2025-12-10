#include <stdio.h>

int main()
{
    int a[8], i;
    for(i=0; i<8; i++)
        a[i] = i;
    for(i=0; i<8; i++)
        printf("%d ", a[i]);
    return 0;
}

