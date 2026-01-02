#include <stdio.h>

int aver(int arr[5])
{
    int sum=0, i;
    for(i=0; i<5; i++)
        sum += arr[i];
    return sum/5;
}

int main()
{   
    int a[5] = {1,2,3,4,5};
    int n;
    n = aver(a);  // 传递数组首地址
    printf("%d", n);
    return 0;
}

