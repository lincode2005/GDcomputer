#include <stdio.h>
void fun(int a[][3])
{
    int i, j;
    puts("«Î ‰»Î: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);
    }
}
int main()
{
    int a[2][3];
    fun(a);
    int i, j;
    puts("--- ‰≥ˆ---");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ", a[i][j]);
        putchar('\n');
    }   
    return 0;
}

