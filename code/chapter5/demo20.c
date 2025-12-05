#include <stdio.h>

int main()
{
    int i, j=0;
    for(i=1; i<=100; i++)
    {
        if(i%3!=0)
            continue;
        printf("%d\t", i);
        j++;
        if(j%4==0)
            putchar('\n');
    }
    return 0;
}

