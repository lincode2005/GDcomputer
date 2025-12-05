#include <stdio.h>

int main()
{
    int i=1, sum = 0;
L:  
    sum += i;
    i++;
    if(i<=100)
        goto L;
    printf("%d", sum);
    return 0;
}

