#include <stdio.h>

int main()
{
    int a[3][3] = {{1,8,9}, {2,4,5},{3,0,6}};
    int i, sum=0;
    for(i=0; i<3; i++)
    {
        sum = sum + a[i][i];
    }
    printf("sum=%d\n", sum);
    return 0;
}

