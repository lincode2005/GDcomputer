#include <stdio.h>

void fun(int *arr1, int *arr2, int n)
{
    int i;
    for(i=0; i<n; i++)
        arr2[i] = arr1[i];
}

int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int b[10];
    int i, n;
    printf("需要复制前几个数据: \n");
    scanf("%d", &n);
    fun(a, b, n);
    for(i=0; i<n; i++)
        printf("%d ", b[i]);
    return 0;
}