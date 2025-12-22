#include <stdio.h>

void s(int a[10])
{
    printf("s函数中a的大小: %zu", sizeof(a));
}

int main()
{
    int a[9] = {1,2,3,4,5,6,7,8,9};
    printf("main函数中a的大小: %zu\n", sizeof(a));
    s(a);

    return 0;
}

