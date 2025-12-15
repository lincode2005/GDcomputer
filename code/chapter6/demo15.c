#include <stdio.h>

int main()
{
    int i, j, sum = 0;
    int a[3][3] = {{1,8,9}, {2,4,5},{3,0,6}};
    for(i=0; i<3; i++)
        for(j=0; j<=i; j++)
            sum = sum + a[i][j];
    printf("sum=%d", sum);
    return 0;
}

