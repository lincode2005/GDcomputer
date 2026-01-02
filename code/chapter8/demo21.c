#include <stdio.h>

int main()
{
    int a[5], *p;
    for(p=a; p<a+5; p++)
        scanf("%d", p);
    for(p=a; p<a+5; p++)
        printf("%d ", *p);
    return 0;
}

