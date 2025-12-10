#include <stdio.h>

int main()
{
    int a[8], i;
    for(i=0; i<8; i++)
        a[i] = i;
    printf("%d", a[10]);
    return 0;
}

