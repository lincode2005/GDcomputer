#include <stdio.h>

int *f(int arr[])
{
    return arr + 1;
}

int main()
{
    int a[8] = {1,5,9,7,6,2,0,3};
    int *p = f(a);
    printf("%d", *p);
    return 0;
}

