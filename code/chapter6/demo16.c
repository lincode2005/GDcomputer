#include <stdio.h>

int main()
{
    int a[3][3] = {{1,8,9}, {2,4,5},{3,0,6}};
    int i, j, sum = 0;
    for(i=0; i<3; i++)
        for(j=i; j<3; j++)
            sum = sum + a[i][j];
    printf("sum=%d", sum);

    return 0;
}

