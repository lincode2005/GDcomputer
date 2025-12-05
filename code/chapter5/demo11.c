#include <stdio.h>

int main()
{
    int i, j;
    for(i=1, j=10; i<j&&5; i+=4, j++)
        printf("%d %d\n", i, j);
    return 0;
}

