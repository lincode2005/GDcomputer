#include <stdio.h>

int fun(int n)
{
    if(n==1 || n==2)
        return 1;
    return fun(n-1) + fun(n-2);
}

int main()
{
    int i, n;
    scanf("%d", &n); // n为打印的项数
    for(i=1; i<=n; i++)
        printf("%d ", fun(i));
    return 0;
}

