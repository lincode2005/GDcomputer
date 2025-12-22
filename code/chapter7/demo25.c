#include <stdio.h>

void s(int a[9], int n)
{
    int i, t;
    for(i=0; i<n/2; i++)
    {
        t = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = t;
    }

}
int main()
{   
    int a[9] = {1,2,3,4,5,6,7,8,9};
    s(a, 9);
    int i;
    for(i=0; i<9; i++)
        printf("%d ", a[i]);
    return 0;
}


