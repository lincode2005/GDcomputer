#include <stdio.h>

int main()
{
    int i;
    int a[5], *p=a;
    for(i=0; i<5; i++)
        scanf("%d", p+i);
    for(i=0; i<5; i++)
        printf("%d", p[i]); // »òprintf("%d", *(p+i));
    
}


