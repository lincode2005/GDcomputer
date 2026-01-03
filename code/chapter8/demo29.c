#include <stdio.h>

void fun(int *arr)
{
    ++(*arr);
}

int main()
{
    int a[5] = {1,2,3,4,5};
    fun(a);
    printf("%d", a[0]);
    return 0;
}



