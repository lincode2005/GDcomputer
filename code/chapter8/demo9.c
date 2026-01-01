#include <stdio.h>

int main()
{
    int a, *p=&a;
    scanf("%d", p);
    printf("%d", *p);
    return 0;
}

