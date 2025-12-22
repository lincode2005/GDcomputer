#include <stdio.h>

void s(int a[])
{
    int i;
    for(i=0; i<8; i++)
        a[i] += 1;
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    s(&a[2]);
    int i;
    for(i=0; i<10; i++)
        printf("%d ", a[i]);
    return 0;
}

