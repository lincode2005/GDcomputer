#include <stdio.h>

int main()
{
    int i, max, a[5] = {1,3,-9,6,0};
    max = a[0];
    for(i=1; i<5; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    printf("max = %d\n", max);
    return 0;
}

