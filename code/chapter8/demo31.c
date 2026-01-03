#include <stdio.h>

void fun(int arr[])
{
    ++arr[0];
}

int main()
{
    int a[5] = {1,2,3,4,5};
    int *p = a;
    fun(p);
    printf("%d", a[0]);
    return 0;
}

