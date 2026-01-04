#include <stdio.h>

void fun(int *arr, int n)
{
    int i, t;
    for(i=0; i<n/2; i++)
    {
        t = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = t;
    }
}

int main()
{
    int a[5] = {1,2,3,4,5}, *p = a, i;
    fun(p, 5);
    for(i=0; i<5; i++)
        printf("%d ", a[i]);
}

    